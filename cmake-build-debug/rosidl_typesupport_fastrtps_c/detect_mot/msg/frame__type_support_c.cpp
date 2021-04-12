// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice
#include "detect_mot/msg/frame__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "detect_mot/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "detect_mot/msg/frame__struct.h"
#include "detect_mot/msg/frame__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "detect_mot/msg/track__functions.h"  // back_camera, front_camera
#include "geometry_msgs/msg/pose2_d__functions.h"  // robot_pose
#include "std_msgs/msg/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_detect_mot__msg__Track(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_detect_mot__msg__Track(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, detect_mot, msg, Track)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_detect_mot
size_t get_serialized_size_geometry_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_detect_mot
size_t max_serialized_size_geometry_msgs__msg__Pose2D(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_detect_mot
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_detect_mot
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_detect_mot
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_detect_mot
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Frame__ros_msg_type = detect_mot__msg__Frame;

static bool _Frame__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Frame__ros_msg_type * ros_message = static_cast<const _Frame__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: numof3d_front
  {
    cdr << ros_message->numof3d_front;
  }

  // Field name: numof3d_back
  {
    cdr << ros_message->numof3d_back;
  }

  // Field name: robot_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robot_pose, cdr))
    {
      return false;
    }
  }

  // Field name: front_camera
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, detect_mot, msg, Track
      )()->data);
    size_t size = ros_message->front_camera.size;
    auto array_ptr = ros_message->front_camera.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: back_camera
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, detect_mot, msg, Track
      )()->data);
    size_t size = ros_message->back_camera.size;
    auto array_ptr = ros_message->back_camera.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Frame__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Frame__ros_msg_type * ros_message = static_cast<_Frame__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: numof3d_front
  {
    cdr >> ros_message->numof3d_front;
  }

  // Field name: numof3d_back
  {
    cdr >> ros_message->numof3d_back;
  }

  // Field name: robot_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robot_pose))
    {
      return false;
    }
  }

  // Field name: front_camera
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, detect_mot, msg, Track
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->front_camera.data) {
      detect_mot__msg__Track__Sequence__fini(&ros_message->front_camera);
    }
    if (!detect_mot__msg__Track__Sequence__init(&ros_message->front_camera, size)) {
      return "failed to create array for field 'front_camera'";
    }
    auto array_ptr = ros_message->front_camera.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: back_camera
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, detect_mot, msg, Track
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->back_camera.data) {
      detect_mot__msg__Track__Sequence__fini(&ros_message->back_camera);
    }
    if (!detect_mot__msg__Track__Sequence__init(&ros_message->back_camera, size)) {
      return "failed to create array for field 'back_camera'";
    }
    auto array_ptr = ros_message->back_camera.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_detect_mot
size_t get_serialized_size_detect_mot__msg__Frame(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Frame__ros_msg_type * ros_message = static_cast<const _Frame__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name numof3d_front
  {
    size_t item_size = sizeof(ros_message->numof3d_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name numof3d_back
  {
    size_t item_size = sizeof(ros_message->numof3d_back);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose2D(
    &(ros_message->robot_pose), current_alignment);
  // field.name front_camera
  {
    size_t array_size = ros_message->front_camera.size;
    auto array_ptr = ros_message->front_camera.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_detect_mot__msg__Track(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name back_camera
  {
    size_t array_size = ros_message->back_camera.size;
    auto array_ptr = ros_message->back_camera.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_detect_mot__msg__Track(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Frame__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_detect_mot__msg__Frame(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_detect_mot
size_t max_serialized_size_detect_mot__msg__Frame(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: numof3d_front
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: numof3d_back
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose2D(
        full_bounded, current_alignment);
    }
  }
  // member: front_camera
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_detect_mot__msg__Track(
        full_bounded, current_alignment);
    }
  }
  // member: back_camera
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_detect_mot__msg__Track(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Frame__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_detect_mot__msg__Frame(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Frame = {
  "detect_mot::msg",
  "Frame",
  _Frame__cdr_serialize,
  _Frame__cdr_deserialize,
  _Frame__get_serialized_size,
  _Frame__max_serialized_size
};

static rosidl_message_type_support_t _Frame__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Frame,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, detect_mot, msg, Frame)() {
  return &_Frame__type_support;
}

#if defined(__cplusplus)
}
#endif
