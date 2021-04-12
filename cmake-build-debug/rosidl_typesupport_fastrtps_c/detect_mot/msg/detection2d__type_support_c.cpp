// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from detect_mot:msg/Detection2d.idl
// generated code does not contain a copyright notice
#include "detect_mot/msg/detection2d__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "detect_mot/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "detect_mot/msg/detection2d__struct.h"
#include "detect_mot/msg/detection2d__functions.h"
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

#include "rosidl_generator_c/string.h"  // classname
#include "rosidl_generator_c/string_functions.h"  // classname

// forward declare type support functions


using _Detection2d__ros_msg_type = detect_mot__msg__Detection2d;

static bool _Detection2d__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Detection2d__ros_msg_type * ros_message = static_cast<const _Detection2d__ros_msg_type *>(untyped_ros_message);
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

  // Field name: bbox
  {
    size_t size = 4;
    auto array_ptr = ros_message->bbox;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Detection2d__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Detection2d__ros_msg_type * ros_message = static_cast<_Detection2d__ros_msg_type *>(untyped_ros_message);
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

  // Field name: bbox
  {
    size_t size = 4;
    auto array_ptr = ros_message->bbox;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_detect_mot
size_t get_serialized_size_detect_mot__msg__Detection2d(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Detection2d__ros_msg_type * ros_message = static_cast<const _Detection2d__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

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
  // field.name bbox
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->bbox;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Detection2d__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_detect_mot__msg__Detection2d(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_detect_mot
size_t max_serialized_size_detect_mot__msg__Detection2d(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

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
  // member: bbox
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Detection2d__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_detect_mot__msg__Detection2d(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Detection2d = {
  "detect_mot::msg",
  "Detection2d",
  _Detection2d__cdr_serialize,
  _Detection2d__cdr_deserialize,
  _Detection2d__get_serialized_size,
  _Detection2d__max_serialized_size
};

static rosidl_message_type_support_t _Detection2d__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Detection2d,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, detect_mot, msg, Detection2d)() {
  return &_Detection2d__type_support;
}

#if defined(__cplusplus)
}
#endif
