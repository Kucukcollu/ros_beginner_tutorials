cmake_minimum_required(VERSION 3.0.2)
project(003_msg_publisher_subscriber)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})
add_executable(publisher src/publisher.cpp)
target_link_libraries(publisher ${catkin_LIBRARIES})

include_directories(include ${catkin_INCLUDE_DIRS})
add_executable(subscriber src/subscriber.cpp)
target_link_libraries(subscriber ${catkin_LIBRARIES})