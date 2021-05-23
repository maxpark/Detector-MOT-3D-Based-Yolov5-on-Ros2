// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from detect_mot:msg/Objects.idl
// generated code does not contain a copyright notice
#include "detect_mot/msg/objects__rosidl_typesupport_fastrtps_cpp.hpp"
#include "detect_mot/msg/objects__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace detect_mot
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const detect_mot::msg::Detection2d &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  detect_mot::msg::Detection2d &);
size_t get_serialized_size(
  const detect_mot::msg::Detection2d &,
  size_t current_alignment);
size_t
max_serialized_size_Detection2d(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace detect_mot

namespace detect_mot
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const detect_mot::msg::Detection2d &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  detect_mot::msg::Detection2d &);
size_t get_serialized_size(
  const detect_mot::msg::Detection2d &,
  size_t current_alignment);
size_t
max_serialized_size_Detection2d(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace detect_mot


namespace detect_mot
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
cdr_serialize(
  const detect_mot::msg::Objects & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: front_header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.front_header,
    cdr);
  // Member: back_header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.back_header,
    cdr);
  // Member: objects_front
  {
    size_t size = ros_message.objects_front.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      detect_mot::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.objects_front[i],
        cdr);
    }
  }
  // Member: objects_back
  {
    size_t size = ros_message.objects_back.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      detect_mot::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.objects_back[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  detect_mot::msg::Objects & ros_message)
{
  // Member: front_header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.front_header);

  // Member: back_header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.back_header);

  // Member: objects_front
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.objects_front.resize(size);
    for (size_t i = 0; i < size; i++) {
      detect_mot::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.objects_front[i]);
    }
  }

  // Member: objects_back
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.objects_back.resize(size);
    for (size_t i = 0; i < size; i++) {
      detect_mot::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.objects_back[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
get_serialized_size(
  const detect_mot::msg::Objects & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: front_header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.front_header, current_alignment);
  // Member: back_header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.back_header, current_alignment);
  // Member: objects_front
  {
    size_t array_size = ros_message.objects_front.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        detect_mot::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.objects_front[index], current_alignment);
    }
  }
  // Member: objects_back
  {
    size_t array_size = ros_message.objects_back.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        detect_mot::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.objects_back[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
max_serialized_size_Objects(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: front_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: back_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: objects_front
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        detect_mot::msg::typesupport_fastrtps_cpp::max_serialized_size_Detection2d(
        full_bounded, current_alignment);
    }
  }

  // Member: objects_back
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        detect_mot::msg::typesupport_fastrtps_cpp::max_serialized_size_Detection2d(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Objects__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const detect_mot::msg::Objects *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Objects__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<detect_mot::msg::Objects *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Objects__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const detect_mot::msg::Objects *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Objects__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Objects(full_bounded, 0);
}

static message_type_support_callbacks_t _Objects__callbacks = {
  "detect_mot::msg",
  "Objects",
  _Objects__cdr_serialize,
  _Objects__cdr_deserialize,
  _Objects__get_serialized_size,
  _Objects__max_serialized_size
};

static rosidl_message_type_support_t _Objects__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Objects__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace detect_mot

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_detect_mot
const rosidl_message_type_support_t *
get_message_type_support_handle<detect_mot::msg::Objects>()
{
  return &detect_mot::msg::typesupport_fastrtps_cpp::_Objects__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, detect_mot, msg, Objects)() {
  return &detect_mot::msg::typesupport_fastrtps_cpp::_Objects__handle;
}

#ifdef __cplusplus
}
#endif
