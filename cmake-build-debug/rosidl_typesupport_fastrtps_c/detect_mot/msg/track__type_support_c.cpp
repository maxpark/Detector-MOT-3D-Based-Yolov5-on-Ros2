// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from detect_mot:msg/Track.idl
// generated code does not contain a copyright notice
#include "detect_mot/msg/track__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "detect_mot/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "detect_mot/msg/track__struct.h"
#include "detect_mot/msg/track__functions.h"
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

#include "geometry_msgs/msg/point32__functions.h"  // pointcloud, position, position_e, size, trace, velocity, velocity_e
#include "rosidl_generator_c/string.h"  // classname
#include "rosidl_generator_c/string_functions.h"  // classname

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_detect_mot
size_t get_serialized_size_geometry_msgs__msg__Point32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_detect_mot
size_t max_serialized_size_geometry_msgs__msg__Point32(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_detect_mot
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32)();


using _Track__ros_msg_type = detect_mot__msg__Track;

static bool _Track__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Track__ros_msg_type * ros_message = static_cast<const _Track__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: classid
  {
    cdr << ros_message->classid;
  }

  // Field name: classname
  {
    const rosidl_generator_c__String * str = &ros_message->classname;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: age
  {
    cdr << ros_message->age;
  }

  // Field name: information3d
  {
    cdr << (ros_message->information3d ? true : false);
  }

  // Field name: bbox
  {
    size_t size = 4;
    auto array_ptr = ros_message->bbox;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position, cdr))
    {
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity, cdr))
    {
      return false;
    }
  }

  // Field name: size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->size, cdr))
    {
      return false;
    }
  }

  // Field name: position_e
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position_e, cdr))
    {
      return false;
    }
  }

  // Field name: velocity_e
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity_e, cdr))
    {
      return false;
    }
  }

  // Field name: pointcloud
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    size_t size = ros_message->pointcloud.size;
    auto array_ptr = ros_message->pointcloud.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: trace
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    size_t size = ros_message->trace.size;
    auto array_ptr = ros_message->trace.data;
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

static bool _Track__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Track__ros_msg_type * ros_message = static_cast<_Track__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: classid
  {
    cdr >> ros_message->classid;
  }

  // Field name: classname
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->classname.data) {
      rosidl_generator_c__String__init(&ros_message->classname);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->classname,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'classname'\n");
      return false;
    }
  }

  // Field name: age
  {
    cdr >> ros_message->age;
  }

  // Field name: information3d
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->information3d = tmp ? true : false;
  }

  // Field name: bbox
  {
    size_t size = 4;
    auto array_ptr = ros_message->bbox;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position))
    {
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity))
    {
      return false;
    }
  }

  // Field name: size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->size))
    {
      return false;
    }
  }

  // Field name: position_e
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position_e))
    {
      return false;
    }
  }

  // Field name: velocity_e
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity_e))
    {
      return false;
    }
  }

  // Field name: pointcloud
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pointcloud.data) {
      geometry_msgs__msg__Point32__Sequence__fini(&ros_message->pointcloud);
    }
    if (!geometry_msgs__msg__Point32__Sequence__init(&ros_message->pointcloud, size)) {
      return "failed to create array for field 'pointcloud'";
    }
    auto array_ptr = ros_message->pointcloud.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: trace
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->trace.data) {
      geometry_msgs__msg__Point32__Sequence__fini(&ros_message->trace);
    }
    if (!geometry_msgs__msg__Point32__Sequence__init(&ros_message->trace, size)) {
      return "failed to create array for field 'trace'";
    }
    auto array_ptr = ros_message->trace.data;
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
size_t get_serialized_size_detect_mot__msg__Track(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Track__ros_msg_type * ros_message = static_cast<const _Track__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classid
  {
    size_t item_size = sizeof(ros_message->classid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->classname.size + 1);
  // field.name age
  {
    size_t item_size = sizeof(ros_message->age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name information3d
  {
    size_t item_size = sizeof(ros_message->information3d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bbox
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->bbox;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position

  current_alignment += get_serialized_size_geometry_msgs__msg__Point32(
    &(ros_message->position), current_alignment);
  // field.name velocity

  current_alignment += get_serialized_size_geometry_msgs__msg__Point32(
    &(ros_message->velocity), current_alignment);
  // field.name size

  current_alignment += get_serialized_size_geometry_msgs__msg__Point32(
    &(ros_message->size), current_alignment);
  // field.name position_e

  current_alignment += get_serialized_size_geometry_msgs__msg__Point32(
    &(ros_message->position_e), current_alignment);
  // field.name velocity_e

  current_alignment += get_serialized_size_geometry_msgs__msg__Point32(
    &(ros_message->velocity_e), current_alignment);
  // field.name pointcloud
  {
    size_t array_size = ros_message->pointcloud.size;
    auto array_ptr = ros_message->pointcloud.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point32(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name trace
  {
    size_t array_size = ros_message->trace.size;
    auto array_ptr = ros_message->trace.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point32(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Track__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_detect_mot__msg__Track(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_detect_mot
size_t max_serialized_size_detect_mot__msg__Track(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: classid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: classname
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: information3d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bbox
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point32(
        full_bounded, current_alignment);
    }
  }
  // member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point32(
        full_bounded, current_alignment);
    }
  }
  // member: size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point32(
        full_bounded, current_alignment);
    }
  }
  // member: position_e
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point32(
        full_bounded, current_alignment);
    }
  }
  // member: velocity_e
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point32(
        full_bounded, current_alignment);
    }
  }
  // member: pointcloud
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point32(
        full_bounded, current_alignment);
    }
  }
  // member: trace
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point32(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Track__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_detect_mot__msg__Track(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Track = {
  "detect_mot::msg",
  "Track",
  _Track__cdr_serialize,
  _Track__cdr_deserialize,
  _Track__get_serialized_size,
  _Track__max_serialized_size
};

static rosidl_message_type_support_t _Track__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Track,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, detect_mot, msg, Track)() {
  return &_Track__type_support;
}

#if defined(__cplusplus)
}
#endif
