// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from detect_mot:msg/Objects.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "detect_mot/msg/objects__struct.hpp"
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

size_t size_function__Objects__objects_front(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<detect_mot::msg::Detection2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Objects__objects_front(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<detect_mot::msg::Detection2d> *>(untyped_member);
  return &member[index];
}

void * get_function__Objects__objects_front(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<detect_mot::msg::Detection2d> *>(untyped_member);
  return &member[index];
}

void resize_function__Objects__objects_front(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<detect_mot::msg::Detection2d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Objects__objects_back(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<detect_mot::msg::Detection2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Objects__objects_back(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<detect_mot::msg::Detection2d> *>(untyped_member);
  return &member[index];
}

void * get_function__Objects__objects_back(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<detect_mot::msg::Detection2d> *>(untyped_member);
  return &member[index];
}

void resize_function__Objects__objects_back(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<detect_mot::msg::Detection2d> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Objects_message_member_array[4] = {
  {
    "front_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Objects, front_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "back_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Objects, back_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects_front",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<detect_mot::msg::Detection2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Objects, objects_front),  // bytes offset in struct
    nullptr,  // default value
    size_function__Objects__objects_front,  // size() function pointer
    get_const_function__Objects__objects_front,  // get_const(index) function pointer
    get_function__Objects__objects_front,  // get(index) function pointer
    resize_function__Objects__objects_front  // resize(index) function pointer
  },
  {
    "objects_back",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<detect_mot::msg::Detection2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Objects, objects_back),  // bytes offset in struct
    nullptr,  // default value
    size_function__Objects__objects_back,  // size() function pointer
    get_const_function__Objects__objects_back,  // get_const(index) function pointer
    get_function__Objects__objects_back,  // get(index) function pointer
    resize_function__Objects__objects_back  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Objects_message_members = {
  "detect_mot::msg",  // message namespace
  "Objects",  // message name
  4,  // number of fields
  sizeof(detect_mot::msg::Objects),
  Objects_message_member_array  // message members
};

static const rosidl_message_type_support_t Objects_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Objects_message_members,
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
get_message_type_support_handle<detect_mot::msg::Objects>()
{
  return &::detect_mot::msg::rosidl_typesupport_introspection_cpp::Objects_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, detect_mot, msg, Objects)() {
  return &::detect_mot::msg::rosidl_typesupport_introspection_cpp::Objects_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
