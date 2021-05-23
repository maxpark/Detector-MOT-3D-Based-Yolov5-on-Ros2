// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from detect_mot:msg/Objects.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "detect_mot/msg/objects__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "detect_mot/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "detect_mot/msg/objects__struct.h"
#include "detect_mot/msg/objects__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "detect_mot/msg/dds_connext/Objects_Support.h"
#include "detect_mot/msg/dds_connext/Objects_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'front_header'
// Member 'back_header'
#include "std_msgs/msg/header__struct.h"
// Member 'front_header'
// Member 'back_header'
#include "std_msgs/msg/header__functions.h"
// Member 'objects_front'
// Member 'objects_back'
#include "detect_mot/msg/detection2d__struct.h"
// Member 'objects_front'
// Member 'objects_back'
#include "detect_mot/msg/detection2d__functions.h"

// forward declare type support functions
// Member 'front_header'
// Member 'back_header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_detect_mot
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();
// Member 'objects_front'
// Member 'objects_back'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  detect_mot, msg,
  Detection2d)();

static DDS_TypeCode *
_Objects__get_type_code()
{
  return detect_mot::msg::dds_::Objects_TypeSupport::get_typecode();
}

static bool
_Objects__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const detect_mot__msg__Objects * ros_message =
    static_cast<const detect_mot__msg__Objects *>(untyped_ros_message);
  detect_mot::msg::dds_::Objects_ * dds_message =
    static_cast<detect_mot::msg::dds_::Objects_ *>(untyped_dds_message);
  // Member name: front_header
  {
    const message_type_support_callbacks_t * std_msgs__msg__Header__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, std_msgs, msg, Header
      )()->data);
    if (!std_msgs__msg__Header__callbacks->convert_ros_to_dds(
        &ros_message->front_header, &dds_message->front_header_))
    {
      return false;
    }
  }
  // Member name: back_header
  {
    const message_type_support_callbacks_t * std_msgs__msg__Header__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, std_msgs, msg, Header
      )()->data);
    if (!std_msgs__msg__Header__callbacks->convert_ros_to_dds(
        &ros_message->back_header, &dds_message->back_header_))
    {
      return false;
    }
  }
  // Member name: objects_front
  {
    const message_type_support_callbacks_t * detect_mot__msg__Detection2d__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, detect_mot, msg, Detection2d
      )()->data);
    size_t size = ros_message->objects_front.size;
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->objects_front_.maximum()) {
      if (!dds_message->objects_front_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->objects_front_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->objects_front.data[i];
      if (!detect_mot__msg__Detection2d__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->objects_front_[i]))
      {
        return false;
      }
    }
  }
  // Member name: objects_back
  {
    const message_type_support_callbacks_t * detect_mot__msg__Detection2d__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, detect_mot, msg, Detection2d
      )()->data);
    size_t size = ros_message->objects_back.size;
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->objects_back_.maximum()) {
      if (!dds_message->objects_back_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->objects_back_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->objects_back.data[i];
      if (!detect_mot__msg__Detection2d__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->objects_back_[i]))
      {
        return false;
      }
    }
  }
  return true;
}

static bool
_Objects__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const detect_mot::msg::dds_::Objects_ * dds_message =
    static_cast<const detect_mot::msg::dds_::Objects_ *>(untyped_dds_message);
  detect_mot__msg__Objects * ros_message =
    static_cast<detect_mot__msg__Objects *>(untyped_ros_message);
  // Member name: front_header
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      std_msgs, msg,
      Header)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->front_header_, &ros_message->front_header);
  }
  // Member name: back_header
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      std_msgs, msg,
      Header)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->back_header_, &ros_message->back_header);
  }
  // Member name: objects_front
  {
    DDS_Long size = dds_message->objects_front_.length();
    if (ros_message->objects_front.data) {
      detect_mot__msg__Detection2d__Sequence__fini(&ros_message->objects_front);
    }
    if (!detect_mot__msg__Detection2d__Sequence__init(&ros_message->objects_front, size)) {
      return "failed to create array for field 'objects_front'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->objects_front.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        detect_mot, msg,
        Detection2d)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->objects_front_[i], &ros_i);
    }
  }
  // Member name: objects_back
  {
    DDS_Long size = dds_message->objects_back_.length();
    if (ros_message->objects_back.data) {
      detect_mot__msg__Detection2d__Sequence__fini(&ros_message->objects_back);
    }
    if (!detect_mot__msg__Detection2d__Sequence__init(&ros_message->objects_back, size)) {
      return "failed to create array for field 'objects_back'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->objects_back.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        detect_mot, msg,
        Detection2d)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->objects_back_[i], &ros_i);
    }
  }
  return true;
}


static bool
_Objects__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const detect_mot__msg__Objects * ros_message =
    static_cast<const detect_mot__msg__Objects *>(untyped_ros_message);
  detect_mot::msg::dds_::Objects_ dds_message;
  if (!_Objects__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (detect_mot::msg::dds_::Objects_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call detect_mot::msg::dds_::Objects_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (detect_mot::msg::dds_::Objects_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    return false;
  }

  return true;
}

static bool
_Objects__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  detect_mot::msg::dds_::Objects_ * dds_message =
    detect_mot::msg::dds_::Objects_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (detect_mot::msg::dds_::Objects_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Objects__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (detect_mot::msg::dds_::Objects_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Objects__callbacks = {
  "detect_mot::msg",  // message_namespace
  "Objects",  // message_name
  _Objects__get_type_code,  // get_type_code
  _Objects__convert_ros_to_dds,  // convert_ros_to_dds
  _Objects__convert_dds_to_ros,  // convert_dds_to_ros
  _Objects__to_cdr_stream,  // to_cdr_stream
  _Objects__to_message  // to_message
};

static rosidl_message_type_support_t _Objects__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Objects__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  detect_mot, msg,
  Objects)()
{
  return &_Objects__type_support;
}

#if defined(__cplusplus)
}
#endif
