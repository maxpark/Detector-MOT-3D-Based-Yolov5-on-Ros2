cmake_minimum_required(VERSION 3.5)
project(detect_mot)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -fpermissive" )


# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(laser_geometry REQUIRED)
find_package(tf2 REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(sensor_msgs REQUIRED)
#find_package(rosidl_tutorials_msgs REQUIRED)
set(msg_files
        "msg/Track.msg"
        "msg/Frame.msg"
        "msg/Detection2d.msg"
        "msg/Objects.msg"
        )

rosidl_generate_interfaces(${PROJECT_NAME}
        ${msg_files}
        #        "msg/Detection2d.msg"
        #        "srv/AddThreeInts.srv"
                DEPENDENCIES  std_msgs geometry_msgs sensor_msgs
        #        DEPENDENCIES rosidl_tutorials_msgs
        )

ament_export_dependencies(rosidl_default_runtime)

#opencv
find_package(OpenCV  REQUIRED)
#eigen
find_package(Eigen3  REQUIRED)
#PCL
find_package(detect_mot REQUIRED)
message("---opencv_include----")
message("${OpenCV_INCLUDE_DIR}")
add_definitions( ${PCL_DEFINITIONS})
find_package(PCL REQUIRED) ##PCL冲突

include_directories(
        ${PCL_INCLUDE_DIRS}
        ${OpenCV_INCLUDE_DIRS}
        ${EIGEN3_INCLUDE_DIR}
        ${PROTOBUF_INCLUDE_DIRS}
        ${CMAKE_CURRENT_BINARY_DIR}
        include
)
find_package(Protobuf REQUIRED)
set(PROTOBUF_INCLUDE_DIRS "/usr/local/include/")
set(PROTOBUF_LIBRARIES_DIR "/usr/local/lib/")

message("---protobuf_include----")
message("${PROTOBUF_INCLUDE_DIRS}")

message("---opencv_lib----")
message("${OpenCV_LIBS_DIR}")
message("---proto_libs---")
message("${PROTOBUF_LIBRARIES_DIR}")

#CUDA
option(CUDA_USE_STATIC_CUDA_RUNTIME OFF)
find_package(CUDA REQUIRED)
set(CUDA_NVCC_PLAGS ${CUDA_NVCC_PLAGS};-std=c++11;-g;-G;-gencode;arch=compute_30;code=sm_30)
# include and link dirs of cuda and tensorrt, you need adapt them if yours are different
# cuda
include_directories(/usr/local/cuda/include)
link_directories(/usr/local/cuda/lib64)
# tensorrt
include_directories(/usr/include/x86_64-linux-gnu/) #aarch64-linux-gnu #x86_64-linux-gnu/
link_directories(/usr/lib/x86_64-linux-gnu/)
cuda_add_library(myplugins SHARED ./include/detector/yololayer.cu)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Ofast -Wfatal-errors -D_MWAITXINTRIN_H_INCLUDED")

aux_source_directory(src/lib LIB_LIST)
aux_source_directory(src/lidar_person_detect LIDAR_LIST)

add_executable(${PROJECT_NAME}_yolonode src/yolonode.cpp    ${LIB_LIST})
add_executable(${PROJECT_NAME}_detectnode src/detectnode.cpp ${LIB_LIST} ) #${LIDAR_LIST}
add_executable(${PROJECT_NAME}_socketnode src/socketnode.cpp ${LIB_LIST}  include/proto/track_frame.pb.cc)
add_executable(${PROJECT_NAME}_tracknode src/tracknode.cpp  ${LIB_LIST}  include/proto/track_frame.pb.cc)

target_link_libraries(${PROJECT_NAME}_detectnode
        #        ${geometry_msgs_LIBRARIES}
        #        ${sensor_msgs_LIBRARIES}
        ${OpenCV_LIBS}
        ${PCL_LIBRARIES}
        ${BASE_LIB_LIBRARIES}
        nvinfer cudart myplugins
        )
target_link_libraries(${PROJECT_NAME}_socketnode
        #        ${geometry_msgs_LIBRARIES}
        #        ${sensor_msgs_LIBRARIES}
        ${OpenCV_LIBS}
        ${PCL_LIBRARIES}
        ${BASE_LIB_LIBRARIES}
        ${PROTOBUF_LIBRARIES}
        nvinfer cudart myplugins
#        "/usr/local/lib/libprotobuf.so"
        )
target_link_libraries(${PROJECT_NAME}_yolonode
        #        ${geometry_msgs_LIBRARIES}
        #        ${sensor_msgs_LIBRARIES}
        ${OpenCV_LIBS}
        ${PCL_LIBRARIES}
        ${BASE_LIB_LIBRARIES}  nvinfer cudart
        myplugins
#        "/home/mzc/code/ROS/dev_ws/build/detect_mot/libmyplugins.so"
        )
target_link_libraries(${PROJECT_NAME}_tracknode
        #        ${geometry_msgs_LIBRARIES}
        #        ${sensor_msgs_LIBRARIES}
        ${OpenCV_LIBS}
        ${PCL_LIBRARIES}
        ${BASE_LIB_LIBRARIES}
        ${PROTOBUF_LIBRARIES}
        nvinfer cudart myplugins
#        "/usr/local/lib/libprotobuf.so"
        )
ament_target_dependencies(${PROJECT_NAME}_detectnode
        rclcpp
        std_msgs
        sensor_msgs
        geometry_msgs
        cv_bridge
        tf2
        laser_geometry
        )
ament_target_dependencies(${PROJECT_NAME}_socketnode
        rclcpp
        std_msgs
        sensor_msgs
        geometry_msgs
        cv_bridge
        )
ament_target_dependencies(${PROJECT_NAME}_yolonode
        rclcpp
        std_msgs
        sensor_msgs
        geometry_msgs
        cv_bridge
        )
ament_target_dependencies(${PROJECT_NAME}_tracknode
        rclcpp
        std_msgs
        sensor_msgs
        geometry_msgs
        cv_bridge
        )
rosidl_target_interfaces(${PROJECT_NAME}_yolonode ${PROJECT_NAME} "rosidl_typesupport_cpp")
rosidl_target_interfaces(${PROJECT_NAME}_detectnode ${PROJECT_NAME} "rosidl_typesupport_cpp")
rosidl_target_interfaces(${PROJECT_NAME}_socketnode ${PROJECT_NAME}  "rosidl_typesupport_cpp" )
rosidl_target_interfaces(${PROJECT_NAME}_tracknode ${PROJECT_NAME}  "rosidl_typesupport_cpp" )

install(DIRECTORY launch
        DESTINATION share/${PROJECT_NAME}/
        )
install(DIRECTORY config
        DESTINATION share/${PROJECT_NAME}/
        )
install(TARGETS
        ${PROJECT_NAME}_yolonode ${PROJECT_NAME}_detectnode ${PROJECT_NAME}_socketnode ${PROJECT_NAME}_tracknode
        DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
