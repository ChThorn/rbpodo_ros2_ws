#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Get the package directories
    rbpodo_kinematics_pkg = get_package_share_directory('rbpodo_kinematics')
    
    # Declare launch arguments
    target_file_arg = DeclareLaunchArgument(
        'target_file',
        default_value=os.path.join(rbpodo_kinematics_pkg, 'config', 'target_poses.txt'),
        description='Path to the file containing target poses'
    )
    
    control_rate_arg = DeclareLaunchArgument(
        'control_rate',
        default_value='50.0',
        description='Trajectory control rate in Hz'
    )
    
    max_velocity_arg = DeclareLaunchArgument(
        'max_velocity',
        default_value='0.5',
        description='Maximum joint velocity in rad/s'
    )
    
    max_acceleration_arg = DeclareLaunchArgument(
        'max_acceleration',
        default_value='0.3',
        description='Maximum joint acceleration in rad/s²'
    )
    
    # Motion planner node with trajectory generation parameters
    motion_planner_node = Node(
        package='rbpodo_kinematics',
        executable='motion_planner',
        name='motion_planner',
        output='screen',
        parameters=[{
            'target_file': LaunchConfiguration('target_file'),
            'trajectory_control_rate': LaunchConfiguration('control_rate'),
            'max_velocity': LaunchConfiguration('max_velocity'),
            'max_acceleration': LaunchConfiguration('max_acceleration')
        }]
    )
    
    # Create and return launch description
    return LaunchDescription([
        target_file_arg,
        control_rate_arg,
        max_velocity_arg,
        max_acceleration_arg,
        motion_planner_node
    ])