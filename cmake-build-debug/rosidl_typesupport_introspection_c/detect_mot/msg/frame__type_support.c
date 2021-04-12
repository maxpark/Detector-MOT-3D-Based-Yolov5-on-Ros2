// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "detect_mot/msg/frame__rosidl_typesupport_introspection_c.h"
#include "detect_mot/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "detect_mot/msg/frame__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `robot_pose`
#include "geometry_msgs/msg/pose2_d.h"
// Member `robot_pose`
#include "geometry_msgs/msg/pose2_d__rosidl_typesupport_introspection_c.h"
// Member `front_camera`
// Member `back_camera`
#include "detect_mot/msg/track.h"
// Member `front_camera`
// Member `back_camera`
#include "detect_mot/msg/track__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t Frame__rosidl_typesupport_introspection_c__size_function__Track__front_camera(
  const void * untyped_member)
{
  const detect_mot__msg__Track__Sequence * member =
    (const detect_mot__msg__Track__Sequence *)(untyped_member);
  return member->size;
}

const void * Frame__rosidl_typesupport_introspection_c__get_const_function__Track__front_camera(
  const void * untyped_member, size_t index)
{
  const detect_mot__msg__Track__Sequence * member =
    (const detect_mot__msg__Track__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Frame__rosidl_typesupport_introspection_c__get_function__Track__front_camera(
  void * untyped_member, size_t index)
{
  detect_mot__msg__Track__Sequence * member =
    (detect_mot__msg__Track__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Frame__rosidl_typesupport_introspection_c__resize_function__Track__front_camera(
  void * untyped_member, size_t size)
{
  detect_mot__msg__Track__Sequence * member =
    (detect_mot__msg__Track__Sequence *)(untyped_member);
  detect_mot__msg__Track__Sequence__fini(member);
  return detect_mot__msg__Track__Sequence__init(member, size);
}

size_t Frame__rosidl_typesupport_introspection_c__size_function__Track__back_camera(
  const void * untyped_member)
{
  const detect_mot__msg__Track__Sequence * member =
    (const detect_mot__msg__Track__Sequence *)(untyped_member);
  return member->size;
}

const void * Frame__rosidl_typesupport_introspection_c__get_const_function__Track__back_camera(
  const void * untyped_member, size_t index)
{
  const detect_mot__msg__Track__Sequence * member =
    (const detect_mot__msg__Track__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Frame__rosidl_typesupport_introspection_c__get_function__Track__back_camera(
  void * untyped_member, size_t index)
{
  detect_mot__msg__Track__Sequence * member =
    (detect_mot__msg__Track__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Frame__rosidl_typesupport_introspection_c__resize_function__Track__back_camera(
  void * untyped_member, size_t size)
{
  detect_mot__msg__Track__Sequence * member =
    (detect_mot__msg__Track__Sequence *)(untyped_member);
  detect_mot__msg__Track__Sequence__fini(member);
  return detect_mot__msg__Track__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Frame__rosidl_typesupport_introspection_c__Frame_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Frame, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "numof3d_front",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Frame, numof3d_front),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "numof3d_back",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Frame, numof3d_back),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Frame, robot_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_camera",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Frame, front_camera),  // bytes offset in struct
    NULL,  // default value
    Frame__rosidl_typesupport_introspection_c__size_function__Track__front_camera,  // size() function pointer
    Frame__rosidl_typesupport_introspection_c__get_const_function__Track__front_camera,  // get_const(index) function pointer
    Frame__rosidl_typesupport_introspection_c__get_function__Track__front_camera,  // get(index) function pointer
    Frame__rosidl_typesupport_introspection_c__resize_function__Track__front_camera  // resize(index) function pointer
  },
  {
    "back_camera",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Frame, back_camera),  // bytes offset in struct
    NULL,  // default value
    Frame__rosidl_typesupport_introspection_c__size_function__Track__back_camera,  // size() function pointer
    Frame__rosidl_typesupport_introspection_c__get_const_function__Track__back_camera,  // get_const(index) function pointer
    Frame__rosidl_typesupport_introspection_c__get_function__Track__back_camera,  // get(index) function pointer
    Frame__rosidl_typesupport_introspection_c__resize_function__Track__back_camera  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Frame__rosidl_typesupport_introspection_c__Frame_message_members = {
  "detect_mot__msg",  // message namespace
  "Frame",  // message name
  6,  // number of fields
  sizeof(detect_mot__msg__Frame),
  Frame__rosidl_typesupport_introspection_c__Frame_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle = {
  0,
  &Frame__rosidl_typesupport_introspection_c__Frame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_detect_mot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detect_mot, msg, Frame)() {
  Frame__rosidl_typesupport_introspection_c__Frame_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Frame__rosidl_typesupport_introspection_c__Frame_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  Frame__rosidl_typesupport_introspection_c__Frame_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detect_mot, msg, Track)();
  Frame__rosidl_typesupport_introspection_c__Frame_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detect_mot, msg, Track)();
  if (!Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle.typesupport_identifier) {
    Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
