import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    # Declare all launch arguments with default values
    max_velocity_arg = DeclareLaunchArgument(
        'max_velocity',
        default_value='0.3',
        description='Maximum joint velocity (rad/s)'
    )
    
    max_acceleration_arg = DeclareLaunchArgument(
        'max_acceleration',
        default_value='0.1',
        description='Maximum joint acceleration (rad/s²)'
    )
    
    control_period_arg = DeclareLaunchArgument(
        'control_period',
        default_value='0.1',
        description='Control loop period (seconds)'
    )
    
    startup_mode_arg = DeclareLaunchArgument(
        'startup_mode',
        default_value='0',
        description='0=ReturnToHome, 1=ContinueToNext, 2=NearestWaypoint'
    )
    
    joint_state_timeout_arg = DeclareLaunchArgument(
        'joint_state_timeout',
        default_value='5.0',
        description='Timeout for joint state messages (seconds)'
    )
    
    # Create and return launch description with the controller node
    return LaunchDescription([
        # Include all the declared arguments
        max_velocity_arg,
        max_acceleration_arg,
        control_period_arg,
        startup_mode_arg,
        joint_state_timeout_arg,
        
        # Launch the controller node with parameters
        Node(
            package='rbpodo_controller',
            executable='rbpodo_controller',
            name='rbpodo_trajectory_controller',
            output='screen',
            parameters=[{
                'max_velocity': LaunchConfiguration('max_velocity'),
                'max_acceleration': LaunchConfiguration('max_acceleration'),
                'control_period': LaunchConfiguration('control_period'),
                'startup_mode': LaunchConfiguration('startup_mode'),
                'joint_state_timeout': LaunchConfiguration('joint_state_timeout'),
                'joint_command_topic': '/position_controllers/commands',
                'joint_state_topic': '/rbpodo/joint_states'
            }]
        )
    ])