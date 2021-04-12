// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from detect_mot:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__TRACK__STRUCT_H_
#define DETECT_MOT__MSG__TRACK__STRUCT_H_

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
// Member 'position'
// Member 'velocity'
// Member 'size'
// Member 'position_e'
// Member 'velocity_e'
// Member 'pointcloud'
// Member 'trace'
#include "geometry_msgs/msg/point32__struct.h"

// Struct defined in msg/Track in the package detect_mot.
typedef struct detect_mot__msg__Track
{
  int32_t id;
  int32_t classid;
  rosidl_generator_c__String classname;
  int32_t age;
  bool information3d;
  int32_t bbox[4];
  geometry_msgs__msg__Point32 position;
  geometry_msgs__msg__Point32 velocity;
  geometry_msgs__msg__Point32 size;
  geometry_msgs__msg__Point32 position_e;
  geometry_msgs__msg__Point32 velocity_e;
  geometry_msgs__msg__Point32__Sequence pointcloud;
  geometry_msgs__msg__Point32__Sequence trace;
} detect_mot__msg__Track;

// Struct for a sequence of detect_mot__msg__Track.
typedef struct detect_mot__msg__Track__Sequence
{
  detect_mot__msg__Track * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} detect_mot__msg__Track__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DETECT_MOT__MSG__TRACK__STRUCT_H_
