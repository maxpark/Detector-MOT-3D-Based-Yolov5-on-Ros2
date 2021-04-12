// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from detect_mot:msg/Track.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "detect_mot/msg/track__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace dds_
{
class Point32_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const geometry_msgs::msg::Point32 &,
  geometry_msgs::msg::dds_::Point32_ &);
bool convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::Point32_ &,
  geometry_msgs::msg::Point32 &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace geometry_msgs
namespace geometry_msgs
{
namespace msg
{
namespace dds_
{
class Point32_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const geometry_msgs::msg::Point32 &,
  geometry_msgs::msg::dds_::Point32_ &);
bool convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::Point32_ &,
  geometry_msgs::msg::Point32 &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace geometry_msgs
namespace geometry_msgs
{
namespace msg
{
namespace dds_
{
class Point32_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const geometry_msgs::msg::Point32 &,
  geometry_msgs::msg::dds_::Point32_ &);
bool convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::Point32_ &,
  geometry_msgs::msg::Point32 &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace geometry_msgs
namespace geometry_msgs
{
namespace msg
{
namespace dds_
{
class Point32_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const geometry_msgs::msg::Point32 &,
  geometry_msgs::msg::dds_::Point32_ &);
bool convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::Point32_ &,
  geometry_msgs::msg::Point32 &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace geometry_msgs
namespace geometry_msgs
{
namespace msg
{
namespace dds_
{
class Point32_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const geometry_msgs::msg::Point32 &,
  geometry_msgs::msg::dds_::Point32_ &);
bool convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::Point32_ &,
  geometry_msgs::msg::Point32 &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace geometry_msgs
namespace geometry_msgs
{
namespace msg
{
namespace dds_
{
class Point32_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const geometry_msgs::msg::Point32 &,
  geometry_msgs::msg::dds_::Point32_ &);
bool convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::Point32_ &,
  geometry_msgs::msg::Point32 &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace geometry_msgs
namespace geometry_msgs
{
namespace msg
{
namespace dds_
{
class Point32_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const geometry_msgs::msg::Point32 &,
  geometry_msgs::msg::dds_::Point32_ &);
bool convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::Point32_ &,
  geometry_msgs::msg::Point32 &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace detect_mot
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Track()
{
  return detect_mot::msg::dds_::Track_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const detect_mot::msg::Track & ros_message,
  detect_mot::msg::dds_::Track_ & dds_message)
{
  // member.name id
  dds_message.id_ =
    ros_message.id;

  // member.name classid
  dds_message.classid_ =
    ros_message.classid;

  // member.name classname
  DDS_String_free(dds_message.classname_);
  dds_message.classname_ =
    DDS_String_dup(ros_message.classname.c_str());

  // member.name age
  dds_message.age_ =
    ros_message.age;

  // member.name information3d
  dds_message.information3d_ =
    ros_message.information3d;

  // member.name bbox
  {
    size_t size = 4;
    for (size_t i = 0; i < size; i++) {
      dds_message.bbox_[static_cast<DDS_Long>(i)] =
        ros_message.bbox[i];
    }
  }

  // member.name position
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.position,
      dds_message.position_))
  {
    return false;
  }

  // member.name velocity
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.velocity,
      dds_message.velocity_))
  {
    return false;
  }

  // member.name size
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.size,
      dds_message.size_))
  {
    return false;
  }

  // member.name position_e
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.position_e,
      dds_message.position_e_))
  {
    return false;
  }

  // member.name velocity_e
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.velocity_e,
      dds_message.velocity_e_))
  {
    return false;
  }

  // member.name pointcloud
  {
    size_t size = ros_message.pointcloud.size();
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.pointcloud_.maximum()) {
      if (!dds_message.pointcloud_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.pointcloud_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !geometry_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.pointcloud[i],
          dds_message.pointcloud_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  // member.name trace
  {
    size_t size = ros_message.trace.size();
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.trace_.maximum()) {
      if (!dds_message.trace_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.trace_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !geometry_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.trace[i],
          dds_message.trace_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const detect_mot::msg::dds_::Track_ & dds_message,
  detect_mot::msg::Track & ros_message)
{
  // member.name id
  ros_message.id =
    dds_message.id_;

  // member.name classid
  ros_message.classid =
    dds_message.classid_;

  // member.name classname
  ros_message.classname = dds_message.classname_;

  // member.name age
  ros_message.age =
    dds_message.age_;

  // member.name information3d
  ros_message.information3d =
    dds_message.information3d_ == DDS_BOOLEAN_TRUE;

  // member.name bbox
  {
    size_t size = 4;
    for (size_t i = 0; i < size; i++) {
      ros_message.bbox[i] =
        dds_message.bbox_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name position
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.position_,
      ros_message.position))
  {
    return false;
  }

  // member.name velocity
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.velocity_,
      ros_message.velocity))
  {
    return false;
  }

  // member.name size
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.size_,
      ros_message.size))
  {
    return false;
  }

  // member.name position_e
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.position_e_,
      ros_message.position_e))
  {
    return false;
  }

  // member.name velocity_e
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.velocity_e_,
      ros_message.velocity_e))
  {
    return false;
  }

  // member.name pointcloud
  {
    size_t size = dds_message.pointcloud_.length();
    ros_message.pointcloud.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !geometry_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.pointcloud_[static_cast<DDS_Long>(i)],
          ros_message.pointcloud[i]))
      {
        return false;
      }
    }
  }

  // member.name trace
  {
    size_t size = dds_message.trace_.length();
    ros_message.trace.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !geometry_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.trace_[static_cast<DDS_Long>(i)],
          ros_message.trace[i]))
      {
        return false;
      }
    }
  }

  return true;
}

bool
to_cdr_stream__Track(
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
  const detect_mot::msg::Track & ros_message =
    *(const detect_mot::msg::Track *)untyped_ros_message;

  // create a respective connext dds type
  detect_mot::msg::dds_::Track_ * dds_message = detect_mot::msg::dds_::Track_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (detect_mot::msg::dds_::Track_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
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
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (detect_mot::msg::dds_::Track_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Track(
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

  detect_mot::msg::Track & ros_message =
    *(detect_mot::msg::Track *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (detect_mot::msg::dds_::Track_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Track__callbacks = {
  "detect_mot::msg",
  "Track",
  &get_type_code__Track,
  nullptr,
  nullptr,
  &to_cdr_stream__Track,
  &to_message__Track
};

static rosidl_message_type_support_t _Track__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Track__callbacks,
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
get_message_type_support_handle<detect_mot::msg::Track>()
{
  return &detect_mot::msg::typesupport_connext_cpp::_Track__handle;
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
  Track)()
{
  return &detect_mot::msg::typesupport_connext_cpp::_Track__handle;
}

#ifdef __cplusplus
}
#endif
