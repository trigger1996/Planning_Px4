#
# Px4 1.14
https://docs.px4.io/main/en/ros2/user_guide.html#humble

git clone https://github.com/PX4/PX4-Autopilot.git -b 1.14.0 --recursive
bash ./PX4-Autopilot/Tools/setup/ubuntu.sh
cd PX4-Autopilot/
make px4_sitl


#
#
https://docs.px4.io/main/en/ros2/offboard_control.html

ros2 run px4_ros_com offboard_control

#
#
https://docs.px4.io/main/en/sim_gazebo_classic/multi_vehicle_simulation.html

Tools/simulation/gazebo-classic/sitl_multiple_run.sh [-m <model>] [-n <number_of_vehicles>] [-w <world>] [-s <script>] [-t <target>] [-l <label>]

https://blog.csdn.net/aniclever/article/details/135653069
