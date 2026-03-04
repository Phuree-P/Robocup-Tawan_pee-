cmake_minimum_required(VERSION 3.8)
project(ired_bringup)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(ired_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_msgs REQUIRED)

include_directories(
  include
)

set(dependencies
  "geometry_msgs"
  "ired_msgs"
  "nav_msgs"
  "rclcpp"
  "rclpy"
  "sensor_msgs"
  "std_msgs"
  "std_srvs"
  "tf2"
  "tf2_msgs"
)

set(EXEC_NAME_FORWARD_KINEMATICS_NODE "forward_kinematics_node")
set(EXEC_NAME_INVERSE_KINEMATICS_NODE "inverse_kinematics_node")
set(EXEC_NAME_IMU_NODE "imu_node")
set(EXEC_NAME_IREDCR_MODBUS_NODE "iredcr_modbus_node")
set(EXEC_NAME_ODOM_NODE "odom_node")

add_executable(${EXEC_NAME_FORWARD_KINEMATICS_NODE} src/forward_kinematics.cpp)
ament_target_dependencies(${EXEC_NAME_FORWARD_KINEMATICS_NODE} ${dependencies})
add_executable(${EXEC_NAME_INVERSE_KINEMATICS_NODE} src/inverse_kinematics.cpp)
ament_target_dependencies(${EXEC_NAME_INVERSE_KINEMATICS_NODE} ${dependencies})
add_executable(${EXEC_NAME_IMU_NODE} src/imu.cpp)
ament_target_dependencies(${EXEC_NAME_IMU_NODE} ${dependencies})
add_executable(${EXEC_NAME_IREDCR_MODBUS_NODE} src/ired_controller.cpp src/modbus_rtu.cpp)
ament_target_dependencies(${EXEC_NAME_IREDCR_MODBUS_NODE} ${dependencies})
add_executable(${EXEC_NAME_ODOM_NODE} src/odom.cpp)
ament_target_dependencies(${EXEC_NAME_ODOM_NODE} ${dependencies})

install(TARGETS 
  ${EXEC_NAME_FORWARD_KINEMATICS_NODE}
  ${EXEC_NAME_INVERSE_KINEMATICS_NODE}
  ${EXEC_NAME_IMU_NODE}
  ${EXEC_NAME_IREDCR_MODBUS_NODE}
  ${EXEC_NAME_ODOM_NODE}
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch param urdf
  DESTINATION share/${PROJECT_NAME}
)
install(DIRECTORY include/
  DESTINATION include/
)

ament_export_include_directories(include)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(ired_msgs)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(rclcpp)
ament_export_dependencies(rclpy)
ament_export_dependencies(sensor_msgs)
ament_export_dependencies(std_msgs)
ament_export_dependencies(tf2)
ament_export_dependencies(tf2_msgs)
ament_package()
