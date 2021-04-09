// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from detect_mot:msg/Detection2d.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__DETECTION2D__STRUCT_H_
#define DETECT_MOT__MSG__DETECTION2D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'classname'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/Detection2d in the package detect_mot.
typedef struct detect_mot__msg__Detection2d
{
  int32_t classid;
  rosidl_generator_c__String classname;
  int32_t bbox[4];
} detect_mot__msg__Detection2d;

// Struct for a sequence of detect_mot__msg__Detection2d.
typedef struct detect_mot__msg__Detection2d__Sequence
{
  detect_mot__msg__Detection2d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} detect_mot__msg__Detection2d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DETECT_MOT__MSG__DETECTION2D__STRUCT_H_
