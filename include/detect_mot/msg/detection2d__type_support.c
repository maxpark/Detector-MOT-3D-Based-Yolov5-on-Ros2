// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from detect_mot:msg/Detection2d.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "detect_mot/msg/detection2d__rosidl_typesupport_introspection_c.h"
#include "detect_mot/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "detect_mot/msg/detection2d__struct.h"


// Include directives for member types
// Member `classname`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Detection2d__rosidl_typesupport_introspection_c__Detection2d_message_member_array[3] = {
  {
    "classid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Detection2d, classid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Detection2d, classname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Detection2d, bbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Detection2d__rosidl_typesupport_introspection_c__Detection2d_message_members = {
  "detect_mot__msg",  // message namespace
  "Detection2d",  // message name
  3,  // number of fields
  sizeof(detect_mot__msg__Detection2d),
  Detection2d__rosidl_typesupport_introspection_c__Detection2d_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Detection2d__rosidl_typesupport_introspection_c__Detection2d_message_type_support_handle = {
  0,
  &Detection2d__rosidl_typesupport_introspection_c__Detection2d_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_detect_mot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detect_mot, msg, Detection2d)() {
  if (!Detection2d__rosidl_typesupport_introspection_c__Detection2d_message_type_support_handle.typesupport_identifier) {
    Detection2d__rosidl_typesupport_introspection_c__Detection2d_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Detection2d__rosidl_typesupport_introspection_c__Detection2d_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
