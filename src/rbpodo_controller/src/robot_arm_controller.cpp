#include <chrono>
#include <memory>
#include <vector>
#include <cmath>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include "sensor_msgs/msg/joint_state.hpp"

using namespace std::chrono_literals;

class RBPodoTrajectoryController : public rclcpp::Node {
public:
  enum StartupMode {
    RETURN_TO_HOME,     // Always return to home first (original behavior)
    CONTINUE_TO_NEXT,   // Continue to next waypoint from current position
    NEAREST_WAYPOINT    // Find and move to nearest waypoint
  };

  RBPodoTrajectoryController() : Node("rbpodo_trajectory_controller")
  {
    // Define key waypoints (joint positions in radians)
    key_waypoints_ = {
      {0.0, 0.0, 0.0, 0.0, 0.0, 0.0},      // Home position
      {0.5, 0.0, 0.0, 0.0, 0.0, 0.0},      // Joint 1 only
      {0.5, 0.5, 0.0, 0.0, 0.0, 0.0},      // Joints 1 and 2
      {0.5, 0.5, 0.5, 0.0, 0.0, 0.0},      // Joints 1, 2, and 3
      {0.5, 0.5, 0.5, 0.5, 0.0, 0.0},      // Joints 1, 2, 3, and 4
      {0.5, 0.5, 0.5, 0.5, 0.5, 0.0},      // Joints 1, 2, 3, 4, and 5
      {0.5, 0.5, 0.5, 0.5, 0.5, 0.5},      // All joints at 0.5
      {-0.5, 0.7, -0.2, 0.3, -0.4, 0.1},   // Mixed position 1
      {0.3, -0.3, 0.4, -0.4, 0.5, -0.5},   // Mixed position 2
      {0.0, 0.0, 0.0, 0.0, 0.0, 0.0}       // Return to home position
    };
    
    // Initialize with parameters from config
    initializeParameters();
    
    // Initialize velocities to zero
    joint_velocities_ = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    
    // Publisher for joint position commands
    joint_cmd_publisher_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
      joint_command_topic_, 10);
      
    // Subscriber for joint states
    joint_state_subscriber_ = this->create_subscription<sensor_msgs::msg::JointState>(
      joint_state_topic_, 10,
      std::bind(&RBPodoTrajectoryController::joint_state_callback, this, std::placeholders::_1));
    
    // Timer for control loop
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(static_cast<int>(control_period_ * 1000)), 
      std::bind(&RBPodoTrajectoryController::control_loop, this));
      
    // Create watchdog timer to detect missing joint states
    watchdog_timer_ = this->create_wall_timer(
      1000ms, std::bind(&RBPodoTrajectoryController::watchdog_callback, this));
      
    RCLCPP_INFO(this->get_logger(), "RBPodo Trajectory Controller initialized");
    RCLCPP_INFO(this->get_logger(), "Total key waypoints: %zu", key_waypoints_.size());
    
    // Wait for initial joint state
    RCLCPP_INFO(this->get_logger(), "Waiting for joint states...");
  }

private:
  void initializeParameters()
  {
    // Declare parameters with default values
    this->declare_parameter("max_velocity", 0.3);
    this->declare_parameter("max_acceleration", 0.1);
    this->declare_parameter("control_period", 0.1);
    this->declare_parameter("joint_command_topic", "/position_controllers/commands");
    this->declare_parameter("joint_state_topic", "/rbpodo/joint_states");
    this->declare_parameter("startup_mode", 0);  // RETURN_TO_HOME by default
    this->declare_parameter("joint_state_timeout", 5.0);  // seconds
    
    // Get parameters
    max_velocity_ = this->get_parameter("max_velocity").as_double();
    max_acceleration_ = this->get_parameter("max_acceleration").as_double();
    control_period_ = this->get_parameter("control_period").as_double();
    joint_command_topic_ = this->get_parameter("joint_command_topic").as_string();
    joint_state_topic_ = this->get_parameter("joint_state_topic").as_string();
    startup_mode_ = static_cast<StartupMode>(this->get_parameter("startup_mode").as_int());
    joint_state_timeout_ = this->get_parameter("joint_state_timeout").as_double();
    
    // Set initial waypoint based on startup mode
    current_waypoint_ = 0;  // Default to first waypoint (home)
    next_position_ = key_waypoints_[current_waypoint_];
    
    // Log parameters
    RCLCPP_INFO(this->get_logger(), "Parameters loaded:");
    RCLCPP_INFO(this->get_logger(), "  max_velocity: %.2f rad/s", max_velocity_);
    RCLCPP_INFO(this->get_logger(), "  max_acceleration: %.2f rad/s²", max_acceleration_);
    RCLCPP_INFO(this->get_logger(), "  control_period: %.2f s", control_period_);
    RCLCPP_INFO(this->get_logger(), "  joint_state_timeout: %.2f s", joint_state_timeout_);
    RCLCPP_INFO(this->get_logger(), "  startup_mode: %d", static_cast<int>(startup_mode_));
  }
  
  void joint_state_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
  {
    joint_states_received_ = true;
    last_joint_state_time_ = this->now();
    current_joint_states_ = *msg;
    
    // If this is the first joint state received, handle startup mode
    if (!controller_initialized_) {
      handleStartupMode();
      controller_initialized_ = true;
    }
  }
  
  void handleStartupMode()
  {
    if (current_joint_states_.position.size() != 6) {
      RCLCPP_ERROR(this->get_logger(), "Invalid joint state size: %zu", 
                   current_joint_states_.position.size());
      return;
    }
    
    switch(startup_mode_) {
      case RETURN_TO_HOME:
        // Default behavior - always start at home (waypoint 0)
        current_waypoint_ = 0;
        next_position_ = key_waypoints_[current_waypoint_];
        RCLCPP_INFO(this->get_logger(), "Startup mode: Returning to home position first");
        break;
        
      case CONTINUE_TO_NEXT:
        // Start from current position, move to waypoint 1
        current_waypoint_ = 0;  // Will be incremented to 1 after reaching home
        next_position_ = key_waypoints_[current_waypoint_];
        RCLCPP_INFO(this->get_logger(), "Startup mode: Continuing from current position");
        break;
        
      case NEAREST_WAYPOINT: {
        // Find the nearest waypoint to the current position
        size_t nearest = 0;
        double min_distance = std::numeric_limits<double>::max();
        
        for (size_t i = 0; i < key_waypoints_.size(); i++) {
          double distance = 0.0;
          for (size_t j = 0; j < 6; j++) {
            double diff = key_waypoints_[i][j] - current_joint_states_.position[j];
            distance += diff * diff;
          }
          
          if (distance < min_distance) {
            min_distance = distance;
            nearest = i;
          }
        }
        
        current_waypoint_ = nearest;
        next_position_ = key_waypoints_[current_waypoint_];
        RCLCPP_INFO(this->get_logger(), "Startup mode: Starting from nearest waypoint (%zu)", 
                   current_waypoint_ + 1);
        break;
      }
    }
  }
  
  void watchdog_callback()
  {
    if (!joint_states_received_) {
      RCLCPP_WARN(this->get_logger(), "No joint states received yet");
      return;
    }
    
    rclcpp::Time now = this->now();
    double time_since_last = (now - last_joint_state_time_).seconds();
    
    if (time_since_last > joint_state_timeout_) {
      RCLCPP_ERROR(this->get_logger(), 
                   "Joint state timeout! Last message received %.1f seconds ago", 
                   time_since_last);
                   
      // Optionally: Implement emergency stop or other safety behavior
      // stopRobot();
    }
  }
  
  void control_loop()
  {
    // Wait until joint states are received
    if (!joint_states_received_ || current_joint_states_.position.size() != 6) {
      return;
    }
    
    // Get actual current joint positions
    std::vector<double> actual_position = current_joint_states_.position;
    
    // Check if we've reached the current target
    bool reached_target = true;
    for (size_t i = 0; i < 6; ++i) {
      double diff = next_position_[i] - actual_position[i];
      if (std::abs(diff) >= 0.01) {
        reached_target = false;
        break;
      }
    }
    
    if (reached_target) {
      RCLCPP_INFO(this->get_logger(), "Reached waypoint %zu", current_waypoint_ + 1);
      current_waypoint_ = (current_waypoint_ + 1) % key_waypoints_.size();
      next_position_ = key_waypoints_[current_waypoint_];
      RCLCPP_INFO(this->get_logger(), "Moving to waypoint %zu", current_waypoint_ + 1);
    }
    
    // Calculate next command position
    std::vector<double> command_position(6);
    for (size_t i = 0; i < 6; ++i) {
      double diff = next_position_[i] - actual_position[i];
      
      // Calculate target velocity (trapezoidal profile)
      double target_vel = std::copysign(
        std::min(max_velocity_, std::sqrt(2.0 * max_acceleration_ * std::abs(diff))), 
        diff);
      
      // Apply acceleration limit
      double vel_diff = target_vel - joint_velocities_[i];
      double max_vel_step = max_acceleration_ * control_period_;
      if (std::abs(vel_diff) > max_vel_step) {
        joint_velocities_[i] += std::copysign(max_vel_step, vel_diff);
      } else {
        joint_velocities_[i] = target_vel;
      }
      
      // Compute next command position
      command_position[i] = actual_position[i] + joint_velocities_[i] * control_period_;
    }
    
    // Send the command
    auto command_msg = std::make_unique<std_msgs::msg::Float64MultiArray>();
    command_msg->data = command_position;
    joint_cmd_publisher_->publish(std::move(command_msg));
  }

  rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr joint_cmd_publisher_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_subscriber_;
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::TimerBase::SharedPtr watchdog_timer_;
  sensor_msgs::msg::JointState current_joint_states_;
  
  // Config parameters
  std::string joint_command_topic_;
  std::string joint_state_topic_;
  double max_velocity_;        // radians per second
  double max_acceleration_;    // radians per second^2
  double control_period_;      // seconds
  double joint_state_timeout_; // seconds
  StartupMode startup_mode_;
  
  // Trajectory state
  std::vector<std::vector<double>> key_waypoints_;
  std::vector<double> next_position_;
  std::vector<double> joint_velocities_;
  size_t current_waypoint_ = 0;
  
  // Status flags
  bool joint_states_received_ = false;
  bool controller_initialized_ = false;
  rclcpp::Time last_joint_state_time_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<RBPodoTrajectoryController>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}