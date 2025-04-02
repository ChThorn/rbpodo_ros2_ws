// #include <chrono>
// #include <memory>
// #include "rclcpp/rclcpp.hpp"
// #include "std_msgs/msg/float64_multi_array.hpp"
// #include "sensor_msgs/msg/joint_state.hpp"

// using namespace std::chrono_literals;

// class RBPodoController : public rclcpp::Node {
// public:
//   RBPodoController() : Node("rbpodo_controller")
//   {
//     // Publisher for joint position commands - updated to correct topic name
//     joint_cmd_publisher_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
//       "/position_controllers/commands", 10);
      
//     // Subscriber for joint states - updated to correct topic name
//     joint_state_subscriber_ = this->create_subscription<sensor_msgs::msg::JointState>(
//       "/rbpodo/joint_states", 10,
//       std::bind(&RBPodoController::joint_state_callback, this, std::placeholders::_1));
    
//     // Timer for periodic control
//     timer_ = this->create_wall_timer(
//       500ms, std::bind(&RBPodoController::control_loop, this));
      
//     RCLCPP_INFO(this->get_logger(), "RBPodo Controller initialized");
//   }

// private:
//   void joint_state_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
//   {
//     current_joint_states_ = *msg;
//     RCLCPP_DEBUG(this->get_logger(), "Received joint states");
//   }
  
//   void control_loop()
//   {
//     // Create command message (for 6 joints)
//     auto command_msg = std::make_unique<std_msgs::msg::Float64MultiArray>();
    
//     // Set reasonable joint positions (in radians)
//     command_msg->data = {0.1, 0.2, 0.3, 0.1, 0.2, 0.1};  // Moderate values
    
//     // Publish the command
//     joint_cmd_publisher_->publish(std::move(command_msg));
//     RCLCPP_INFO(this->get_logger(), "Sent joint position command to /position_controllers/commands");
//   }

//   rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr joint_cmd_publisher_;
//   rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_subscriber_;
//   rclcpp::TimerBase::SharedPtr timer_;
//   sensor_msgs::msg::JointState current_joint_states_;
// };

// int main(int argc, char * argv[])
// {
//   rclcpp::init(argc, argv);
//   auto node = std::make_shared<RBPodoController>();
//   rclcpp::spin(node);
//   rclcpp::shutdown();
//   return 0;
// }


// #include <chrono>
// #include <memory>
// #include <vector>
// #include "rclcpp/rclcpp.hpp"
// #include "std_msgs/msg/float64_multi_array.hpp"
// #include "sensor_msgs/msg/joint_state.hpp"

// using namespace std::chrono_literals;

// class RBPodoSequentialController : public rclcpp::Node {
// public:
//   RBPodoSequentialController() : Node("rbpodo_sequential_controller")
//   {
//     // Define sequence of waypoints (joint positions in radians)
//     waypoints_ = {
//       {0.0, 0.0, 0.0, 0.0, 0.0, 0.0},      // Home position
//       {0.5, 0.0, 0.0, 0.0, 0.0, 0.0},      // Joint 1 only
//       {0.5, 0.5, 0.0, 0.0, 0.0, 0.0},      // Joints 1 and 2
//       {0.5, 0.5, 0.5, 0.0, 0.0, 0.0},      // Joints 1, 2, and 3
//       {0.5, 0.5, 0.5, 0.5, 0.0, 0.0},      // Joints 1, 2, 3, and 4
//       {0.5, 0.5, 0.5, 0.5, 0.5, 0.0},      // Joints 1, 2, 3, 4, and 5
//       {0.5, 0.5, 0.5, 0.5, 0.5, 0.5},      // All joints at 0.5
//       {-0.5, 0.7, -0.2, 0.3, -0.4, 0.1},   // Mixed position 1
//       {0.3, -0.3, 0.4, -0.4, 0.5, -0.5},   // Mixed position 2
//       {0.0, 0.0, 0.0, 0.0, 0.0, 0.0}       // Return to home position
//     };
    
//     // Publisher for joint position commands
//     joint_cmd_publisher_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
//       "/position_controllers/commands", 10);
      
//     // Subscriber for joint states
//     joint_state_subscriber_ = this->create_subscription<sensor_msgs::msg::JointState>(
//       "/rbpodo/joint_states", 10,
//       std::bind(&RBPodoSequentialController::joint_state_callback, this, std::placeholders::_1));
    
//     // Timer for sequential control
//     // Use a 3-second interval to allow robot to complete each movement
//     timer_ = this->create_wall_timer(
//       3000ms, std::bind(&RBPodoSequentialController::control_loop, this));
      
//     RCLCPP_INFO(this->get_logger(), "RBPodo Sequential Controller initialized");
//     RCLCPP_INFO(this->get_logger(), "Total waypoints: %zu", waypoints_.size());
//   }

// private:
//   void joint_state_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
//   {
//     current_joint_states_ = *msg;
//   }
  
//   void control_loop()
//   {
//     // Create command message
//     auto command_msg = std::make_unique<std_msgs::msg::Float64MultiArray>();
    
//     // Move to the current waypoint
//     command_msg->data = waypoints_[current_waypoint_];
    
//     // Log the current waypoint
//     RCLCPP_INFO(this->get_logger(), "Moving to waypoint %zu of %zu",
//                 current_waypoint_ + 1, waypoints_.size());
    
//     // Print the current joint values
//     std::string joint_positions = "Joint positions: ";
//     for (size_t i = 0; i < command_msg->data.size(); ++i) {
//       joint_positions += std::to_string(command_msg->data[i]);
//       if (i < command_msg->data.size() - 1) {
//         joint_positions += ", ";
//       }
//     }
//     RCLCPP_INFO(this->get_logger(), "%s", joint_positions.c_str());
    
//     // Publish the command
//     joint_cmd_publisher_->publish(std::move(command_msg));
    
//     // Move to the next waypoint
//     current_waypoint_ = (current_waypoint_ + 1) % waypoints_.size();
//   }

//   rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr joint_cmd_publisher_;
//   rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_subscriber_;
//   rclcpp::TimerBase::SharedPtr timer_;
//   sensor_msgs::msg::JointState current_joint_states_;
  
//   std::vector<std::vector<double>> waypoints_;
//   size_t current_waypoint_ = 0;
// };

// int main(int argc, char * argv[])
// {
//   rclcpp::init(argc, argv);
//   auto node = std::make_shared<RBPodoSequentialController>();
//   rclcpp::spin(node);
//   rclcpp::shutdown();
//   return 0;
// }


// #include <chrono>
// #include <memory>
// #include <vector>
// #include <cmath>
// #include "rclcpp/rclcpp.hpp"
// #include "std_msgs/msg/float64_multi_array.hpp"
// #include "sensor_msgs/msg/joint_state.hpp"

// using namespace std::chrono_literals;

// class RBPodoTrajectoryController : public rclcpp::Node {
// public:
//   RBPodoTrajectoryController() : Node("rbpodo_trajectory_controller")
//   {
//     // Define key waypoints (joint positions in radians)
//     key_waypoints_ = {
//       {0.0, 0.0, 0.0, 0.0, 0.0, 0.0},      // Home position
//       {0.5, 0.0, 0.0, 0.0, 0.0, 0.0},      // Joint 1 only
//       {0.5, 0.5, 0.0, 0.0, 0.0, 0.0},      // Joints 1 and 2
//       {0.5, 0.5, 0.5, 0.0, 0.0, 0.0},      // Joints 1, 2, and 3
//       {0.5, 0.5, 0.5, 0.5, 0.0, 0.0},      // Joints 1, 2, 3, and 4
//       {0.5, 0.5, 0.5, 0.5, 0.5, 0.0},      // Joints 1, 2, 3, 4, and 5
//       {0.5, 0.5, 0.5, 0.5, 0.5, 0.5},      // All joints at 0.5
//       {-0.5, 0.7, -0.2, 0.3, -0.4, 0.1},   // Mixed position 1
//       {0.3, -0.3, 0.4, -0.4, 0.5, -0.5},   // Mixed position 2
//       {0.0, 0.0, 0.0, 0.0, 0.0, 0.0}       // Return to home position
//     };
    
//     // Initialize current position to first waypoint
//     current_position_ = key_waypoints_[0]; 
//     next_position_ = key_waypoints_[1];
    
//     // Publisher for joint position commands
//     joint_cmd_publisher_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
//       "/position_controllers/commands", 10);
      
//     // Subscriber for joint states
//     joint_state_subscriber_ = this->create_subscription<sensor_msgs::msg::JointState>(
//       "/rbpodo/joint_states", 10,
//       std::bind(&RBPodoTrajectoryController::joint_state_callback, this, std::placeholders::_1));
    
//     // Use a faster timer (100ms) for smooth transitions
//     timer_ = this->create_wall_timer(
//       100ms, std::bind(&RBPodoTrajectoryController::control_loop, this));
      
//     RCLCPP_INFO(this->get_logger(), "RBPodo Trajectory Controller initialized");
//     RCLCPP_INFO(this->get_logger(), "Total key waypoints: %zu", key_waypoints_.size());
//   }

// private:
//   void joint_state_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
//   {
//     current_joint_states_ = *msg;
//   }
  
//   void control_loop()
//   {
//     // Create command message
//     auto command_msg = std::make_unique<std_msgs::msg::Float64MultiArray>();
    
//     // Calculate next interpolated position
//     std::vector<double> interpolated_position(6);
//     bool reached_target = true;
    
//     for (size_t i = 0; i < 6; ++i) {
//       double diff = next_position_[i] - current_position_[i];
      
//       // If we're close enough to the target for this joint, consider it reached
//       if (std::abs(diff) < 0.01) {
//         interpolated_position[i] = next_position_[i];
//       } else {
//         // Otherwise move toward the target at a controlled speed
//         double step = std::copysign(std::min(0.03, std::abs(diff)), diff);
//         interpolated_position[i] = current_position_[i] + step;
//         reached_target = false;  // Not all joints have reached target
//       }
//     }
    
//     // Update current position
//     current_position_ = interpolated_position;
    
//     // Send the interpolated position
//     command_msg->data = current_position_;
//     joint_cmd_publisher_->publish(std::move(command_msg));
    
//     // If we've reached the current target waypoint, move to the next one
//     if (reached_target) {
//       RCLCPP_INFO(this->get_logger(), "Reached waypoint %zu of %zu", 
//                   current_waypoint_ + 1, key_waypoints_.size());
      
//       // Move to the next waypoint
//       current_waypoint_ = (current_waypoint_ + 1) % key_waypoints_.size();
//       next_position_ = key_waypoints_[current_waypoint_];
      
//       RCLCPP_INFO(this->get_logger(), "Moving to waypoint %zu", current_waypoint_ + 1);
//     }
//   }

//   rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr joint_cmd_publisher_;
//   rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_subscriber_;
//   rclcpp::TimerBase::SharedPtr timer_;
//   sensor_msgs::msg::JointState current_joint_states_;
  
//   std::vector<std::vector<double>> key_waypoints_;
//   std::vector<double> current_position_;
//   std::vector<double> next_position_;
//   size_t current_waypoint_ = 0;
// };

// int main(int argc, char * argv[])
// {
//   rclcpp::init(argc, argv);
//   auto node = std::make_shared<RBPodoTrajectoryController>();
//   rclcpp::spin(node);
//   rclcpp::shutdown();
//   return 0;
// }


// #include <chrono>
// #include <memory>
// #include <vector>
// #include <cmath>
// #include "rclcpp/rclcpp.hpp"
// #include "std_msgs/msg/float64_multi_array.hpp"
// #include "sensor_msgs/msg/joint_state.hpp"

// using namespace std::chrono_literals;

// class RBPodoTrajectoryController : public rclcpp::Node {
// public:
//   RBPodoTrajectoryController() : Node("rbpodo_trajectory_controller")
//   {
//     // Define key waypoints (joint positions in radians)
//     key_waypoints_ = {
//       {0.0, 0.0, 0.0, 0.0, 0.0, 0.0},      // Home position
//       {0.5, 0.0, 0.0, 0.0, 0.0, 0.0},      // Joint 1 only
//       {0.5, 0.5, 0.0, 0.0, 0.0, 0.0},      // Joints 1 and 2
//       {0.5, 0.5, 0.5, 0.0, 0.0, 0.0},      // Joints 1, 2, and 3
//       {0.5, 0.5, 0.5, 0.5, 0.0, 0.0},      // Joints 1, 2, 3, and 4
//       {0.5, 0.5, 0.5, 0.5, 0.5, 0.0},      // Joints 1, 2, 3, 4, and 5
//       {0.5, 0.5, 0.5, 0.5, 0.5, 0.5},      // All joints at 0.5
//       {-0.5, 0.7, -0.2, 0.3, -0.4, 0.1},   // Mixed position 1
//       {0.3, -0.3, 0.4, -0.4, 0.5, -0.5},   // Mixed position 2
//       {0.0, 0.0, 0.0, 0.0, 0.0, 0.0}       // Return to home position
//     };
    
//     // Initialize current position to first waypoint
//     current_position_ = key_waypoints_[0]; 
//     next_position_ = key_waypoints_[1];
    
//     // Initialize velocities to zero
//     joint_velocities_ = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    
//     // Publisher for joint position commands
//     joint_cmd_publisher_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
//       "/position_controllers/commands", 10);
      
//     // Subscriber for joint states
//     joint_state_subscriber_ = this->create_subscription<sensor_msgs::msg::JointState>(
//       "/rbpodo/joint_states", 10,
//       std::bind(&RBPodoTrajectoryController::joint_state_callback, this, std::placeholders::_1));
    
//     // Use a faster timer (100ms) for smooth transitions
//     timer_ = this->create_wall_timer(
//       100ms, std::bind(&RBPodoTrajectoryController::control_loop, this));
      
//     RCLCPP_INFO(this->get_logger(), "RBPodo Trajectory Controller initialized");
//     RCLCPP_INFO(this->get_logger(), "Total key waypoints: %zu", key_waypoints_.size());
//   }

// private:
//   void joint_state_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
//   {
//     current_joint_states_ = *msg;
//   }
  
//   void control_loop()
//   {
//     // Create command message
//     auto command_msg = std::make_unique<std_msgs::msg::Float64MultiArray>();
    
//     // Calculate next interpolated position
//     std::vector<double> interpolated_position(6);
//     bool reached_target = true;
    
//     for (size_t i = 0; i < 6; ++i) {
//       double diff = next_position_[i] - current_position_[i];
      
//       // If we're close enough to the target for this joint, consider it reached
//       if (std::abs(diff) < 0.01) {
//         joint_velocities_[i] = 0.0;
//         interpolated_position[i] = next_position_[i];
//       } else {
//         // Calculate target velocity based on distance (trapezoidal profile)
//         double target_vel = std::copysign(
//           std::min(max_velocity_, std::sqrt(2.0 * max_acceleration_ * std::abs(diff))), 
//           diff);
        
//         // Apply acceleration limit
//         double vel_diff = target_vel - joint_velocities_[i];
//         double max_vel_step = max_acceleration_ * control_period_;
        
//         if (std::abs(vel_diff) > max_vel_step) {
//           joint_velocities_[i] += std::copysign(max_vel_step, vel_diff);
//         } else {
//           joint_velocities_[i] = target_vel;
//         }
        
//         // Apply velocity
//         interpolated_position[i] = current_position_[i] + joint_velocities_[i] * control_period_;
//         reached_target = false;
//       }
//     }
    
//     // Update current position
//     current_position_ = interpolated_position;
    
//     // Send the interpolated position
//     command_msg->data = current_position_;
//     joint_cmd_publisher_->publish(std::move(command_msg));
    
//     // If we've reached the current target waypoint, move to the next one
//     if (reached_target) {
//       RCLCPP_INFO(this->get_logger(), "Reached waypoint %zu of %zu", 
//                   current_waypoint_ + 1, key_waypoints_.size());
      
//       // Move to the next waypoint
//       current_waypoint_ = (current_waypoint_ + 1) % key_waypoints_.size();
//       next_position_ = key_waypoints_[current_waypoint_];
      
//       RCLCPP_INFO(this->get_logger(), "Moving to waypoint %zu", current_waypoint_ + 1);
//     }
//   }

//   rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr joint_cmd_publisher_;
//   rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_subscriber_;
//   rclcpp::TimerBase::SharedPtr timer_;
//   sensor_msgs::msg::JointState current_joint_states_;
  
//   std::vector<std::vector<double>> key_waypoints_;
//   std::vector<double> current_position_;
//   std::vector<double> next_position_;
//   size_t current_waypoint_ = 0;
  
//   // Motion profile parameters
//   std::vector<double> joint_velocities_;
//   double max_velocity_ = 0.3;       // radians per second
//   double max_acceleration_ = 0.1;   // radians per second^2
//   double control_period_ = 0.1;     // seconds (100ms)
// };

// int main(int argc, char * argv[])
// {
//   rclcpp::init(argc, argv);
//   auto node = std::make_shared<RBPodoTrajectoryController>();
//   rclcpp::spin(node);
//   rclcpp::shutdown();
//   return 0;
// }



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
    
    // Initialize target to home position
    next_position_ = key_waypoints_[0];
    current_waypoint_ = 0;
    
    // Initialize velocities to zero
    joint_velocities_ = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    
    // Publisher for joint position commands
    joint_cmd_publisher_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
      "/position_controllers/commands", 10);
      
    // Subscriber for joint states
    joint_state_subscriber_ = this->create_subscription<sensor_msgs::msg::JointState>(
      "/rbpodo/joint_states", 10,
      std::bind(&RBPodoTrajectoryController::joint_state_callback, this, std::placeholders::_1));
    
    // Timer for control loop (100ms)
    timer_ = this->create_wall_timer(
      100ms, std::bind(&RBPodoTrajectoryController::control_loop, this));
      
    RCLCPP_INFO(this->get_logger(), "RBPodo Trajectory Controller initialized");
    RCLCPP_INFO(this->get_logger(), "Total key waypoints: %zu", key_waypoints_.size());
  }

private:
  void joint_state_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
  {
    current_joint_states_ = *msg;
  }
  
  void control_loop()
  {
    // Wait until joint states are received
    if (current_joint_states_.position.size() != 6) {
      RCLCPP_WARN(this->get_logger(), "Waiting for joint states...");
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
  sensor_msgs::msg::JointState current_joint_states_;
  
  std::vector<std::vector<double>> key_waypoints_;
  std::vector<double> next_position_;
  size_t current_waypoint_ = 0;
  
  // Motion profile parameters
  std::vector<double> joint_velocities_;
  double max_velocity_ = 0.3;       // radians per second
  double max_acceleration_ = 0.1;   // radians per second^2
  double control_period_ = 0.1;     // seconds (100ms)
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<RBPodoTrajectoryController>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}