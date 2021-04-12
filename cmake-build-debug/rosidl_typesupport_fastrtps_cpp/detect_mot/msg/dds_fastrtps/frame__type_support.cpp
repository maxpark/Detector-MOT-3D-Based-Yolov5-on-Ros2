// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice
#include "detect_mot/msg/frame__rosidl_typesupport_fastrtps_cpp.hpp"
#include "detect_mot/msg/frame__struct.hpp"

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

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose2D &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose2D &,
  size_t current_alignment);
size_t
max_serialized_size_Pose2D(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace detect_mot
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const detect_mot::msg::Track &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  detect_mot::msg::Track &);
size_t get_serialized_size(
  const detect_mot::msg::Track &,
  size_t current_alignment);
size_t
max_serialized_size_Track(
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
  const detect_mot::msg::Track &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  detect_mot::msg::Track &);
size_t get_serialized_size(
  const detect_mot::msg::Track &,
  size_t current_alignment);
size_t
max_serialized_size_Track(
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
  const detect_mot::msg::Frame & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: numof3d_front
  cdr << ros_message.numof3d_front;
  // Member: numof3d_back
  cdr << ros_message.numof3d_back;
  // Member: robot_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.robot_pose,
    cdr);
  // Member: front_camera
  {
    size_t size = ros_message.front_camera.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      detect_mot::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.front_camera[i],
        cdr);
    }
  }
  // Member: back_camera
  {
    size_t size = ros_message.back_camera.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      detect_mot::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.back_camera[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  detect_mot::msg::Frame & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: numof3d_front
  cdr >> ros_message.numof3d_front;

  // Member: numof3d_back
  cdr >> ros_message.numof3d_back;

  // Member: robot_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.robot_pose);

  // Member: front_camera
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.front_camera.resize(size);
    for (size_t i = 0; i < size; i++) {
      detect_mot::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.front_camera[i]);
    }
  }

  // Member: back_camera
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.back_camera.resize(size);
    for (size_t i = 0; i < size; i++) {
      detect_mot::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.back_camera[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
get_serialized_size(
  const detect_mot::msg::Frame & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: numof3d_front
  {
    size_t item_size = sizeof(ros_message.numof3d_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: numof3d_back
  {
    size_t item_size = sizeof(ros_message.numof3d_back);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_pose

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.robot_pose, current_alignment);
  // Member: front_camera
  {
    size_t array_size = ros_message.front_camera.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        detect_mot::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.front_camera[index], current_alignment);
    }
  }
  // Member: back_camera
  {
    size_t array_size = ros_message.back_camera.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        detect_mot::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.back_camera[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
max_serialized_size_Frame(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: numof3d_front
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: numof3d_back
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: robot_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose2D(
        full_bounded, current_alignment);
    }
  }

  // Member: front_camera
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        detect_mot::msg::typesupport_fastrtps_cpp::max_serialized_size_Track(
        full_bounded, current_alignment);
    }
  }

  // Member: back_camera
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        detect_mot::msg::typesupport_fastrtps_cpp::max_serialized_size_Track(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Frame__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const detect_mot::msg::Frame *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Frame__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<detect_mot::msg::Frame *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Frame__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const detect_mot::msg::Frame *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Frame__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Frame(full_bounded, 0);
}

static message_type_support_callbacks_t _Frame__callbacks = {
  "detect_mot::msg",
  "Frame",
  _Frame__cdr_serialize,
  _Frame__cdr_deserialize,
  _Frame__get_serialized_size,
  _Frame__max_serialized_size
};

static rosidl_message_type_support_t _Frame__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Frame__callbacks,
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
get_message_type_support_handle<detect_mot::msg::Frame>()
{
  return &detect_mot::msg::typesupport_fastrtps_cpp::_Frame__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, detect_mot, msg, Frame)() {
  return &detect_mot::msg::typesupport_fastrtps_cpp::_Frame__handle;
}

#ifdef __cplusplus
}
#endif
