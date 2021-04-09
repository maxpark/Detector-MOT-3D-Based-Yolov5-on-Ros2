// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from detect_mot:msg/Objects.idl
// generated code does not contain a copyright notice
#include "detect_mot/msg/objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `objects_front`
// Member `objects_back`
#include "detect_mot/msg/detection2d__functions.h"

bool
detect_mot__msg__Objects__init(detect_mot__msg__Objects * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    detect_mot__msg__Objects__fini(msg);
    return false;
  }
  // objects_front
  if (!detect_mot__msg__Detection2d__Sequence__init(&msg->objects_front, 0)) {
    detect_mot__msg__Objects__fini(msg);
    return false;
  }
  // objects_back
  if (!detect_mot__msg__Detection2d__Sequence__init(&msg->objects_back, 0)) {
    detect_mot__msg__Objects__fini(msg);
    return false;
  }
  return true;
}

void
detect_mot__msg__Objects__fini(detect_mot__msg__Objects * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects_front
  detect_mot__msg__Detection2d__Sequence__fini(&msg->objects_front);
  // objects_back
  detect_mot__msg__Detection2d__Sequence__fini(&msg->objects_back);
}

detect_mot__msg__Objects *
detect_mot__msg__Objects__create()
{
  detect_mot__msg__Objects * msg = (detect_mot__msg__Objects *)malloc(sizeof(detect_mot__msg__Objects));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(detect_mot__msg__Objects));
  bool success = detect_mot__msg__Objects__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
detect_mot__msg__Objects__destroy(detect_mot__msg__Objects * msg)
{
  if (msg) {
    detect_mot__msg__Objects__fini(msg);
  }
  free(msg);
}


bool
detect_mot__msg__Objects__Sequence__init(detect_mot__msg__Objects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  detect_mot__msg__Objects * data = NULL;
  if (size) {
    data = (detect_mot__msg__Objects *)calloc(size, sizeof(detect_mot__msg__Objects));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = detect_mot__msg__Objects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        detect_mot__msg__Objects__fini(&data[i - 1]);
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
detect_mot__msg__Objects__Sequence__fini(detect_mot__msg__Objects__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      detect_mot__msg__Objects__fini(&array->data[i]);
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

detect_mot__msg__Objects__Sequence *
detect_mot__msg__Objects__Sequence__create(size_t size)
{
  detect_mot__msg__Objects__Sequence * array = (detect_mot__msg__Objects__Sequence *)malloc(sizeof(detect_mot__msg__Objects__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = detect_mot__msg__Objects__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
detect_mot__msg__Objects__Sequence__destroy(detect_mot__msg__Objects__Sequence * array)
{
  if (array) {
    detect_mot__msg__Objects__Sequence__fini(array);
  }
  free(array);
}
