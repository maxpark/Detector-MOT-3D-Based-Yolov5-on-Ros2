// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__FRAME__STRUCT_H_
#define DETECT_MOT__MSG__FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'robot_pose'
#include "geometry_msgs/msg/pose2_d__struct.h"
// Member 'front_camera'
// Member 'back_camera'
#include "detect_mot/msg/track__struct.h"

// Struct defined in msg/Frame in the package detect_mot.
typedef struct detect_mot__msg__Frame
{
  std_msgs__msg__Header header;
  int32_t numof3d_front;
  int32_t numof3d_back;
  geometry_msgs__msg__Pose2D robot_pose;
  detect_mot__msg__Track__Sequence front_camera;
  detect_mot__msg__Track__Sequence back_camera;
} detect_mot__msg__Frame;

// Struct for a sequence of detect_mot__msg__Frame.
typedef struct detect_mot__msg__Frame__Sequence
{
  detect_mot__msg__Frame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} detect_mot__msg__Frame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DETECT_MOT__MSG__FRAME__STRUCT_H_
