// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice


#ifndef DETECT_MOT__MSG__FRAME__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define DETECT_MOT__MSG__FRAME__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "detect_mot/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "detect_mot/msg/frame__struct.hpp"

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
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace detect_mot
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Frame();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_detect_mot
convert_ros_message_to_dds(
  const detect_mot::msg::Frame & ros_message,
  detect_mot::msg::dds_::Frame_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_detect_mot
convert_dds_message_to_ros(
  const detect_mot::msg::dds_::Frame_ & dds_message,
  detect_mot::msg::Frame & ros_message);

bool
to_cdr_stream__Frame(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Frame(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace detect_mot


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_detect_mot
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  detect_mot, msg,
  Frame)();

#ifdef __cplusplus
}
#endif


#endif  // DETECT_MOT__MSG__FRAME__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
