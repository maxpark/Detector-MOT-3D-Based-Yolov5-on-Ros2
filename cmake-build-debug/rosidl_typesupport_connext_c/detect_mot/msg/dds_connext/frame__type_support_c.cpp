// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "detect_mot/msg/frame__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "detect_mot/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "detect_mot/msg/frame__struct.h"
#include "detect_mot/msg/frame__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "detect_mot/msg/dds_connext/Frame_Support.h"
#include "detect_mot/msg/dds_connext/Frame_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'header'
#include "std_msgs/msg/header__functions.h"
// Member 'robot_pose'
#include "geometry_msgs/msg/pose2_d__struct.h"
// Member 'robot_pose'
#include "geometry_msgs/msg/pose2_d__functions.h"
// Member 'front_camera'
// Member 'back_camera'
#include "detect_mot/msg/track__struct.h"
// Member 'front_camera'
// Member 'back_camera'
#include "detect_mot/msg/track__functions.h"

// forward declare type support functions
// Member 'header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_detect_mot
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();
// Member 'robot_pose'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_detect_mot
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  geometry_msgs, msg,
  Pose2D)();
// Member 'front_camera'
// Member 'back_camera'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  detect_mot, msg,
  Track)();

static DDS_TypeCode *
_Frame__get_type_code()
{
  return detect_mot::msg::dds_::Frame_TypeSupport::get_typecode();
}

static bool
_Frame__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const detect_mot__msg__Frame * ros_message =
    static_cast<const detect_mot__msg__Frame *>(untyped_ros_message);
  detect_mot::msg::dds_::Frame_ * dds_message =
    static_cast<detect_mot::msg::dds_::Frame_ *>(untyped_dds_message);
  // Member name: header
  {
    const message_type_support_callbacks_t * std_msgs__msg__Header__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, std_msgs, msg, Header
      )()->data);
    if (!std_msgs__msg__Header__callbacks->convert_ros_to_dds(
        &ros_message->header, &dds_message->header_))
    {
      return false;
    }
  }
  // Member name: numof3d_front
  {
    dds_message->numof3d_front_ = ros_message->numof3d_front;
  }
  // Member name: numof3d_back
  {
    dds_message->numof3d_back_ = ros_message->numof3d_back;
  }
  // Member name: robot_pose
  {
    const message_type_support_callbacks_t * geometry_msgs__msg__Pose2D__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!geometry_msgs__msg__Pose2D__callbacks->convert_ros_to_dds(
        &ros_message->robot_pose, &dds_message->robot_pose_))
    {
      return false;
    }
  }
  // Member name: front_camera
  {
    const message_type_support_callbacks_t * detect_mot__msg__Track__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, detect_mot, msg, Track
      )()->data);
    size_t size = ros_message->front_camera.size;
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->front_camera_.maximum()) {
      if (!dds_message->front_camera_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->front_camera_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->front_camera.data[i];
      if (!detect_mot__msg__Track__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->front_camera_[i]))
      {
        return false;
      }
    }
  }
  // Member name: back_camera
  {
    const message_type_support_callbacks_t * detect_mot__msg__Track__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, detect_mot, msg, Track
      )()->data);
    size_t size = ros_message->back_camera.size;
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->back_camera_.maximum()) {
      if (!dds_message->back_camera_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->back_camera_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->back_camera.data[i];
      if (!detect_mot__msg__Track__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->back_camera_[i]))
      {
        return false;
      }
    }
  }
  return true;
}

static bool
_Frame__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const detect_mot::msg::dds_::Frame_ * dds_message =
    static_cast<const detect_mot::msg::dds_::Frame_ *>(untyped_dds_message);
  detect_mot__msg__Frame * ros_message =
    static_cast<detect_mot__msg__Frame *>(untyped_ros_message);
  // Member name: header
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      std_msgs, msg,
      Header)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->header_, &ros_message->header);
  }
  // Member name: numof3d_front
  {
    ros_message->numof3d_front = dds_message->numof3d_front_;
  }
  // Member name: numof3d_back
  {
    ros_message->numof3d_back = dds_message->numof3d_back_;
  }
  // Member name: robot_pose
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      geometry_msgs, msg,
      Pose2D)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->robot_pose_, &ros_message->robot_pose);
  }
  // Member name: front_camera
  {
    DDS_Long size = dds_message->front_camera_.length();
    if (ros_message->front_camera.data) {
      detect_mot__msg__Track__Sequence__fini(&ros_message->front_camera);
    }
    if (!detect_mot__msg__Track__Sequence__init(&ros_message->front_camera, size)) {
      return "failed to create array for field 'front_camera'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->front_camera.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        detect_mot, msg,
        Track)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->front_camera_[i], &ros_i);
    }
  }
  // Member name: back_camera
  {
    DDS_Long size = dds_message->back_camera_.length();
    if (ros_message->back_camera.data) {
      detect_mot__msg__Track__Sequence__fini(&ros_message->back_camera);
    }
    if (!detect_mot__msg__Track__Sequence__init(&ros_message->back_camera, size)) {
      return "failed to create array for field 'back_camera'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->back_camera.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        detect_mot, msg,
        Track)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->back_camera_[i], &ros_i);
    }
  }
  return true;
}


static bool
_Frame__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const detect_mot__msg__Frame * ros_message =
    static_cast<const detect_mot__msg__Frame *>(untyped_ros_message);
  detect_mot::msg::dds_::Frame_ dds_message;
  if (!_Frame__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (detect_mot::msg::dds_::Frame_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call detect_mot::msg::dds_::Frame_Plugin_serialize_to_cdr_buffer()\n");
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
  if (detect_mot::msg::dds_::Frame_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    return false;
  }

  return true;
}

static bool
_Frame__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  detect_mot::msg::dds_::Frame_ * dds_message =
    detect_mot::msg::dds_::Frame_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (detect_mot::msg::dds_::Frame_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Frame__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (detect_mot::msg::dds_::Frame_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Frame__callbacks = {
  "detect_mot::msg",  // message_namespace
  "Frame",  // message_name
  _Frame__get_type_code,  // get_type_code
  _Frame__convert_ros_to_dds,  // convert_ros_to_dds
  _Frame__convert_dds_to_ros,  // convert_dds_to_ros
  _Frame__to_cdr_stream,  // to_cdr_stream
  _Frame__to_message  // to_message
};

static rosidl_message_type_support_t _Frame__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Frame__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  detect_mot, msg,
  Frame)()
{
  return &_Frame__type_support;
}

#if defined(__cplusplus)
}
#endif
