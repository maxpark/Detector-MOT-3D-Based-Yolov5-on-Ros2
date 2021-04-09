// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from detect_mot:msg/Track.idl
// generated code does not contain a copyright notice
#include "detect_mot/msg/track__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `classname`
#include "rosidl_generator_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `size`
// Member `position_e`
// Member `velocity_e`
// Member `pointcloud`
// Member `trace`
#include "geometry_msgs/msg/point32__functions.h"

bool
detect_mot__msg__Track__init(detect_mot__msg__Track * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // classid
  // classname
  if (!rosidl_generator_c__String__init(&msg->classname)) {
    detect_mot__msg__Track__fini(msg);
    return false;
  }
  // age
  // information3d
  // bbox
  // position
  if (!geometry_msgs__msg__Point32__init(&msg->position)) {
    detect_mot__msg__Track__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Point32__init(&msg->velocity)) {
    detect_mot__msg__Track__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Point32__init(&msg->size)) {
    detect_mot__msg__Track__fini(msg);
    return false;
  }
  // position_e
  if (!geometry_msgs__msg__Point32__init(&msg->position_e)) {
    detect_mot__msg__Track__fini(msg);
    return false;
  }
  // velocity_e
  if (!geometry_msgs__msg__Point32__init(&msg->velocity_e)) {
    detect_mot__msg__Track__fini(msg);
    return false;
  }
  // pointcloud
  if (!geometry_msgs__msg__Point32__Sequence__init(&msg->pointcloud, 0)) {
    detect_mot__msg__Track__fini(msg);
    return false;
  }
  // trace
  if (!geometry_msgs__msg__Point32__Sequence__init(&msg->trace, 0)) {
    detect_mot__msg__Track__fini(msg);
    return false;
  }
  return true;
}

void
detect_mot__msg__Track__fini(detect_mot__msg__Track * msg)
{
  if (!msg) {
    return;
  }
  // id
  // classid
  // classname
  rosidl_generator_c__String__fini(&msg->classname);
  // age
  // information3d
  // bbox
  // position
  geometry_msgs__msg__Point32__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Point32__fini(&msg->velocity);
  // size
  geometry_msgs__msg__Point32__fini(&msg->size);
  // position_e
  geometry_msgs__msg__Point32__fini(&msg->position_e);
  // velocity_e
  geometry_msgs__msg__Point32__fini(&msg->velocity_e);
  // pointcloud
  geometry_msgs__msg__Point32__Sequence__fini(&msg->pointcloud);
  // trace
  geometry_msgs__msg__Point32__Sequence__fini(&msg->trace);
}

detect_mot__msg__Track *
detect_mot__msg__Track__create()
{
  detect_mot__msg__Track * msg = (detect_mot__msg__Track *)malloc(sizeof(detect_mot__msg__Track));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(detect_mot__msg__Track));
  bool success = detect_mot__msg__Track__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
detect_mot__msg__Track__destroy(detect_mot__msg__Track * msg)
{
  if (msg) {
    detect_mot__msg__Track__fini(msg);
  }
  free(msg);
}


bool
detect_mot__msg__Track__Sequence__init(detect_mot__msg__Track__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  detect_mot__msg__Track * data = NULL;
  if (size) {
    data = (detect_mot__msg__Track *)calloc(size, sizeof(detect_mot__msg__Track));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = detect_mot__msg__Track__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        detect_mot__msg__Track__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
detect_mot__msg__Track__Sequence__fini(detect_mot__msg__Track__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      detect_mot__msg__Track__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

detect_mot__msg__Track__Sequence *
detect_mot__msg__Track__Sequence__create(size_t size)
{
  detect_mot__msg__Track__Sequence * array = (detect_mot__msg__Track__Sequence *)malloc(sizeof(detect_mot__msg__Track__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = detect_mot__msg__Track__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
detect_mot__msg__Track__Sequence__destroy(detect_mot__msg__Track__Sequence * array)
{
  if (array) {
    detect_mot__msg__Track__Sequence__fini(array);
  }
  free(array);
}
