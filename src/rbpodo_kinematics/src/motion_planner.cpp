#include <memory>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include "rbpodo_kinematics/robot_kinematics.hpp"

using namespace std::chrono_literals;

class MotionPlannerNode : public rclcpp::Node
{
public:
  MotionPlannerNode()
  : Node("motion_planner"), has_joint_states_(false), trajectory_in_progress_(false)
  {
    // Create kinematics
    kinematics_ = std::make_unique<rbpodo_kinematics::RobotKinematics>();
    
    // Load DH parameters
    loadDHParameters();
    
    // Trajectory parameters
    this->declare_parameter("trajectory_control_rate", 50.0); // Hz
    this->declare_parameter("max_velocity", 0.5);            // rad/s
    this->declare_parameter("max_acceleration", 0.3);        // rad/s²
    this->declare_parameter("position_tolerance", 0.01);     // radians
    
    control_rate_ = this->get_parameter("trajectory_control_rate").as_double();
    max_velocity_ = this->get_parameter("max_velocity").as_double();
    max_acceleration_ = this->get_parameter("max_acceleration").as_double();
    position_tolerance_ = this->get_parameter("position_tolerance").as_double();
    
    // Subscribe to joint states
    joint_state_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
      "joint_states", 10, 
      std::bind(&MotionPlannerNode::jointStateCallback, this, std::placeholders::_1));
    
    // Publisher for joint position commands
    joint_cmd_pub_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
      "/position_controllers/commands", 10);
    
    // Read target poses from a file
    this->declare_parameter("target_file", "");
    std::string target_file = this->get_parameter("target_file").as_string();
    
    if (!target_file.empty()) {
      loadTargetsFromFile(target_file);
    } else {
      // Default target if no file is provided
      target_poses_.push_back(createPose(0.5, 0.0, 0.4, 0.0, 0.0, 0.0, 1.0));
    }
    
    // Initialization timer
    init_timer_ = this->create_wall_timer(
      1000ms, std::bind(&MotionPlannerNode::initializePlanning, this));
    
    // Trajectory timer (will be started when needed)
    trajectory_timer_ = this->create_wall_timer(
      std::chrono::duration<double>(1.0/control_rate_), 
      std::bind(&MotionPlannerNode::executeTrajectoryStep, this));
    trajectory_timer_->cancel(); // Start disabled
    
    RCLCPP_INFO(this->get_logger(), "Motion Planner Node initialized");
    RCLCPP_INFO(this->get_logger(), "Loaded %zu target poses", target_poses_.size());
    RCLCPP_INFO(this->get_logger(), "Control rate: %.1f Hz", control_rate_);
    RCLCPP_INFO(this->get_logger(), "Max velocity: %.2f rad/s", max_velocity_);
    RCLCPP_INFO(this->get_logger(), "Max acceleration: %.2f rad/s²", max_acceleration_);
  }

private:
  void loadDHParameters()
  {
    // Hard-coded DH parameters for demonstration
    // In practice, these should come from URDF or config
    std::vector<rbpodo_kinematics::DHParameters> dh_params(6);
    
    // Simplified DH parameters - replace with actual robot values
    dh_params[0] = {0.0, -1.5708, 0.1625, 0.0};
    dh_params[1] = {0.425, 0.0, 0.0, 0.0};
    dh_params[2] = {0.39225, 0.0, 0.0, 0.0};
    dh_params[3] = {0.0, -1.5708, 0.1333, 0.0};
    dh_params[4] = {0.0, 1.5708, 0.0997, 0.0};
    dh_params[5] = {0.0, 0.0, 0.0996, 0.0};
    
    kinematics_->setDHParameters(dh_params);
  }
  
  void jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr msg)
  {
    if (msg->position.size() >= 6) {
      current_joint_angles_ = std::vector<double>(msg->position.begin(), msg->position.begin() + 6);
      has_joint_states_ = true;
    }
  }
  
  geometry_msgs::msg::PoseStamped createPose(
      double x, double y, double z, 
      double qx, double qy, double qz, double qw)
  {
    geometry_msgs::msg::PoseStamped pose;
    pose.header.frame_id = "base_link";
    pose.pose.position.x = x;
    pose.pose.position.y = y;
    pose.pose.position.z = z;
    pose.pose.orientation.x = qx;
    pose.pose.orientation.y = qy;
    pose.pose.orientation.z = qz;
    pose.pose.orientation.w = qw;
    return pose;
  }
  
  void loadTargetsFromFile(const std::string& filename)
  {
    std::ifstream file(filename);
    if (!file.is_open()) {
      RCLCPP_ERROR(this->get_logger(), "Failed to open target file: %s", filename.c_str());
      return;
    }
    
    target_poses_.clear();
    
    std::string line;
    while (std::getline(file, line)) {
      // Skip empty lines and comments
      if (line.empty() || line[0] == '#') {
        continue;
      }
      
      // Parse line: x y z qx qy qz qw
      double x, y, z, qx, qy, qz, qw;
      std::stringstream ss(line);
      
      if (ss >> x >> y >> z >> qx >> qy >> qz >> qw) {
        target_poses_.push_back(createPose(x, y, z, qx, qy, qz, qw));
      }
    }
    
    file.close();
  }
  
  void initializePlanning()
  {
    // Wait until we have joint states
    if (!has_joint_states_) {
      RCLCPP_INFO(this->get_logger(), "Waiting for joint states...");
      return;
    }
    
    // Cancel the initialization timer
    init_timer_->cancel();
    
    RCLCPP_INFO(this->get_logger(), "Starting motion planning sequence");
    
    // Start executing the sequence
    current_target_idx_ = 0;
    planNextTrajectory();
  }
  
  void planNextTrajectory() 
  {
    if (current_target_idx_ >= target_poses_.size()) {
      RCLCPP_INFO(this->get_logger(), "Motion sequence completed");
      return;
    }
    
    RCLCPP_INFO(this->get_logger(), "Planning trajectory to target %zu of %zu", 
                current_target_idx_ + 1, target_poses_.size());
    
    const auto& target_pose = target_poses_[current_target_idx_];
    
    // Convert to Eigen matrix
    Eigen::Matrix4d target_transform = Eigen::Matrix4d::Identity();
    
    // Set rotation from quaternion
    Eigen::Quaterniond q(
      target_pose.pose.orientation.w,
      target_pose.pose.orientation.x,
      target_pose.pose.orientation.y,
      target_pose.pose.orientation.z
    );
    target_transform.block<3, 3>(0, 0) = q.toRotationMatrix();
    
    // Set translation
    target_transform(0, 3) = target_pose.pose.position.x;
    target_transform(1, 3) = target_pose.pose.position.y;
    target_transform(2, 3) = target_pose.pose.position.z;
    
    // Compute inverse kinematics
    std::vector<double> target_joint_angles;
    bool success = kinematics_->computeInverseKinematics(
      target_transform, current_joint_angles_, target_joint_angles);
    
    if (success) {
      RCLCPP_INFO(this->get_logger(), "IK solution found, generating trajectory");
      
      // Generate trajectory
      generateTrajectory(current_joint_angles_, target_joint_angles);
      
      // Start executing the trajectory
      trajectory_index_ = 0;
      trajectory_in_progress_ = true;
      trajectory_timer_->reset();
    } else {
      RCLCPP_WARN(this->get_logger(), "Failed to find IK solution for target %zu", 
                  current_target_idx_ + 1);
      // Skip to next target
      current_target_idx_++;
      planNextTrajectory();
    }
  }
  
  void generateTrajectory(const std::vector<double>& start_joints, 
                          const std::vector<double>& end_joints)
  {
    trajectory_points_.clear();
    
    // First add the starting point
    trajectory_points_.push_back(start_joints);
    
    // Find the joint with the largest distance to travel
    double max_distance = 0.0;
    for (size_t i = 0; i < start_joints.size(); i++) {
      double distance = std::abs(end_joints[i] - start_joints[i]);
      if (distance > max_distance) {
        max_distance = distance;
      }
    }
    
    // Calculate the trajectory duration based on velocity and acceleration
    // Using time-optimal trapezoidal velocity profile
    double time_to_accel = max_velocity_ / max_acceleration_;
    double accel_distance = 0.5 * max_acceleration_ * time_to_accel * time_to_accel;
    
    double cruise_distance = max_distance - 2 * accel_distance;
    double cruise_time = 0.0;
    
    if (cruise_distance > 0) {
      // Regular trapezoidal profile
      cruise_time = cruise_distance / max_velocity_;
    } else {
      // Triangular profile (no cruise phase)
      time_to_accel = std::sqrt(max_distance / max_acceleration_);
      cruise_time = 0.0;
    }
    
    double total_time = 2 * time_to_accel + cruise_time;
    
    // Calculate number of points based on control rate
    size_t num_points = static_cast<size_t>(std::ceil(total_time * control_rate_));
    
    // Ensure at least a few points for very short trajectories
    num_points = std::max(num_points, static_cast<size_t>(5));
    
    RCLCPP_INFO(this->get_logger(), "Generating trajectory with %zu points over %.2f seconds", 
                num_points, total_time);
    
    // Generate intermediate points
    for (size_t i = 1; i <= num_points; i++) {
      double t = static_cast<double>(i) / num_points * total_time;
      
      // Calculate the position scaling factor based on trapezoidal profile
      double scale;
      if (t <= time_to_accel) {
        // Acceleration phase
        scale = 0.5 * max_acceleration_ * t * t;
      } else if (t <= time_to_accel + cruise_time) {
        // Cruise phase
        scale = accel_distance + max_velocity_ * (t - time_to_accel);
      } else {
        // Deceleration phase
        double decel_time = t - (time_to_accel + cruise_time);
        scale = max_distance - 0.5 * max_acceleration_ * 
                (time_to_accel - decel_time) * (time_to_accel - decel_time);
      }
      
      // Normalize to 0-1 range
      double s = (max_distance > 0) ? scale / max_distance : 1.0;
      
      // Interpolate joint positions
      std::vector<double> point(start_joints.size());
      for (size_t j = 0; j < start_joints.size(); j++) {
        point[j] = start_joints[j] + s * (end_joints[j] - start_joints[j]);
      }
      
      trajectory_points_.push_back(point);
    }
    
    // Ensure the last point is exactly the end joints
    trajectory_points_.push_back(end_joints);
  }
  
  void executeTrajectoryStep()
  {
    if (!trajectory_in_progress_ || trajectory_points_.empty()) {
      return;
    }
    
    // Check if we've reached the end of the trajectory
    if (trajectory_index_ >= trajectory_points_.size()) {
      RCLCPP_INFO(this->get_logger(), "Trajectory complete");
      trajectory_in_progress_ = false;
      trajectory_timer_->cancel();
      
      // Update current joint angles to the final position
      current_joint_angles_ = trajectory_points_.back();
      
      // Move to next target
      current_target_idx_++;
      planNextTrajectory();
      return;
    }
    
    // Get the current trajectory point
    const auto& point = trajectory_points_[trajectory_index_];
    
    // Send joint command
    auto joint_cmd = std::make_unique<std_msgs::msg::Float64MultiArray>();
    joint_cmd->data = point;
    joint_cmd_pub_->publish(std::move(joint_cmd));
    
    // Move to next point
    trajectory_index_++;
  }
  
  // Kinematics
  std::unique_ptr<rbpodo_kinematics::RobotKinematics> kinematics_;
  
  // Robot state
  std::vector<double> current_joint_angles_;
  bool has_joint_states_;
  
  // Target poses
  std::vector<geometry_msgs::msg::PoseStamped> target_poses_;
  size_t current_target_idx_ = 0;
  
  // Trajectory generation
  std::vector<std::vector<double>> trajectory_points_;
  size_t trajectory_index_ = 0;
  bool trajectory_in_progress_ = false;
  double control_rate_ = 50.0;       // Hz
  double max_velocity_ = 0.5;        // rad/s
  double max_acceleration_ = 0.3;    // rad/s²
  double position_tolerance_ = 0.01; // radians
  
  // ROS objects
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
  rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr joint_cmd_pub_;
  rclcpp::TimerBase::SharedPtr init_timer_;
  rclcpp::TimerBase::SharedPtr trajectory_timer_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MotionPlannerNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}