cmake_minimum_required(VERSION 3.8)
project(lidar_bringup)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 1. ค้นหา dependencies พื้นฐาน
find_package(ament_cmake REQUIRED)

# 2. คำสั่งติดตั้งโฟลเดอร์ launch (เพิ่มตรงนี้!)
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

# 3. ส่วนจบของไฟล์
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cppcheck_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
