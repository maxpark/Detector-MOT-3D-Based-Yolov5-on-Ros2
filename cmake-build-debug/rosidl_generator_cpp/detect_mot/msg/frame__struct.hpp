// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__FRAME__STRUCT_HPP_
#define DETECT_MOT__MSG__FRAME__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"
// Member 'robot_pose'
#include "geometry_msgs/msg/pose2_d__struct.hpp"
// Member 'front_camera'
// Member 'back_camera'
#include "detect_mot/msg/track__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__detect_mot__msg__Frame __attribute__((deprecated))
#else
# define DEPRECATED__detect_mot__msg__Frame __declspec(deprecated)
#endif

namespace detect_mot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Frame_
{
  using Type = Frame_<ContainerAllocator>;

  explicit Frame_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    robot_pose(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->numof3d_front = 0l;
      this->numof3d_back = 0l;
    }
  }

  explicit Frame_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_pose(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->numof3d_front = 0l;
      this->numof3d_back = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _numof3d_front_type =
    int32_t;
  _numof3d_front_type numof3d_front;
  using _numof3d_back_type =
    int32_t;
  _numof3d_back_type numof3d_back;
  using _robot_pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _robot_pose_type robot_pose;
  using _front_camera_type =
    std::vector<detect_mot::msg::Track_<ContainerAllocator>, typename ContainerAllocator::template rebind<detect_mot::msg::Track_<ContainerAllocator>>::other>;
  _front_camera_type front_camera;
  using _back_camera_type =
    std::vector<detect_mot::msg::Track_<ContainerAllocator>, typename ContainerAllocator::template rebind<detect_mot::msg::Track_<ContainerAllocator>>::other>;
  _back_camera_type back_camera;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__numof3d_front(
    const int32_t & _arg)
  {
    this->numof3d_front = _arg;
    return *this;
  }
  Type & set__numof3d_back(
    const int32_t & _arg)
  {
    this->numof3d_back = _arg;
    return *this;
  }
  Type & set__robot_pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->robot_pose = _arg;
    return *this;
  }
  Type & set__front_camera(
    const std::vector<detect_mot::msg::Track_<ContainerAllocator>, typename ContainerAllocator::template rebind<detect_mot::msg::Track_<ContainerAllocator>>::other> & _arg)
  {
    this->front_camera = _arg;
    return *this;
  }
  Type & set__back_camera(
    const std::vector<detect_mot::msg::Track_<ContainerAllocator>, typename ContainerAllocator::template rebind<detect_mot::msg::Track_<ContainerAllocator>>::other> & _arg)
  {
    this->back_camera = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    detect_mot::msg::Frame_<ContainerAllocator> *;
  using ConstRawPtr =
    const detect_mot::msg::Frame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<detect_mot::msg::Frame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<detect_mot::msg::Frame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      detect_mot::msg::Frame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<detect_mot::msg::Frame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      detect_mot::msg::Frame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<detect_mot::msg::Frame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<detect_mot::msg::Frame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<detect_mot::msg::Frame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__detect_mot__msg__Frame
    std::shared_ptr<detect_mot::msg::Frame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__detect_mot__msg__Frame
    std::shared_ptr<detect_mot::msg::Frame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Frame_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->numof3d_front != other.numof3d_front) {
      return false;
    }
    if (this->numof3d_back != other.numof3d_back) {
      return false;
    }
    if (this->robot_pose != other.robot_pose) {
      return false;
    }
    if (this->front_camera != other.front_camera) {
      return false;
    }
    if (this->back_camera != other.back_camera) {
      return false;
    }
    return true;
  }
  bool operator!=(const Frame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Frame_

// alias to use template instance with default allocator
using Frame =
  detect_mot::msg::Frame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace detect_mot

#endif  // DETECT_MOT__MSG__FRAME__STRUCT_HPP_
