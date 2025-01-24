#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
import time

class RobotMover(Node):
    def __init__(self):
        super().__init__('robot_mover')
        # Use the position controller topic instead of joint_states
        self.publisher = self.create_publisher(
            Float64MultiArray, 
            '/position_controllers/commands', 
            10
        )
        
        self.create_timer(1.0, self.timer_callback)
        self.angle = 0.0
        self.get_logger().info('Robot mover node initialized')
        
    def timer_callback(self):
        msg = Float64MultiArray()
        # All 6 joints - first joint moves, others stay at 0
        msg.data = [self.angle, 0.0, 0.0, 0.0, 20.0, 0.0]
        self.publisher.publish(msg)
        self.get_logger().info(f'Published command: {msg.data}')
        self.angle += 0.1
        if self.angle > 1.0:
            self.angle = 0.0

def main():
    print("Initializing ROS2...")
    rclpy.init()
    print("Creating robot mover node...")
    mover = RobotMover()
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