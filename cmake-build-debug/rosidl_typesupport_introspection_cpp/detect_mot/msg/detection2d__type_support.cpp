// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from detect_mot:msg/Detection2d.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "detect_mot/msg/detection2d__struct.hpp"
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

size_t size_function__Detection2d__bbox(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__Detection2d__bbox(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection2d__bbox(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Detection2d_message_member_array[3] = {
  {
    "classid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Detection2d, classid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classname",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Detection2d, classname),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(detect_mot::msg::Detection2d, bbox),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection2d__bbox,  // size() function pointer
    get_const_function__Detection2d__bbox,  // get_const(index) function pointer
    get_function__Detection2d__bbox,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Detection2d_message_members = {
  "detect_mot::msg",  // message namespace
  "Detection2d",  // message name
  3,  // number of fields
  sizeof(detect_mot::msg::Detection2d),
  Detection2d_message_member_array  // message members
};

static const rosidl_message_type_support_t Detection2d_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Detection2d_message_members,
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
get_message_type_support_handle<detect_mot::msg::Detection2d>()
{
  return &::detect_mot::msg::rosidl_typesupport_introspection_cpp::Detection2d_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, detect_mot, msg, Detection2d)() {
  return &::detect_mot::msg::rosidl_typesupport_introspection_cpp::Detection2d_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
