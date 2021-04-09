// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from detect_mot:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__OBJECTS__STRUCT_HPP_
#define DETECT_MOT__MSG__OBJECTS__STRUCT_HPP_

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
// Member 'objects_front'
// Member 'objects_back'
#include "detect_mot/msg/detection2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__detect_mot__msg__Objects __attribute__((deprecated))
#else
# define DEPRECATED__detect_mot__msg__Objects __declspec(deprecated)
#endif

namespace detect_mot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Objects_
{
  using Type = Objects_<ContainerAllocator>;

  explicit Objects_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Objects_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _objects_front_type =
    std::vector<detect_mot::msg::Detection2d_<ContainerAllocator>, typename ContainerAllocator::template rebind<detect_mot::msg::Detection2d_<ContainerAllocator>>::other>;
  _objects_front_type objects_front;
  using _objects_back_type =
    std::vector<detect_mot::msg::Detection2d_<ContainerAllocator>, typename ContainerAllocator::template rebind<detect_mot::msg::Detection2d_<ContainerAllocator>>::other>;
  _objects_back_type objects_back;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__objects_front(
    const std::vector<detect_mot::msg::Detection2d_<ContainerAllocator>, typename ContainerAllocator::template rebind<detect_mot::msg::Detection2d_<ContainerAllocator>>::other> & _arg)
  {
    this->objects_front = _arg;
    return *this;
  }
  Type & set__objects_back(
    const std::vector<detect_mot::msg::Detection2d_<ContainerAllocator>, typename ContainerAllocator::template rebind<detect_mot::msg::Detection2d_<ContainerAllocator>>::other> & _arg)
  {
    this->objects_back = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    detect_mot::msg::Objects_<ContainerAllocator> *;
  using ConstRawPtr =
    const detect_mot::msg::Objects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<detect_mot::msg::Objects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<detect_mot::msg::Objects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      detect_mot::msg::Objects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<detect_mot::msg::Objects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      detect_mot::msg::Objects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<detect_mot::msg::Objects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<detect_mot::msg::Objects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<detect_mot::msg::Objects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__detect_mot__msg__Objects
    std::shared_ptr<detect_mot::msg::Objects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__detect_mot__msg__Objects
    std::shared_ptr<detect_mot::msg::Objects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Objects_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->objects_front != other.objects_front) {
      return false;
    }
    if (this->objects_back != other.objects_back) {
      return false;
    }
    return true;
  }
  bool operator!=(const Objects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Objects_

// alias to use template instance with default allocator
using Objects =
  detect_mot::msg::Objects_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace detect_mot

#endif  // DETECT_MOT__MSG__OBJECTS__STRUCT_HPP_
