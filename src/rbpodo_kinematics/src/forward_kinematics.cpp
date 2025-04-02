#include <memory>
#include <string>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "rbpodo_kinematics/robot_kinematics.hpp"

using namespace std::chrono_literals;

class ForwardKinematicsNode : public rclcpp::Node
{
public:
  ForwardKinematicsNode()
  : Node("forward_kinematics")
  {
    // Initialize parameters
    declareDHParameters();
    
    // Create kinematics
    kinematics_ = std::make_unique<rbpodo_kinematics::RobotKinematics>();
    
    // Load DH parameters from parameters
    loadDHParameters();
    
    // Create subscriber for joint states
    joint_state_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
      "joint_states", 10, 
      std::bind(&ForwardKinematicsNode::jointStateCallback, this, std::placeholders::_1));
    
    // Create publisher for end-effector pose
    ee_pose_pub_ = this->create_publisher<geometry_msgs::msg::PoseStamped>(
      "end_effector_pose", 10);
    
    // Initialize TF broadcaster
    tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);
    
    RCLCPP_INFO(this->get_logger(), "Forward Kinematics Node initialized");
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
    
    // Base frame and end-effector frame names
    this->declare_parameter("base_frame", "base_link");
    this->declare_parameter("ee_frame", "tool0");
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
    // Skip if we don't have enough joint values
    if (msg->position.size() < 6) {
      RCLCPP_WARN(this->get_logger(), "Received joint state with insufficient joint values");
      return;
    }
    
    // Extract joint angles
    std::vector<double> joint_angles(msg->position.begin(), msg->position.begin() + 6);
    
    // Compute forward kinematics
    Eigen::Matrix4d ee_transform = kinematics_->computeForwardKinematics(joint_angles);
    
    // Extract position and orientation
    auto position = kinematics_->getPosition(ee_transform);
    auto orientation = kinematics_->getQuaternion(ee_transform);
    
    // Publish end-effector pose
    auto pose_msg = std::make_unique<geometry_msgs::msg::PoseStamped>();
    pose_msg->header.stamp = this->now();
    pose_msg->header.frame_id = this->get_parameter("base_frame").as_string();
    
    pose_msg->pose.position.x = position[0];
    pose_msg->pose.position.y = position[1];
    pose_msg->pose.position.z = position[2];
    
    pose_msg->pose.orientation.w = orientation[0];
    pose_msg->pose.orientation.x = orientation[1];
    pose_msg->pose.orientation.y = orientation[2];
    pose_msg->pose.orientation.z = orientation[3];
    
    ee_pose_pub_->publish(std::move(pose_msg));
    
    // Broadcast transform
    geometry_msgs::msg::TransformStamped transform_stamped;
    transform_stamped.header.stamp = this->now();
    transform_stamped.header.frame_id = this->get_parameter("base_frame").as_string();
    transform_stamped.child_frame_id = this->get_parameter("ee_frame").as_string();
    
    transform_stamped.transform.translation.x = position[0];
    transform_stamped.transform.translation.y = position[1];
    transform_stamped.transform.translation.z = position[2];
    
    transform_stamped.transform.rotation.w = orientation[0];
    transform_stamped.transform.rotation.x = orientation[1];
    transform_stamped.transform.rotation.y = orientation[2];
    transform_stamped.transform.rotation.z = orientation[3];
    
    tf_broadcaster_->sendTransform(transform_stamped);
  }
  
  // ROS2 objects
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr ee_pose_pub_;
  std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
  
  // Kinematics
  std::unique_ptr<rbpodo_kinematics::RobotKinematics> kinematics_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ForwardKinematicsNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}