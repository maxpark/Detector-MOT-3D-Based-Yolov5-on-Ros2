// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from detect_mot:msg/Objects.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "detect_mot/msg/objects__rosidl_typesupport_connext_cpp.hpp"
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
namespace detect_mot
{
namespace msg
{
namespace dds_
{
class Detection2d_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const detect_mot::msg::Detection2d &,
  detect_mot::msg::dds_::Detection2d_ &);
bool convert_dds_message_to_ros(
  const detect_mot::msg::dds_::Detection2d_ &,
  detect_mot::msg::Detection2d &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace detect_mot
namespace detect_mot
{
namespace msg
{
namespace dds_
{
class Detection2d_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const detect_mot::msg::Detection2d &,
  detect_mot::msg::dds_::Detection2d_ &);
bool convert_dds_message_to_ros(
  const detect_mot::msg::dds_::Detection2d_ &,
  detect_mot::msg::Detection2d &);
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
get_type_code__Objects()
{
  return detect_mot::msg::dds_::Objects_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const detect_mot::msg::Objects & ros_message,
  detect_mot::msg::dds_::Objects_ & dds_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.header,
      dds_message.header_))
  {
    return false;
  }

  // member.name objects_front
  {
    size_t size = ros_message.objects_front.size();
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.objects_front_.maximum()) {
      if (!dds_message.objects_front_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.objects_front_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !detect_mot::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.objects_front[i],
          dds_message.objects_front_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  // member.name objects_back
  {
    size_t size = ros_message.objects_back.size();
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.objects_back_.maximum()) {
      if (!dds_message.objects_back_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.objects_back_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !detect_mot::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.objects_back[i],
          dds_message.objects_back_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const detect_mot::msg::dds_::Objects_ & dds_message,
  detect_mot::msg::Objects & ros_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.header_,
      ros_message.header))
  {
    return false;
  }

  // member.name objects_front
  {
    size_t size = dds_message.objects_front_.length();
    ros_message.objects_front.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !detect_mot::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.objects_front_[static_cast<DDS_Long>(i)],
          ros_message.objects_front[i]))
      {
        return false;
      }
    }
  }

  // member.name objects_back
  {
    size_t size = dds_message.objects_back_.length();
    ros_message.objects_back.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !detect_mot::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.objects_back_[static_cast<DDS_Long>(i)],
          ros_message.objects_back[i]))
      {
        return false;
      }
    }
  }

  return true;
}

bool
to_cdr_stream__Objects(
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
  const detect_mot::msg::Objects & ros_message =
    *(const detect_mot::msg::Objects *)untyped_ros_message;

  // create a respective connext dds type
  detect_mot::msg::dds_::Objects_ * dds_message = detect_mot::msg::dds_::Objects_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (detect_mot::msg::dds_::Objects_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
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
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (detect_mot::msg::dds_::Objects_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Objects(
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

  detect_mot::msg::Objects & ros_message =
    *(detect_mot::msg::Objects *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (detect_mot::msg::dds_::Objects_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Objects__callbacks = {
  "detect_mot::msg",
  "Objects",
  &get_type_code__Objects,
  nullptr,
  nullptr,
  &to_cdr_stream__Objects,
  &to_message__Objects
};

static rosidl_message_type_support_t _Objects__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Objects__callbacks,
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
get_message_type_support_handle<detect_mot::msg::Objects>()
{
  return &detect_mot::msg::typesupport_connext_cpp::_Objects__handle;
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
  Objects)()
{
  return &detect_mot::msg::typesupport_connext_cpp::_Objects__handle;
}

#ifdef __cplusplus
}
#endif
