// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "detect_mot/msg/frame__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace dds_
{
class Header_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const std_msgs::msg::Header &,
  std_msgs::msg::dds_::Header_ &);
bool convert_dds_message_to_ros(
  const std_msgs::msg::dds_::Header_ &,
  std_msgs::msg::Header &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace std_msgs
namespace geometry_msgs
{
namespace msg
{
namespace dds_
{
class Pose2D_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const geometry_msgs::msg::Pose2D &,
  geometry_msgs::msg::dds_::Pose2D_ &);
bool convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::Pose2D_ &,
  geometry_msgs::msg::Pose2D &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace geometry_msgs
namespace detect_mot
{
namespace msg
{
namespace dds_
{
class Track_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const detect_mot::msg::Track &,
  detect_mot::msg::dds_::Track_ &);
bool convert_dds_message_to_ros(
  const detect_mot::msg::dds_::Track_ &,
  detect_mot::msg::Track &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace detect_mot
namespace detect_mot
{
namespace msg
{
namespace dds_
{
class Track_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const detect_mot::msg::Track &,
  detect_mot::msg::dds_::Track_ &);
bool convert_dds_message_to_ros(
  const detect_mot::msg::dds_::Track_ &,
  detect_mot::msg::Track &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace detect_mot


namespace detect_mot
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Frame()
{
  return detect_mot::msg::dds_::Frame_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const detect_mot::msg::Frame & ros_message,
  detect_mot::msg::dds_::Frame_ & dds_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.header,
      dds_message.header_))
  {
    return false;
  }

  // member.name numof3d_front
  dds_message.numof3d_front_ =
    ros_message.numof3d_front;

  // member.name numof3d_back
  dds_message.numof3d_back_ =
    ros_message.numof3d_back;

  // member.name robot_pose
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.robot_pose,
      dds_message.robot_pose_))
  {
    return false;
  }

  // member.name front_camera
  {
    size_t size = ros_message.front_camera.size();
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.front_camera_.maximum()) {
      if (!dds_message.front_camera_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.front_camera_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !detect_mot::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.front_camera[i],
          dds_message.front_camera_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  // member.name back_camera
  {
    size_t size = ros_message.back_camera.size();
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.back_camera_.maximum()) {
      if (!dds_message.back_camera_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.back_camera_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !detect_mot::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.back_camera[i],
          dds_message.back_camera_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const detect_mot::msg::dds_::Frame_ & dds_message,
  detect_mot::msg::Frame & ros_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.header_,
      ros_message.header))
  {
    return false;
  }

  // member.name numof3d_front
  ros_message.numof3d_front =
    dds_message.numof3d_front_;

  // member.name numof3d_back
  ros_message.numof3d_back =
    dds_message.numof3d_back_;

  // member.name robot_pose
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.robot_pose_,
      ros_message.robot_pose))
  {
    return false;
  }

  // member.name front_camera
  {
    size_t size = dds_message.front_camera_.length();
    ros_message.front_camera.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !detect_mot::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.front_camera_[static_cast<DDS_Long>(i)],
          ros_message.front_camera[i]))
      {
        return false;
      }
    }
  }

  // member.name back_camera
  {
    size_t size = dds_message.back_camera_.length();
    ros_message.back_camera.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !detect_mot::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.back_camera_[static_cast<DDS_Long>(i)],
          ros_message.back_camera[i]))
      {
        return false;
      }
    }
  }

  return true;
}

bool
to_cdr_stream__Frame(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const detect_mot::msg::Frame & ros_message =
    *(const detect_mot::msg::Frame *)untyped_ros_message;

  // create a respective connext dds type
  detect_mot::msg::dds_::Frame_ * dds_message = detect_mot::msg::dds_::Frame_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (detect_mot::msg::dds_::Frame_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
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
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (detect_mot::msg::dds_::Frame_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Frame(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
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

  detect_mot::msg::Frame & ros_message =
    *(detect_mot::msg::Frame *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (detect_mot::msg::dds_::Frame_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Frame__callbacks = {
  "detect_mot::msg",
  "Frame",
  &get_type_code__Frame,
  nullptr,
  nullptr,
  &to_cdr_stream__Frame,
  &to_message__Frame
};

static rosidl_message_type_support_t _Frame__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Frame__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace detect_mot


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_detect_mot
const rosidl_message_type_support_t *
get_message_type_support_handle<detect_mot::msg::Frame>()
{
  return &detect_mot::msg::typesupport_connext_cpp::_Frame__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  detect_mot, msg,
  Frame)()
{
  return &detect_mot::msg::typesupport_connext_cpp::_Frame__handle;
}

#ifdef __cplusplus
}
#endif
