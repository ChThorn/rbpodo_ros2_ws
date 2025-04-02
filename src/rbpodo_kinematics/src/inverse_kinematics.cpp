#include <memory>
#include <string>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include "rbpodo_kinematics/robot_kinematics.hpp"

using namespace std::chrono_literals;

class InverseKinematicsNode : public rclcpp::Node
{
public:
  InverseKinematicsNode()
  : Node("inverse_kinematics")
  {
    // Initialize parameters
    declareDHParameters();
    
    // Create kinematics
    kinematics_ = std::make_unique<rbpodo_kinematics::RobotKinematics>();
    
    // Load DH parameters from parameters
    loadDHParameters();
    
    // Subscribe to current joint states
    joint_state_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
      "joint_states", 10, 
      std::bind(&InverseKinematicsNode::jointStateCallback, this, std::placeholders::_1));
    
    // Subscribe to target end-effector pose
    target_pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
      "target_pose", 10, 
      std::bind(&InverseKinematicsNode::targetPoseCallback, this, std::placeholders::_1));
    
    // Publisher for joint position commands
    joint_cmd_pub_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
      "/position_controllers/commands", 10);
    
    RCLCPP_INFO(this->get_logger(), "Inverse Kinematics Node initialized");
  }

private:
  void declareDHParameters()
  {
    // Declare parameter for number of joints
    this->declare_parameter("num_joints", 6);
    
    // Default DH parameters - should be overridden with actual values
    for (int i = 0; i < 6; i++) {
      std::string prefix = "dh.joint" + std::to_string(i+1) + ".";
      this->declare_parameter(prefix + "a", 0.0);
      this->declare_parameter(prefix + "alpha", 0.0);
      this->declare_parameter(prefix + "d", 0.0);
      this->declare_parameter(prefix + "theta_offset", 0.0);
    }
    
    // Base frame
    this->declare_parameter("base_frame", "base_link");
  }
  
  void loadDHParameters()
  {
    int num_joints = this->get_parameter("num_joints").as_int();
    
    std::vector<rbpodo_kinematics::DHParameters> dh_params;
    
    for (int i = 0; i < num_joints; i++) {
      std::string prefix = "dh.joint" + std::to_string(i+1) + ".";
      
      rbpodo_kinematics::DHParameters dh;
      dh.a = this->get_parameter(prefix + "a").as_double();
      dh.alpha = this->get_parameter(prefix + "alpha").as_double();
      dh.d = this->get_parameter(prefix + "d").as_double();
      dh.theta = this->get_parameter(prefix + "theta_offset").as_double();
      
      dh_params.push_back(dh);
    }
    
    kinematics_->setDHParameters(dh_params);
    
    RCLCPP_INFO(this->get_logger(), "Loaded DH parameters for %d joints", num_joints);
  }
  
  void jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr msg)
  {
    // Store current joint positions
    if (msg->position.size() >= 6) {
      current_joint_angles_ = std::vector<double>(msg->position.begin(), msg->position.begin() + 6);
    } else {
      RCLCPP_WARN(this->get_logger(), "Received joint state with insufficient joint values");
    }
  }
  
  void targetPoseCallback(const geometry_msgs::msg::PoseStamped::SharedPtr msg)
  {
    // Check if we have received joint states
    if (current_joint_angles_.empty()) {
      RCLCPP_WARN(this->get_logger(), "No joint states received yet, cannot compute IK");
      return;
    }
    
    // Check if the frame ID matches our base frame
    if (msg->header.frame_id != this->get_parameter("base_frame").as_string()) {
      RCLCPP_WARN(this->get_logger(), "Target pose is not in the base frame, transforming not implemented");
      return;
    }
    
    // Convert target pose to Eigen transformation matrix
    Eigen::Matrix4d target_transform = Eigen::Matrix4d::Identity();
    
    // Set rotation matrix from quaternion
    Eigen::Quaterniond q(
      msg->pose.orientation.w,
      msg->pose.orientation.x,
      msg->pose.orientation.y,
      msg->pose.orientation.z
    );
    target_transform.block<3, 3>(0, 0) = q.toRotationMatrix();
    
    // Set translation
    target_transform(0, 3) = msg->pose.position.x;
    target_transform(1, 3) = msg->pose.position.y;
    target_transform(2, 3) = msg->pose.position.z;
    
    // Compute inverse kinematics
    std::vector<double> solution_joint_angles;
    bool success = kinematics_->computeInverseKinematics(
      target_transform, current_joint_angles_, solution_joint_angles);
    
    if (success) {
      RCLCPP_INFO(this->get_logger(), "IK solution found");
      
      // Create and publish joint command
      auto joint_cmd = std::make_unique<std_msgs::msg::Float64MultiArray>();
      joint_cmd->data = solution_joint_angles;
      joint_cmd_pub_->publish(std::move(joint_cmd));
    } else {
      RCLCPP_WARN(this->get_logger(), "No IK solution found for the target pose");
    }
  }
  
  // ROS2 objects
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
  rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr target_pose_sub_;
  rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr joint_cmd_pub_;
  
  // Kinematics
  std::unique_ptr<rbpodo_kinematics::RobotKinematics> kinematics_;
  std::vector<double> current_joint_angles_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<InverseKinematicsNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}