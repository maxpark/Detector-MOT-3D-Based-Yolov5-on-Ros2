// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from detect_mot:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__OBJECTS__STRUCT_H_
#define DETECT_MOT__MSG__OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'front_header'
// Member 'back_header'
#include "std_msgs/msg/header__struct.h"
// Member 'objects_front'
// Member 'objects_back'
#include "detect_mot/msg/detection2d__struct.h"

// Struct defined in msg/Objects in the package detect_mot.
typedef struct detect_mot__msg__Objects
{
  std_msgs__msg__Header front_header;
  std_msgs__msg__Header back_header;
  detect_mot__msg__Detection2d__Sequence objects_front;
  detect_mot__msg__Detection2d__Sequence objects_back;
} detect_mot__msg__Objects;

// Struct for a sequence of detect_mot__msg__Objects.
typedef struct detect_mot__msg__Objects__Sequence
{
  detect_mot__msg__Objects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} detect_mot__msg__Objects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DETECT_MOT__MSG__OBJECTS__STRUCT_H_
