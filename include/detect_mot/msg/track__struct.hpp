// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from detect_mot:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__TRACK__STRUCT_HPP_
#define DETECT_MOT__MSG__TRACK__STRUCT_HPP_

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
// Member 'position'
// Member 'velocity'
// Member 'size'
// Member 'position_e'
// Member 'velocity_e'
// Member 'pointcloud'
// Member 'trace'
#include "geometry_msgs/msg/point32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__detect_mot__msg__Track __attribute__((deprecated))
#else
# define DEPRECATED__detect_mot__msg__Track __declspec(deprecated)
#endif

namespace detect_mot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Track_
{
  using Type = Track_<ContainerAllocator>;

  explicit Track_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : position(_init),
    velocity(_init),
    size(_init),
    position_e(_init),
    velocity_e(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->classid = 0l;
      this->classname = "";
      this->age = 0l;
      this->information3d = false;
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->bbox.begin(), this->bbox.end(), 0l);
    }
  }

  explicit Track_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : classname(_alloc),
    bbox(_alloc),
    position(_alloc, _init),
    velocity(_alloc, _init),
    size(_alloc, _init),
    position_e(_alloc, _init),
    velocity_e(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->classid = 0l;
      this->classname = "";
      this->age = 0l;
      this->information3d = false;
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->bbox.begin(), this->bbox.end(), 0l);
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _classid_type =
    int32_t;
  _classid_type classid;
  using _classname_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _classname_type classname;
  using _age_type =
    int32_t;
  _age_type age;
  using _information3d_type =
    bool;
  _information3d_type information3d;
  using _bbox_type =
    std::array<int32_t, 4>;
  _bbox_type bbox;
  using _position_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _velocity_type velocity;
  using _size_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _size_type size;
  using _position_e_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _position_e_type position_e;
  using _velocity_e_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _velocity_e_type velocity_e;
  using _pointcloud_type =
    std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point32_<ContainerAllocator>>::other>;
  _pointcloud_type pointcloud;
  using _trace_type =
    std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point32_<ContainerAllocator>>::other>;
  _trace_type trace;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__classid(
    const int32_t & _arg)
  {
    this->classid = _arg;
    return *this;
  }
  Type & set__classname(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->classname = _arg;
    return *this;
  }
  Type & set__age(
    const int32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__information3d(
    const bool & _arg)
  {
    this->information3d = _arg;
    return *this;
  }
  Type & set__bbox(
    const std::array<int32_t, 4> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__size(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__position_e(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->position_e = _arg;
    return *this;
  }
  Type & set__velocity_e(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->velocity_e = _arg;
    return *this;
  }
  Type & set__pointcloud(
    const std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point32_<ContainerAllocator>>::other> & _arg)
  {
    this->pointcloud = _arg;
    return *this;
  }
  Type & set__trace(
    const std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point32_<ContainerAllocator>>::other> & _arg)
  {
    this->trace = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    detect_mot::msg::Track_<ContainerAllocator> *;
  using ConstRawPtr =
    const detect_mot::msg::Track_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<detect_mot::msg::Track_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<detect_mot::msg::Track_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      detect_mot::msg::Track_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<detect_mot::msg::Track_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      detect_mot::msg::Track_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<detect_mot::msg::Track_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<detect_mot::msg::Track_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<detect_mot::msg::Track_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__detect_mot__msg__Track
    std::shared_ptr<detect_mot::msg::Track_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__detect_mot__msg__Track
    std::shared_ptr<detect_mot::msg::Track_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Track_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->classid != other.classid) {
      return false;
    }
    if (this->classname != other.classname) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->information3d != other.information3d) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->position_e != other.position_e) {
      return false;
    }
    if (this->velocity_e != other.velocity_e) {
      return false;
    }
    if (this->pointcloud != other.pointcloud) {
      return false;
    }
    if (this->trace != other.trace) {
      return false;
    }
    return true;
  }
  bool operator!=(const Track_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Track_

// alias to use template instance with default allocator
using Track =
  detect_mot::msg::Track_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace detect_mot

#endif  // DETECT_MOT__MSG__TRACK__STRUCT_HPP_
