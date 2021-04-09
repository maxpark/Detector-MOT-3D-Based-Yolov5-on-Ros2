// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from detect_mot:msg/Track.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "detect_mot/msg/track__rosidl_typesupport_introspection_c.h"
#include "detect_mot/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "detect_mot/msg/track__struct.h"


// Include directives for member types
// Member `classname`
#include "rosidl_generator_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `size`
// Member `position_e`
// Member `velocity_e`
// Member `pointcloud`
// Member `trace`
#include "geometry_msgs/msg/point32.h"
// Member `position`
// Member `velocity`
// Member `size`
// Member `position_e`
// Member `velocity_e`
// Member `pointcloud`
// Member `trace`
#include "geometry_msgs/msg/point32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t Track__rosidl_typesupport_introspection_c__size_function__Point32__pointcloud(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return member->size;
}

const void * Track__rosidl_typesupport_introspection_c__get_const_function__Point32__pointcloud(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Track__rosidl_typesupport_introspection_c__get_function__Point32__pointcloud(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Track__rosidl_typesupport_introspection_c__resize_function__Point32__pointcloud(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  geometry_msgs__msg__Point32__Sequence__fini(member);
  return geometry_msgs__msg__Point32__Sequence__init(member, size);
}

size_t Track__rosidl_typesupport_introspection_c__size_function__Point32__trace(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return member->size;
}

const void * Track__rosidl_typesupport_introspection_c__get_const_function__Point32__trace(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Track__rosidl_typesupport_introspection_c__get_function__Point32__trace(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Track__rosidl_typesupport_introspection_c__resize_function__Point32__trace(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  geometry_msgs__msg__Point32__Sequence__fini(member);
  return geometry_msgs__msg__Point32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Track__rosidl_typesupport_introspection_c__Track_message_member_array[13] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, classid),  // bytes offset in struct
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
    offsetof(detect_mot__msg__Track, classname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "information3d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, information3d),  // bytes offset in struct
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
    offsetof(detect_mot__msg__Track, bbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_e",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, position_e),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_e",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, velocity_e),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pointcloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, pointcloud),  // bytes offset in struct
    NULL,  // default value
    Track__rosidl_typesupport_introspection_c__size_function__Point32__pointcloud,  // size() function pointer
    Track__rosidl_typesupport_introspection_c__get_const_function__Point32__pointcloud,  // get_const(index) function pointer
    Track__rosidl_typesupport_introspection_c__get_function__Point32__pointcloud,  // get(index) function pointer
    Track__rosidl_typesupport_introspection_c__resize_function__Point32__pointcloud  // resize(index) function pointer
  },
  {
    "trace",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detect_mot__msg__Track, trace),  // bytes offset in struct
    NULL,  // default value
    Track__rosidl_typesupport_introspection_c__size_function__Point32__trace,  // size() function pointer
    Track__rosidl_typesupport_introspection_c__get_const_function__Point32__trace,  // get_const(index) function pointer
    Track__rosidl_typesupport_introspection_c__get_function__Point32__trace,  // get(index) function pointer
    Track__rosidl_typesupport_introspection_c__resize_function__Point32__trace  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Track__rosidl_typesupport_introspection_c__Track_message_members = {
  "detect_mot__msg",  // message namespace
  "Track",  // message name
  13,  // number of fields
  sizeof(detect_mot__msg__Track),
  Track__rosidl_typesupport_introspection_c__Track_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle = {
  0,
  &Track__rosidl_typesupport_introspection_c__Track_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_detect_mot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detect_mot, msg, Track)() {
  Track__rosidl_typesupport_introspection_c__Track_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  Track__rosidl_typesupport_introspection_c__Track_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  Track__rosidl_typesupport_introspection_c__Track_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  Track__rosidl_typesupport_introspection_c__Track_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  Track__rosidl_typesupport_introspection_c__Track_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  Track__rosidl_typesupport_introspection_c__Track_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  Track__rosidl_typesupport_introspection_c__Track_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle.typesupport_identifier) {
    Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
