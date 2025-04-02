#!/usr/bin/env python3
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Get the package directories
    rbpodo_kinematics_pkg = get_package_share_directory('rbpodo_kinematics')
    rbpodo_description_pkg = get_package_share_directory('rbpodo_description')
    
    # Launch arguments
    robot_model_arg = DeclareLaunchArgument(
        'robot_model', 
        default_value='rb_6dof',
        description='Robot model to use for kinematics (without .urdf extension)'
    )
    
    robot_model = LaunchConfiguration('robot_model')
    
    # Load DH parameters from YAML file
    dh_params_file = os.path.join(rbpodo_kinematics_pkg, 'config', 'dh_parameters.yaml')
    
    # Forward kinematics node with parameters
    forward_kinematics_node = Node(
        package='rbpodo_kinematics',
        executable='forward_kinematics',
        name='forward_kinematics',
        output='screen',
        parameters=[
            dh_params_file,
            # These can be useful if we want to extract parameters from URDF later
            {
                'robot_model': robot_model,
                'urdf_path': os.path.join(rbpodo_description_pkg, 'robots')
            }
        ],
    )
    
    # Inverse kinematics node with parameters
    inverse_kinematics_node = Node(
        package='rbpodo_kinematics',
        executable='inverse_kinematics',
        name='inverse_kinematics',
        output='screen',
        parameters=[
            dh_params_file,
            {
                'robot_model': robot_model,
                'urdf_path': os.path.join(rbpodo_description_pkg, 'robots')
            }
        ],
    )
    
    # Try to include controller launch file if it exists
    try:
        controller_pkg = get_package_share_directory('rbpodo_controller')
        controller_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(
                    controller_pkg,
                    'launch',
                    'rbpodo_controller.launch.py'
                )
            ]),
        )
        
        return LaunchDescription([
            # Add launch arguments
            robot_model_arg,
            
            # First include the controller
            controller_launch,
            
            # Then start kinematics nodes
            forward_kinematics_node,
            inverse_kinematics_node,
        ])
    except:
        # If controller launch fails, just launch kinematics nodes
        return LaunchDescription([
            # Add launch arguments
            robot_model_arg,
            
            # Start kinematics nodes
            forward_kinematics_node,
            inverse_kinematics_node,
        ])