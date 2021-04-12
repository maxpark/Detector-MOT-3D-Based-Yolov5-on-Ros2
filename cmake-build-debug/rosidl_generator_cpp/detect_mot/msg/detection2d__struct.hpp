// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from detect_mot:msg/Detection2d.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__DETECTION2D__STRUCT_HPP_
#define DETECT_MOT__MSG__DETECTION2D__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__detect_mot__msg__Detection2d __attribute__((deprecated))
#else
# define DEPRECATED__detect_mot__msg__Detection2d __declspec(deprecated)
#endif

namespace detect_mot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection2d_
{
  using Type = Detection2d_<ContainerAllocator>;

  explicit Detection2d_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->classid = 0l;
      this->classname = "";
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->bbox.begin(), this->bbox.end(), 0l);
    }
  }

  explicit Detection2d_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : classname(_alloc),
    bbox(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->classid = 0l;
      this->classname = "";
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->bbox.begin(), this->bbox.end(), 0l);
    }
  }

  // field types and members
  using _classid_type =
    int32_t;
  _classid_type classid;
  using _classname_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _classname_type classname;
  using _bbox_type =
    std::array<int32_t, 4>;
  _bbox_type bbox;

  // setters for named parameter idiom
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
  Type & set__bbox(
    const std::array<int32_t, 4> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    detect_mot::msg::Detection2d_<ContainerAllocator> *;
  using ConstRawPtr =
    const detect_mot::msg::Detection2d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<detect_mot::msg::Detection2d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<detect_mot::msg::Detection2d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      detect_mot::msg::Detection2d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<detect_mot::msg::Detection2d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      detect_mot::msg::Detection2d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<detect_mot::msg::Detection2d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<detect_mot::msg::Detection2d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<detect_mot::msg::Detection2d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__detect_mot__msg__Detection2d
    std::shared_ptr<detect_mot::msg::Detection2d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__detect_mot__msg__Detection2d
    std::shared_ptr<detect_mot::msg::Detection2d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection2d_ & other) const
  {
    if (this->classid != other.classid) {
      return false;
    }
    if (this->classname != other.classname) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection2d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection2d_

// alias to use template instance with default allocator
using Detection2d =
  detect_mot::msg::Detection2d_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace detect_mot

#endif  // DETECT_MOT__MSG__DETECTION2D__STRUCT_HPP_
