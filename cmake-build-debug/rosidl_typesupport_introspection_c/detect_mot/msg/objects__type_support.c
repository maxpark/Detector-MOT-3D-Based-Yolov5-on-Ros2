// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from detect_mot:msg/Objects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "detect_mot/msg/objects__rosidl_typesupport_introspection_c.h"
#include "detect_mot/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "detect_mot/msg/objects__struct.h"


// Include directives for member types
// Member `front_header`
// Member `back_header`
#include "std_msgs/msg/header.h"
// Member `front_header`
// Member `back_header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `objects_front`
// Member `objects_back`
#include "detect_mot/msg/detection2d.h"
// Member `objects_front`
// Member `objects_back`
#include "detect_mot/msg/detection2d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t Objects__rosidl_typesupport_introspection_c__size_function__Detection2d__objects_front(
  const void * untyped_member)
{
  const detect_mot__msg__Detection2d__Sequence * member =
    (const detect_mot__msg__Detection2d__Sequence *)(untyped_member);
  return member->size;
}

const void * Objects__rosidl_typesupport_introspection_c__get_const_function__Detection2d__objects_front(
  const void * untyped_member, size_t index)
{
  const detect_mot__msg__Detection2d__Sequence * member =
    (const detect_mot__msg__Detection2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Objects__rosidl_typesupport_introspection_c__get_function__Detection2d__objects_front(
  void * untyped_member, size_t index)
{
  detect_mot__msg__Detection2d__Sequence * member =
    (detect_mot__msg__Detection2d__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Objects__rosidl_typesupport_introspection_c__resize_function__Detection2d__objects_front(
  void * untyped_member, size_t size)
{
  detect_mot__msg__Detection2d__Sequence * member =
    (detect_mot__msg__Detection2d__Sequence *)(untyped_member);
  detect_mot__msg__Detection2d__Sequence__fini(member);
  return detect_mot__msg__Detection2d__Sequence__init(member, size);
}

size_t Objects__rosidl_typesupport_introspection_c__size_function__Detection2d__objects_back(
  const void * untyped_member)
{
  const detect_mot__msg__Detection2d__Sequence * member =
    (const detect_mot__msg__Detection2d__Sequence *)(untyped_member);
  return member->size;
}

const void * Objects__rosidl_typesupport_introspection_c__get_const_function__Detection2d__objects_back(
  const void * untyped_member, size_t index)
{
  const detect_mot__msg__Detection2d__Sequence * member =
    (const detect_mot__msg__Detection2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Objects__rosidl_typesupport_introspection_c__get_function__Detection2d__objects_back(
  void * untyped_member, size_t index)
{
  detect_mot__msg__Detection2d__Sequence * member =
    (detect_mot__msg__Detection2d__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Objects__rosidl_typesupport_introspection_c__resize_function__Detection2d__objects_back(
  void * untyped_member, size_t size)
{
  detect_mot__msg__Detection2d__Sequence * member =
    (detect_mot__msg__Detection2d__Sequence *)(untyped_member);
  detect_mot__msg__Detection2d__Sequence__fini(member);
  return detect_mot__msg__Detection2d__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[4] = {
  {
    "front_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Objects, front_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "back_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Objects, back_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects_front",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Objects, objects_front),  // bytes offset in struct
    NULL,  // default value
    Objects__rosidl_typesupport_introspection_c__size_function__Detection2d__objects_front,  // size() function pointer
    Objects__rosidl_typesupport_introspection_c__get_const_function__Detection2d__objects_front,  // get_const(index) function pointer
    Objects__rosidl_typesupport_introspection_c__get_function__Detection2d__objects_front,  // get(index) function pointer
    Objects__rosidl_typesupport_introspection_c__resize_function__Detection2d__objects_front  // resize(index) function pointer
  },
  {
    "objects_back",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Objects, objects_back),  // bytes offset in struct
    NULL,  // default value
    Objects__rosidl_typesupport_introspection_c__size_function__Detection2d__objects_back,  // size() function pointer
    Objects__rosidl_typesupport_introspection_c__get_const_function__Detection2d__objects_back,  // get_const(index) function pointer
    Objects__rosidl_typesupport_introspection_c__get_function__Detection2d__objects_back,  // get(index) function pointer
    Objects__rosidl_typesupport_introspection_c__resize_function__Detection2d__objects_back  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Objects__rosidl_typesupport_introspection_c__Objects_message_members = {
  "detect_mot__msg",  // message namespace
  "Objects",  // message name
  4,  // number of fields
  sizeof(detect_mot__msg__Objects),
  Objects__rosidl_typesupport_introspection_c__Objects_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle = {
  0,
  &Objects__rosidl_typesupport_introspection_c__Objects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_detect_mot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detect_mot, msg, Objects)() {
  Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detect_mot, msg, Detection2d)();
  Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detect_mot, msg, Detection2d)();
  if (!Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle.typesupport_identifier) {
    Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
