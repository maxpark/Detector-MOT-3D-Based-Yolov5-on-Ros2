// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice
#include "detect_mot/msg/frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `robot_pose`
#include "geometry_msgs/msg/pose2_d__functions.h"
// Member `front_camera`
// Member `back_camera`
#include "detect_mot/msg/track__functions.h"

bool
detect_mot__msg__Frame__init(detect_mot__msg__Frame * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    detect_mot__msg__Frame__fini(msg);
    return false;
  }
  // numof3d_front
  // numof3d_back
  // robot_pose
  if (!geometry_msgs__msg__Pose2D__init(&msg->robot_pose)) {
    detect_mot__msg__Frame__fini(msg);
    return false;
  }
  // front_camera
  if (!detect_mot__msg__Track__Sequence__init(&msg->front_camera, 0)) {
    detect_mot__msg__Frame__fini(msg);
    return false;
  }
  // back_camera
  if (!detect_mot__msg__Track__Sequence__init(&msg->back_camera, 0)) {
    detect_mot__msg__Frame__fini(msg);
    return false;
  }
  return true;
}

void
detect_mot__msg__Frame__fini(detect_mot__msg__Frame * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // numof3d_front
  // numof3d_back
  // robot_pose
  geometry_msgs__msg__Pose2D__fini(&msg->robot_pose);
  // front_camera
  detect_mot__msg__Track__Sequence__fini(&msg->front_camera);
  // back_camera
  detect_mot__msg__Track__Sequence__fini(&msg->back_camera);
}

detect_mot__msg__Frame *
detect_mot__msg__Frame__create()
{
  detect_mot__msg__Frame * msg = (detect_mot__msg__Frame *)malloc(sizeof(detect_mot__msg__Frame));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(detect_mot__msg__Frame));
  bool success = detect_mot__msg__Frame__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
detect_mot__msg__Frame__destroy(detect_mot__msg__Frame * msg)
{
  if (msg) {
    detect_mot__msg__Frame__fini(msg);
  }
  free(msg);
}


bool
detect_mot__msg__Frame__Sequence__init(detect_mot__msg__Frame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  detect_mot__msg__Frame * data = NULL;
  if (size) {
    data = (detect_mot__msg__Frame *)calloc(size, sizeof(detect_mot__msg__Frame));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = detect_mot__msg__Frame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        detect_mot__msg__Frame__fini(&data[i - 1]);
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
detect_mot__msg__Frame__Sequence__fini(detect_mot__msg__Frame__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      detect_mot__msg__Frame__fini(&array->data[i]);
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

detect_mot__msg__Frame__Sequence *
detect_mot__msg__Frame__Sequence__create(size_t size)
{
  detect_mot__msg__Frame__Sequence * array = (detect_mot__msg__Frame__Sequence *)malloc(sizeof(detect_mot__msg__Frame__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = detect_mot__msg__Frame__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
detect_mot__msg__Frame__Sequence__destroy(detect_mot__msg__Frame__Sequence * array)
{
  if (array) {
    detect_mot__msg__Frame__Sequence__fini(array);
  }
  free(array);
}
