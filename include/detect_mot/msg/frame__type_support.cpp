// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "detect_mot/msg/frame__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace detect_mot
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__Frame__front_camera(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<detect_mot::msg::Track> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Frame__front_camera(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<detect_mot::msg::Track> *>(untyped_member);
  return &member[index];
}

void * get_function__Frame__front_camera(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<detect_mot::msg::Track> *>(untyped_member);
  return &member[index];
}

void resize_function__Frame__front_camera(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<detect_mot::msg::Track> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Frame__back_camera(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<detect_mot::msg::Track> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Frame__back_camera(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<detect_mot::msg::Track> *>(untyped_member);
  return &member[index];
}

void * get_function__Frame__back_camera(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<detect_mot::msg::Track> *>(untyped_member);
  return &member[index];
}

void resize_function__Frame__back_camera(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<detect_mot::msg::Track> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Frame_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Frame, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "numof3d_front",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Frame, numof3d_front),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "numof3d_back",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Frame, numof3d_back),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Frame, robot_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_camera",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<detect_mot::msg::Track>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Frame, front_camera),  // bytes offset in struct
    nullptr,  // default value
    size_function__Frame__front_camera,  // size() function pointer
    get_const_function__Frame__front_camera,  // get_const(index) function pointer
    get_function__Frame__front_camera,  // get(index) function pointer
    resize_function__Frame__front_camera  // resize(index) function pointer
  },
  {
    "back_camera",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<detect_mot::msg::Track>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Frame, back_camera),  // bytes offset in struct
    nullptr,  // default value
    size_function__Frame__back_camera,  // size() function pointer
    get_const_function__Frame__back_camera,  // get_const(index) function pointer
    get_function__Frame__back_camera,  // get(index) function pointer
    resize_function__Frame__back_camera  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Frame_message_members = {
  "detect_mot::msg",  // message namespace
  "Frame",  // message name
  6,  // number of fields
  sizeof(detect_mot::msg::Frame),
  Frame_message_member_array  // message members
};

static const rosidl_message_type_support_t Frame_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Frame_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace detect_mot


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<detect_mot::msg::Frame>()
{
  return &::detect_mot::msg::rosidl_typesupport_introspection_cpp::Frame_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, detect_mot, msg, Frame)() {
  return &::detect_mot::msg::rosidl_typesupport_introspection_cpp::Frame_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
