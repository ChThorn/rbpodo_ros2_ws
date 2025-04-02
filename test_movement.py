#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
import time
import math
import numpy as np

class RobotMover(Node):
    def __init__(self):
        super().__init__('robot_mover')
        
        # Unit conversion constants
        self.MM_TO_M = 0.001        # Convert mm to meters
        self.M_TO_MM = 1000.0       # Convert meters to mm
        self.DEG_TO_RAD = math.pi / 180.0  # Convert degrees to radians
        self.RAD_TO_DEG = 180.0 / math.pi  # Convert radians to degrees
        
        # Publisher for position commands
        self.publisher = self.create_publisher(
            Float64MultiArray, 
            '/position_controllers/commands',
            10
        )
        
        # Robot parameters (in millimeters)
        self.link_lengths = [200, 300, 300, 100, 100, 100]  # Example link lengths in mm
        self.joint_limits = [
            (-180, 180),  # Joint 1 (degrees)
            (-90, 90),    # Joint 2 (degrees)
            (-90, 90),    # Joint 3 (degrees)
            (-180, 180),  # Joint 4 (degrees)
            (-90, 90),    # Joint 5 (degrees)
            (-180, 180)   # Joint 6 (degrees)
        ]
        
        # Number of joints
        self.num_joints = 6
        
        # Motion parameters for each joint
        self.current_angles = np.zeros(self.num_joints)  # in degrees
        self.target_angles = np.zeros(self.num_joints)   # in degrees
        self.current_velocities = np.zeros(self.num_joints)  # in deg/s
        
        # Base configuration for each joint
        self.base_max_velocities = np.array([60.0, 60.0, 60.0, 90.0, 90.0, 90.0])  # deg/s
        self.base_max_accelerations = np.array([30.0, 30.0, 30.0, 45.0, 45.0, 45.0])  # deg/s²
        
        # Current motion limits (will be adjusted for synchronization)
        self.max_velocities = self.base_max_velocities.copy()
        self.max_accelerations = self.base_max_accelerations.copy()
        
        # Create a timer with higher frequency for smoother motion
        self.update_rate = 0.02  # 50Hz
        self.create_timer(self.update_rate, self.timer_callback)
        
        # Motion tracking
        self.start_time = time.time()
        self.last_info_time = 0
        self.is_moving = False
        self.movement_complete = False
        
        self.get_logger().info('Robot mover node initialized')
        self.get_logger().info(f'Base max velocities (deg/s): {self.base_max_velocities}')
        self.get_logger().info(f'Base max accelerations (deg/s²): {self.base_max_accelerations}')

    def inverse_kinematics(self, x_mm, y_mm, z_mm, roll_deg, pitch_deg, yaw_deg):
        """
        Calculate inverse kinematics for 6-DOF robot
        Input: position in mm, orientation in degrees
        Output: joint angles in degrees
        """
        # Convert mm to meters for calculations
        x = x_mm * self.MM_TO_M
        y = y_mm * self.MM_TO_M
        z = z_mm * self.MM_TO_M
        
        # Convert degrees to radians for calculations
        roll = roll_deg * self.DEG_TO_RAD
        pitch = pitch_deg * self.DEG_TO_RAD
        yaw = yaw_deg * self.DEG_TO_RAD
        
        target = np.zeros(6)
        
        # Base rotation (yaw)
        target[0] = math.atan2(y, x) * self.RAD_TO_DEG
        
        # Distance to target
        r = math.sqrt(x*x + y*y)
        
        # Shoulder and elbow joints
        target[1] = math.atan2(z, r) * self.RAD_TO_DEG * 0.8
        target[2] = math.atan2(z, r) * self.RAD_TO_DEG * 0.6
        
        # Wrist joints (in degrees)
        target[3] = roll_deg
        target[4] = pitch_deg
        target[5] = yaw_deg - target[0]  # Compensate for base rotation
        
        # Apply joint limits
        for i in range(self.num_joints):
            target[i] = np.clip(target[i], self.joint_limits[i][0], self.joint_limits[i][1])
        
        return target

    def set_target_position(self, x_mm, y_mm, z_mm, roll_deg=0.0, pitch_deg=0.0, yaw_deg=0.0):
        """
        Set target position in millimeters and orientation in degrees
        """
        # Calculate joint angles using inverse kinematics
        self.target_angles = self.inverse_kinematics(x_mm, y_mm, z_mm, roll_deg, pitch_deg, yaw_deg)
        
        # Synchronize joint motions
        self.synchronize_joint_motion(self.target_angles)
        
        self.is_moving = True
        self.movement_complete = False
        self.start_time = time.time()
        
        self.get_logger().info(
            f'Setting target position: x={x_mm}mm, y={y_mm}mm, z={z_mm}mm, '
            f'roll={roll_deg}°, pitch={pitch_deg}°, yaw={yaw_deg}°'
        )
        self.get_logger().info(f'Target angles (degrees): {[f"{angle:.2f}°" for angle in self.target_angles]}')

    def synchronize_joint_motion(self, target_angles):
        """Adjust joint velocities to synchronize movement"""
        distances = np.abs(target_angles - self.current_angles)  # in degrees
        movement_times = distances / self.base_max_velocities
        max_time = np.max(movement_times)
        
        for i in range(self.num_joints):
            if distances[i] > 0.01:
                self.max_velocities[i] = distances[i] / max_time
                self.max_accelerations[i] = (self.max_velocities[i] / 
                                           self.base_max_velocities[i]) * self.base_max_accelerations[i]

    def calculate_trajectories(self):
        """Calculate acceleration for each joint in deg/s²"""
        accelerations = np.zeros(self.num_joints)
        
        for i in range(self.num_joints):
            remaining_distance = self.target_angles[i] - self.current_angles[i]  # in degrees
            
            if abs(remaining_distance) < 0.01 and abs(self.current_velocities[i]) < 0.01:
                continue
                
            time_to_max_vel = self.max_velocities[i] / self.max_accelerations[i]
            accel_distance = 0.5 * self.max_accelerations[i] * time_to_max_vel**2
            
            if abs(remaining_distance) < 2 * accel_distance:
                desired_velocity = math.sqrt(2 * self.max_accelerations[i] * 
                                          abs(remaining_distance)) * math.copysign(1, remaining_distance)
                if abs(self.current_velocities[i]) > abs(desired_velocity):
                    accelerations[i] = -self.max_accelerations[i] * math.copysign(1, self.current_velocities[i])
                    continue
            
            if abs(self.current_velocities[i]) < self.max_velocities[i]:
                accelerations[i] = self.max_accelerations[i] * math.copysign(1, remaining_distance)
        
        return accelerations

    def timer_callback(self):
        if not self.is_moving:
            return
            
        current_time = time.time()
        accelerations = self.calculate_trajectories()
        
        # Update velocities and positions (all in degrees)
        self.current_velocities += accelerations * self.update_rate
        self.current_angles += self.current_velocities * self.update_rate
        
        # Convert to radians for ROS message
        msg = Float64MultiArray()
        msg.data = [angle * self.DEG_TO_RAD for angle in self.current_angles]
        self.publisher.publish(msg)
        
        if current_time - self.last_info_time >= 0.5:
            self.get_logger().info(
                f'\nMotion Status:'
                f'\n  Current Angles: {[f"{angle:.2f}°" for angle in self.current_angles]}'
                f'\n  Target Angles: {[f"{angle:.2f}°" for angle in self.target_angles]}'
                f'\n  Current Velocities: {[f"{vel:.2f}°/s" for vel in self.current_velocities]}'
                f'\n  Accelerations: {[f"{acc:.2f}°/s²" for acc in accelerations]}'
                f'\n  Time: {current_time - self.start_time:.2f} s'
            )
            self.last_info_time = current_time
        
        position_reached = np.all(np.abs(self.target_angles - self.current_angles) < 0.01)
        velocity_zero = np.all(np.abs(self.current_velocities) < 0.01)
        
        if position_reached and velocity_zero and not self.movement_complete:
            self.movement_complete = True
            self.is_moving = False
            self.get_logger().info("Target position reached")
            self.get_logger().info(f"Final joint angles: {[f'{angle:.2f}°' for angle in self.current_angles]}")

def main():
    print("Initializing ROS2...")
    rclpy.init()
    
    print("Creating robot mover node...")
    mover = RobotMover()
    
    # Example movement sequence
    def movement_sequence():
        time.sleep(2)  # Wait for node to initialize
        
        # Move to first position (coordinates in mm, angles in degrees)
        mover.set_target_position(400, 300, 200, 0, 45, 0)
        # mover.set_target_position(0, 0, 0, 0, 0, 0)
        time.sleep(5)
        
        # Move to second position
        mover.set_target_position(300, -200, 400, 30, 0, -75)
    
    import threading
    sequence_thread = threading.Thread(target=movement_sequence)
    sequence_thread.start()
    
    print("Spinning node...")
    try:
        rclpy.spin(mover)
    except KeyboardInterrupt:
        print("\nShutdown requested by user")
    except Exception as e:
        print(f"Error occurred: {e}")
    finally:
        print("Cleaning up...")
        mover.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
