## ROS2 RB Arm (rbpodo_description)

This repo is to simulate the RViz with RB3-730es model in ROS2.

We assummed that you have already installed the rbpodo_ros2 from rainbow robotics.
- The simulation robot arm model is based on the URDF model of the RB3-730es robot arm.

## Installation

To run the simulation robot arm model in RViz, you need to follows:
1. In terminal 1, run the following command to install the dependencies:
```bash
source /opt/ros/humble/setup.zsh
source ~/rbpodo_ros2_ws/install/setup.zsh
ros2 launch rbpodo_bringup rbpodo.launch.py model:=rb3-730es_u use_rviz:=true use_fake_hardware:=true
```

2. In terminal 2, run the following command to control the robot arm:
```bash
source /opt/ros/humble/setup.zsh
source ~/rbpodo_ros2_ws/install/setup.zsh
ros2 run rbpodo_controller rbpodo_controller
```

### From the controller node:
- We create the node package with CPP for moving action purpose of the simulation robot arm model.
- Once it done the control module, we can extend into the real robot arm model.

The Python code is also used for testing movement of the robot arm model as the first trial.
