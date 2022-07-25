# Introduction to ROS

### What is ROS ?

![ROS](https://github.com/Kucukcollu/ros_beginner_tutorials/blob/main/figures/01.png)

### ROS Comminication Structure

![ROS Comminication](https://github.com/Kucukcollu/ros_beginner_tutorials/blob/main/figures/02.png)

![ROS Comminication Comparison](https://github.com/Kucukcollu/ros_beginner_tutorials/blob/main/figures/03.png)

###

### Install deps
```bash
$ sudo apt-get install python-catkin-tools
```

### Creating workspace
```bash
# step - 1: creake a workspace folder
$ mkdir -p ~/catkin_ws/src

# step - 2: İnitialixe the workspace
$ cd ~/catkin_ws
$ catkin init

# step - 3: first build workspace
$ catkin build
```

### Source workspace
```bash
# open .bashrc with a text editor
$ nano ~/.bashrc

# at the end of the page add the folllowing line
source ~/catkin_ws/devel/setup.bash
```

### Creake first ROS package
```bash
# change the driectory
$ cd ~/catkin_ws/src

# create package
# catkin_create_pkg <package_name> <dep1> <dep2> ... <dep3>
$ catkin_create_pkg my_first_package rospy roscpp std_msgs
```

### How it is looks like
```bash
# go inside the package
$ cd my_first_package

# list files
$ ls -l

├── CMakeLists.txt
├── include
│   └── my_first_package
├── package.xml
└── src
```

### How general ROS package looks like
```bash
├── action
│   └── example.action
├── cfg
│   └── config.cfg
├── CMakeLists.txt
├── include
│   └── example_ros_package
│       ├── example.h
│       └── example.hpp
├── launch
├── msg
│   └── example.msg
├── package.xml
├── params
│   └── parameters.yaml
├── scripts
│   └── node.py
├── src
│   ├── example.cpp
│   └── main.cpp
└── srv
    └── example.srv
```