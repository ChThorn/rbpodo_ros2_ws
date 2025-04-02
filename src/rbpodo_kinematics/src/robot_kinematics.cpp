#include "rbpodo_kinematics/robot_kinematics.hpp"
#include <iostream>
#include <cmath>
#include <Eigen/Dense>
#include <Eigen/Geometry>

namespace rbpodo_kinematics
{

RobotKinematics::RobotKinematics()
: num_joints_(0)
{
  // Default initialization
}

void RobotKinematics::setDHParameters(const std::vector<DHParameters>& dh_params)
{
  dh_params_ = dh_params;
  num_joints_ = dh_params.size();
  
  // Default joint limits (can be overridden)
  joint_limits_.clear();
  for (size_t i = 0; i < num_joints_; ++i) {
    joint_limits_.push_back(std::make_pair(-M_PI, M_PI));
  }
}

Eigen::Matrix4d RobotKinematics::dhTransform(const DHParameters& params)
{
  Eigen::Matrix4d transform = Eigen::Matrix4d::Identity();
  
  double cos_theta = std::cos(params.theta);
  double sin_theta = std::sin(params.theta);
  double cos_alpha = std::cos(params.alpha);
  double sin_alpha = std::sin(params.alpha);
  
  // DH transformation matrix
  transform(0, 0) = cos_theta;
  transform(0, 1) = -sin_theta * cos_alpha;
  transform(0, 2) = sin_theta * sin_alpha;
  transform(0, 3) = params.a * cos_theta;
  
  transform(1, 0) = sin_theta;
  transform(1, 1) = cos_theta * cos_alpha;
  transform(1, 2) = -cos_theta * sin_alpha;
  transform(1, 3) = params.a * sin_theta;
  
  transform(2, 0) = 0.0;
  transform(2, 1) = sin_alpha;
  transform(2, 2) = cos_alpha;
  transform(2, 3) = params.d;
  
  return transform;
}

Eigen::Matrix4d RobotKinematics::computeForwardKinematics(const std::vector<double>& joint_angles)
{
  if (joint_angles.size() != num_joints_) {
    throw std::runtime_error("Number of joint angles does not match DH parameters");
  }
  
  Eigen::Matrix4d transform = Eigen::Matrix4d::Identity();
  
  for (size_t i = 0; i < num_joints_; ++i) {
    DHParameters joint_dh = dh_params_[i];
    // For revolute joints, update theta with the current joint angle
    joint_dh.theta += joint_angles[i];
    
    // Compute transformation and accumulate
    Eigen::Matrix4d joint_transform = dhTransform(joint_dh);
    transform = transform * joint_transform;
  }
  
  return transform;
}

Eigen::MatrixXd RobotKinematics::calculateJacobian(const std::vector<double>& joint_angles)
{
  // Numerical Jacobian calculation
  // For a 6-DOF robot, Jacobian is 6x6
  Eigen::MatrixXd jacobian = Eigen::MatrixXd::Zero(6, num_joints_);
  
  // Small perturbation for numerical differentiation
  const double delta = 1e-6;
  
  // Current end-effector pose
  Eigen::Matrix4d current_pose = computeForwardKinematics(joint_angles);
  Eigen::Vector3d current_pos(current_pose(0, 3), current_pose(1, 3), current_pose(2, 3));
  
  // Calculate current orientation in axis-angle representation
  Eigen::Matrix3d current_rot = current_pose.block<3, 3>(0, 0);
  Eigen::AngleAxisd current_aa(current_rot);
  Eigen::Vector3d current_orient = current_aa.axis() * current_aa.angle();
  
  // Calculate Jacobian column by column
  for (size_t i = 0; i < num_joints_; ++i) {
    // Perturb this joint
    std::vector<double> perturbed_joints = joint_angles;
    perturbed_joints[i] += delta;
    
    // Calculate perturbed pose
    Eigen::Matrix4d perturbed_pose = computeForwardKinematics(perturbed_joints);
    Eigen::Vector3d perturbed_pos(perturbed_pose(0, 3), perturbed_pose(1, 3), perturbed_pose(2, 3));
    
    // Calculate perturbed orientation
    Eigen::Matrix3d perturbed_rot = perturbed_pose.block<3, 3>(0, 0);
    Eigen::AngleAxisd perturbed_aa(perturbed_rot);
    Eigen::Vector3d perturbed_orient = perturbed_aa.axis() * perturbed_aa.angle();
    
    // Position difference / delta = velocity contribution
    jacobian.block<3, 1>(0, i) = (perturbed_pos - current_pos) / delta;
    
    // Orientation difference / delta = angular velocity contribution
    jacobian.block<3, 1>(3, i) = (perturbed_orient - current_orient) / delta;
  }
  
  return jacobian;
}

bool RobotKinematics::computeInverseKinematics(
  const Eigen::Matrix4d& target_pose,
  const std::vector<double>& current_joints,
  std::vector<double>& solution_joints)
{
  if (current_joints.size() != num_joints_) {
    throw std::runtime_error("Current joints size does not match DH parameters");
  }
  
  // Maximum iterations and error tolerance
  const int max_iterations = 100;
  const double position_tolerance = 1e-3;  // 1 mm
  const double orientation_tolerance = 1e-2;  // ~0.5 degrees
  
  // Initialize solution with current joints
  solution_joints = current_joints;
  
  // Target position and orientation
  Eigen::Vector3d target_pos(target_pose(0, 3), target_pose(1, 3), target_pose(2, 3));
  Eigen::Matrix3d target_rot = target_pose.block<3, 3>(0, 0);
  Eigen::AngleAxisd target_aa(target_rot);
  Eigen::Vector3d target_orient = target_aa.axis() * target_aa.angle();
  
  // Iterative inverse kinematics using Jacobian pseudoinverse
  for (int iter = 0; iter < max_iterations; ++iter) {
    // Current end-effector pose
    Eigen::Matrix4d current_pose = computeForwardKinematics(solution_joints);
    Eigen::Vector3d current_pos(current_pose(0, 3), current_pose(1, 3), current_pose(2, 3));
    
    // Current orientation
    Eigen::Matrix3d current_rot = current_pose.block<3, 3>(0, 0);
    Eigen::AngleAxisd current_aa(current_rot);
    Eigen::Vector3d current_orient = current_aa.axis() * current_aa.angle();
    
    // Error calculation
    Eigen::VectorXd error(6);
    error.head(3) = target_pos - current_pos;
    error.tail(3) = target_orient - current_orient;
    
    // Check if we've converged
    double position_error = error.head(3).norm();
    double orientation_error = error.tail(3).norm();
    
    if (position_error < position_tolerance && orientation_error < orientation_tolerance) {
      return true;  // Converged successfully
    }
    
    // Calculate Jacobian
    Eigen::MatrixXd jacobian = calculateJacobian(solution_joints);
    
    // Damped least squares for better numerical stability
    double lambda = 0.1;
    Eigen::MatrixXd damped_jacobian = jacobian.transpose() * 
      (jacobian * jacobian.transpose() + lambda * Eigen::MatrixXd::Identity(6, 6)).inverse();
    
    // Update joint angles
    Eigen::VectorXd delta_theta = damped_jacobian * error;
    
    // Apply the update with a damping factor
    double alpha = 0.5;  // Step size
    for (size_t i = 0; i < num_joints_; ++i) {
      solution_joints[i] += alpha * delta_theta(i);
    }
    
    // Enforce joint limits
    if (!checkJointLimits(solution_joints)) {
      // If we went beyond limits, we can try a different approach or abort
      return false;
    }
  }
  
  // We reached max iterations without converging
  return false;
}

std::array<double, 3> RobotKinematics::getPosition(const Eigen::Matrix4d& transform)
{
  return {transform(0, 3), transform(1, 3), transform(2, 3)};
}

std::array<double, 4> RobotKinematics::getQuaternion(const Eigen::Matrix4d& transform)
{
  Eigen::Matrix3d rot = transform.block<3, 3>(0, 0);
  Eigen::Quaterniond q(rot);
  return {q.w(), q.x(), q.y(), q.z()};
}

bool RobotKinematics::checkJointLimits(const std::vector<double>& joint_angles)
{
  for (size_t i = 0; i < num_joints_; ++i) {
    if (joint_angles[i] < joint_limits_[i].first || joint_angles[i] > joint_limits_[i].second) {
      // Clamp to limits
      const_cast<std::vector<double>&>(joint_angles)[i] = 
        std::max(joint_limits_[i].first, std::min(joint_angles[i], joint_limits_[i].second));
      return false;
    }
  }
  return true;
}

}  // namespace rbpodo_kinematics