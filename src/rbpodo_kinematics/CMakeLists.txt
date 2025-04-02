cmake_minimum_required(VERSION 3.10)
project(rbpodo_kinematics)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rbpodo_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(rbpodo_description REQUIRED)
find_package(Eigen3 REQUIRED)

# Include directories
include_directories(
  include
  ${EIGEN3_INCLUDE_DIR}
)

# Create robot_kinematics library
add_library(robot_kinematics
  src/robot_kinematics.cpp
)

ament_target_dependencies(robot_kinematics
  Eigen3
)

# Forward Kinematics node
add_executable(forward_kinematics src/forward_kinematics.cpp)
target_link_libraries(forward_kinematics
  robot_kinematics
)

ament_target_dependencies(forward_kinematics
  rclcpp
  geometry_msgs
  sensor_msgs
  tf2
  tf2_ros
)

# Inverse Kinematics node
add_executable(inverse_kinematics src/inverse_kinematics.cpp)
target_link_libraries(inverse_kinematics
  robot_kinematics
)

ament_target_dependencies(inverse_kinematics
  rclcpp
  geometry_msgs
  sensor_msgs
  std_msgs
)

# Motion Planner node - MOVED BEFORE INSTALL COMMAND
add_executable(motion_planner src/motion_planner.cpp)
target_link_libraries(motion_planner
  robot_kinematics
)

ament_target_dependencies(motion_planner
  rclcpp
  geometry_msgs
  sensor_msgs
  std_msgs
)

# Install targets
install(TARGETS
  robot_kinematics
  forward_kinematics
  inverse_kinematics
  motion_planner
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

# Install include directory
install(DIRECTORY include/
  DESTINATION include
)

# Install launch files
install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}
)

ament_export_include_directories(include)
ament_export_libraries(robot_kinematics)
ament_export_dependencies(Eigen3)

ament_package()