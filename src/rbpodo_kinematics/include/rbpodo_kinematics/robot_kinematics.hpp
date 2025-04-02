#ifndef RBPODO_KINEMATICS_ROBOT_KINEMATICS_HPP
#define RBPODO_KINEMATICS_ROBOT_KINEMATICS_HPP

#include <vector>
#include <array>
#include <cmath>
#include <Eigen/Dense>
#include <memory>

namespace rbpodo_kinematics
{

struct DHParameters
{
  double a;      // Link length
  double alpha;  // Link twist
  double d;      // Link offset
  double theta;  // Joint angle (variable for revolute joints)
};

class RobotKinematics
{
public:
  RobotKinematics();
  
  // Set DH parameters from URDF or configuration
  void setDHParameters(const std::vector<DHParameters>& dh_params);
  
  // Forward Kinematics: Calculate end-effector pose from joint angles
  Eigen::Matrix4d computeForwardKinematics(const std::vector<double>& joint_angles);
  
  // Inverse Kinematics: Calculate joint angles from end-effector pose
  bool computeInverseKinematics(
    const Eigen::Matrix4d& target_pose,
    const std::vector<double>& current_joints,
    std::vector<double>& solution_joints);
  
  // Get position and orientation from transformation matrix
  std::array<double, 3> getPosition(const Eigen::Matrix4d& transform);
  std::array<double, 4> getQuaternion(const Eigen::Matrix4d& transform);

private:
  // DH parameters for the robot
  std::vector<DHParameters> dh_params_;
  
  // Number of joints/DOF
  size_t num_joints_;
  
  // Joint limits
  std::vector<std::pair<double, double>> joint_limits_;
  
  // Transformation matrix from DH parameters
  Eigen::Matrix4d dhTransform(const DHParameters& params);
  
  // Numerical Jacobian for IK
  Eigen::MatrixXd calculateJacobian(const std::vector<double>& joint_angles);
  
  // Check if joint angles are within limits
  bool checkJointLimits(const std::vector<double>& joint_angles);
};

}  // namespace rbpodo_kinematics

#endif  // RBPODO_KINEMATICS_ROBOT_KINEMATICS_HPP