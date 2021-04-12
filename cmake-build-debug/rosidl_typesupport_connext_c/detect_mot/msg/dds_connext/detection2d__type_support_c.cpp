// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from detect_mot:msg/Detection2d.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "detect_mot/msg/detection2d__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "detect_mot/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "detect_mot/msg/detection2d__struct.h"
#include "detect_mot/msg/detection2d__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "detect_mot/msg/dds_connext/Detection2d_Support.h"
#include "detect_mot/msg/dds_connext/Detection2d_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'classname'
#include "rosidl_generator_c/string.h"
// Member 'classname'
#include "rosidl_generator_c/string_functions.h"

// forward declare type support functions

static DDS_TypeCode *
_Detection2d__get_type_code()
{
  return detect_mot::msg::dds_::Detection2d_TypeSupport::get_typecode();
}

static bool
_Detection2d__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const detect_mot__msg__Detection2d * ros_message =
    static_cast<const detect_mot__msg__Detection2d *>(untyped_ros_message);
  detect_mot::msg::dds_::Detection2d_ * dds_message =
    static_cast<detect_mot::msg::dds_::Detection2d_ *>(untyped_dds_message);
  // Member name: classid
  {
    dds_message->classid_ = ros_message->classid;
  }
  // Member name: classname
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
    dds_message->classname_ = DDS_String_dup(str->data);
  }
  // Member name: bbox
  {
    size_t size = 4;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->bbox[i];
      dds_message->bbox_[i] = ros_i;
    }
  }
  return true;
}

static bool
_Detection2d__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const detect_mot::msg::dds_::Detection2d_ * dds_message =
    static_cast<const detect_mot::msg::dds_::Detection2d_ *>(untyped_dds_message);
  detect_mot__msg__Detection2d * ros_message =
    static_cast<detect_mot__msg__Detection2d *>(untyped_ros_message);
  // Member name: classid
  {
    ros_message->classid = dds_message->classid_;
  }
  // Member name: classname
  {
    if (!ros_message->classname.data) {
      rosidl_generator_c__String__init(&ros_message->classname);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->classname,
      dds_message->classname_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'classname'\n");
      return false;
    }
  }
  // Member name: bbox
  {
    DDS_Long size = 4;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->bbox[i];
      ros_i = dds_message->bbox_[i];
    }
  }
  return true;
}


static bool
_Detection2d__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const detect_mot__msg__Detection2d * ros_message =
    static_cast<const detect_mot__msg__Detection2d *>(untyped_ros_message);
  detect_mot::msg::dds_::Detection2d_ dds_message;
  if (!_Detection2d__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (detect_mot::msg::dds_::Detection2d_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call detect_mot::msg::dds_::Detection2d_Plugin_serialize_to_cdr_buffer()\n");
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
  if (detect_mot::msg::dds_::Detection2d_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    return false;
  }

  return true;
}

static bool
_Detection2d__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  detect_mot::msg::dds_::Detection2d_ * dds_message =
    detect_mot::msg::dds_::Detection2d_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (detect_mot::msg::dds_::Detection2d_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Detection2d__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (detect_mot::msg::dds_::Detection2d_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Detection2d__callbacks = {
  "detect_mot::msg",  // message_namespace
  "Detection2d",  // message_name
  _Detection2d__get_type_code,  // get_type_code
  _Detection2d__convert_ros_to_dds,  // convert_ros_to_dds
  _Detection2d__convert_dds_to_ros,  // convert_dds_to_ros
  _Detection2d__to_cdr_stream,  // to_cdr_stream
  _Detection2d__to_message  // to_message
};

static rosidl_message_type_support_t _Detection2d__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Detection2d__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  detect_mot, msg,
  Detection2d)()
{
  return &_Detection2d__type_support;
}

#if defined(__cplusplus)
}
#endif
