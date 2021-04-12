// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from detect_mot:msg/Track.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "detect_mot/msg/track__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "detect_mot/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "detect_mot/msg/track__struct.h"
#include "detect_mot/msg/track__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "detect_mot/msg/dds_connext/Track_Support.h"
#include "detect_mot/msg/dds_connext/Track_Plugin.h"

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
// Member 'position'
// Member 'velocity'
// Member 'size'
// Member 'position_e'
// Member 'velocity_e'
// Member 'pointcloud'
// Member 'trace'
#include "geometry_msgs/msg/point32__struct.h"
// Member 'position'
// Member 'velocity'
// Member 'size'
// Member 'position_e'
// Member 'velocity_e'
// Member 'pointcloud'
// Member 'trace'
#include "geometry_msgs/msg/point32__functions.h"

// forward declare type support functions
// Member 'position'
// Member 'velocity'
// Member 'size'
// Member 'position_e'
// Member 'velocity_e'
// Member 'pointcloud'
// Member 'trace'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_detect_mot
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  geometry_msgs, msg,
  Point32)();

static DDS_TypeCode *
_Track__get_type_code()
{
  return detect_mot::msg::dds_::Track_TypeSupport::get_typecode();
}

static bool
_Track__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const detect_mot__msg__Track * ros_message =
    static_cast<const detect_mot__msg__Track *>(untyped_ros_message);
  detect_mot::msg::dds_::Track_ * dds_message =
    static_cast<detect_mot::msg::dds_::Track_ *>(untyped_dds_message);
  // Member name: id
  {
    dds_message->id_ = ros_message->id;
  }
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
  // Member name: age
  {
    dds_message->age_ = ros_message->age;
  }
  // Member name: information3d
  {
    dds_message->information3d_ = ros_message->information3d;
  }
  // Member name: bbox
  {
    size_t size = 4;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->bbox[i];
      dds_message->bbox_[i] = ros_i;
    }
  }
  // Member name: position
  {
    const message_type_support_callbacks_t * geometry_msgs__msg__Point32__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, geometry_msgs, msg, Point32
      )()->data);
    if (!geometry_msgs__msg__Point32__callbacks->convert_ros_to_dds(
        &ros_message->position, &dds_message->position_))
    {
      return false;
    }
  }
  // Member name: velocity
  {
    const message_type_support_callbacks_t * geometry_msgs__msg__Point32__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, geometry_msgs, msg, Point32
      )()->data);
    if (!geometry_msgs__msg__Point32__callbacks->convert_ros_to_dds(
        &ros_message->velocity, &dds_message->velocity_))
    {
      return false;
    }
  }
  // Member name: size
  {
    const message_type_support_callbacks_t * geometry_msgs__msg__Point32__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, geometry_msgs, msg, Point32
      )()->data);
    if (!geometry_msgs__msg__Point32__callbacks->convert_ros_to_dds(
        &ros_message->size, &dds_message->size_))
    {
      return false;
    }
  }
  // Member name: position_e
  {
    const message_type_support_callbacks_t * geometry_msgs__msg__Point32__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, geometry_msgs, msg, Point32
      )()->data);
    if (!geometry_msgs__msg__Point32__callbacks->convert_ros_to_dds(
        &ros_message->position_e, &dds_message->position_e_))
    {
      return false;
    }
  }
  // Member name: velocity_e
  {
    const message_type_support_callbacks_t * geometry_msgs__msg__Point32__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, geometry_msgs, msg, Point32
      )()->data);
    if (!geometry_msgs__msg__Point32__callbacks->convert_ros_to_dds(
        &ros_message->velocity_e, &dds_message->velocity_e_))
    {
      return false;
    }
  }
  // Member name: pointcloud
  {
    const message_type_support_callbacks_t * geometry_msgs__msg__Point32__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, geometry_msgs, msg, Point32
      )()->data);
    size_t size = ros_message->pointcloud.size;
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->pointcloud_.maximum()) {
      if (!dds_message->pointcloud_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->pointcloud_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->pointcloud.data[i];
      if (!geometry_msgs__msg__Point32__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->pointcloud_[i]))
      {
        return false;
      }
    }
  }
  // Member name: trace
  {
    const message_type_support_callbacks_t * geometry_msgs__msg__Point32__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, geometry_msgs, msg, Point32
      )()->data);
    size_t size = ros_message->trace.size;
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->trace_.maximum()) {
      if (!dds_message->trace_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->trace_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->trace.data[i];
      if (!geometry_msgs__msg__Point32__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->trace_[i]))
      {
        return false;
      }
    }
  }
  return true;
}

static bool
_Track__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const detect_mot::msg::dds_::Track_ * dds_message =
    static_cast<const detect_mot::msg::dds_::Track_ *>(untyped_dds_message);
  detect_mot__msg__Track * ros_message =
    static_cast<detect_mot__msg__Track *>(untyped_ros_message);
  // Member name: id
  {
    ros_message->id = dds_message->id_;
  }
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
  // Member name: age
  {
    ros_message->age = dds_message->age_;
  }
  // Member name: information3d
  {
    ros_message->information3d = dds_message->information3d_ == static_cast<DDS_Boolean>(true);
  }
  // Member name: bbox
  {
    DDS_Long size = 4;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->bbox[i];
      ros_i = dds_message->bbox_[i];
    }
  }
  // Member name: position
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      geometry_msgs, msg,
      Point32)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->position_, &ros_message->position);
  }
  // Member name: velocity
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      geometry_msgs, msg,
      Point32)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->velocity_, &ros_message->velocity);
  }
  // Member name: size
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      geometry_msgs, msg,
      Point32)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->size_, &ros_message->size);
  }
  // Member name: position_e
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      geometry_msgs, msg,
      Point32)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->position_e_, &ros_message->position_e);
  }
  // Member name: velocity_e
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      geometry_msgs, msg,
      Point32)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->velocity_e_, &ros_message->velocity_e);
  }
  // Member name: pointcloud
  {
    DDS_Long size = dds_message->pointcloud_.length();
    if (ros_message->pointcloud.data) {
      geometry_msgs__msg__Point32__Sequence__fini(&ros_message->pointcloud);
    }
    if (!geometry_msgs__msg__Point32__Sequence__init(&ros_message->pointcloud, size)) {
      return "failed to create array for field 'pointcloud'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->pointcloud.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        geometry_msgs, msg,
        Point32)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->pointcloud_[i], &ros_i);
    }
  }
  // Member name: trace
  {
    DDS_Long size = dds_message->trace_.length();
    if (ros_message->trace.data) {
      geometry_msgs__msg__Point32__Sequence__fini(&ros_message->trace);
    }
    if (!geometry_msgs__msg__Point32__Sequence__init(&ros_message->trace, size)) {
      return "failed to create array for field 'trace'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->trace.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        geometry_msgs, msg,
        Point32)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->trace_[i], &ros_i);
    }
  }
  return true;
}


static bool
_Track__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const detect_mot__msg__Track * ros_message =
    static_cast<const detect_mot__msg__Track *>(untyped_ros_message);
  detect_mot::msg::dds_::Track_ dds_message;
  if (!_Track__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (detect_mot::msg::dds_::Track_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call detect_mot::msg::dds_::Track_Plugin_serialize_to_cdr_buffer()\n");
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
  if (detect_mot::msg::dds_::Track_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    return false;
  }

  return true;
}

static bool
_Track__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  detect_mot::msg::dds_::Track_ * dds_message =
    detect_mot::msg::dds_::Track_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (detect_mot::msg::dds_::Track_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Track__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (detect_mot::msg::dds_::Track_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Track__callbacks = {
  "detect_mot::msg",  // message_namespace
  "Track",  // message_name
  _Track__get_type_code,  // get_type_code
  _Track__convert_ros_to_dds,  // convert_ros_to_dds
  _Track__convert_dds_to_ros,  // convert_dds_to_ros
  _Track__to_cdr_stream,  // to_cdr_stream
  _Track__to_message  // to_message
};

static rosidl_message_type_support_t _Track__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Track__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  detect_mot, msg,
  Track)()
{
  return &_Track__type_support;
}

#if defined(__cplusplus)
}
#endif
