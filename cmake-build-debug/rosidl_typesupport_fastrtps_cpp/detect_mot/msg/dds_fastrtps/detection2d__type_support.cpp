// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from detect_mot:msg/Detection2d.idl
// generated code does not contain a copyright notice
#include "detect_mot/msg/detection2d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "detect_mot/msg/detection2d__struct.hpp"

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

namespace detect_mot
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
cdr_serialize(
  const detect_mot::msg::Detection2d & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: classid
  cdr << ros_message.classid;
  // Member: classname
  cdr << ros_message.classname;
  // Member: bbox
  {
    cdr << ros_message.bbox;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  detect_mot::msg::Detection2d & ros_message)
{
  // Member: classid
  cdr >> ros_message.classid;

  // Member: classname
  cdr >> ros_message.classname;

  // Member: bbox
  {
    cdr >> ros_message.bbox;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
get_serialized_size(
  const detect_mot::msg::Detection2d & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: classid
  {
    size_t item_size = sizeof(ros_message.classid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: classname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.classname.size() + 1);
  // Member: bbox
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.bbox[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_detect_mot
max_serialized_size_Detection2d(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: classid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: classname
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bbox
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Detection2d__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const detect_mot::msg::Detection2d *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Detection2d__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<detect_mot::msg::Detection2d *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Detection2d__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const detect_mot::msg::Detection2d *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Detection2d__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Detection2d(full_bounded, 0);
}

static message_type_support_callbacks_t _Detection2d__callbacks = {
  "detect_mot::msg",
  "Detection2d",
  _Detection2d__cdr_serialize,
  _Detection2d__cdr_deserialize,
  _Detection2d__get_serialized_size,
  _Detection2d__max_serialized_size
};

static rosidl_message_type_support_t _Detection2d__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Detection2d__callbacks,
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
get_message_type_support_handle<detect_mot::msg::Detection2d>()
{
  return &detect_mot::msg::typesupport_fastrtps_cpp::_Detection2d__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, detect_mot, msg, Detection2d)() {
  return &detect_mot::msg::typesupport_fastrtps_cpp::_Detection2d__handle;
}

#ifdef __cplusplus
}
#endif
