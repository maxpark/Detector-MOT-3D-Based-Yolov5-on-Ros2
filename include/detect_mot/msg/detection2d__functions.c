// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from detect_mot:msg/Detection2d.idl
// generated code does not contain a copyright notice
#include "detect_mot/msg/detection2d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `classname`
#include "rosidl_generator_c/string_functions.h"

bool
detect_mot__msg__Detection2d__init(detect_mot__msg__Detection2d * msg)
{
  if (!msg) {
    return false;
  }
  // classid
  // classname
  if (!rosidl_generator_c__String__init(&msg->classname)) {
    detect_mot__msg__Detection2d__fini(msg);
    return false;
  }
  // bbox
  return true;
}

void
detect_mot__msg__Detection2d__fini(detect_mot__msg__Detection2d * msg)
{
  if (!msg) {
    return;
  }
  // classid
  // classname
  rosidl_generator_c__String__fini(&msg->classname);
  // bbox
}

detect_mot__msg__Detection2d *
detect_mot__msg__Detection2d__create()
{
  detect_mot__msg__Detection2d * msg = (detect_mot__msg__Detection2d *)malloc(sizeof(detect_mot__msg__Detection2d));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(detect_mot__msg__Detection2d));
  bool success = detect_mot__msg__Detection2d__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
detect_mot__msg__Detection2d__destroy(detect_mot__msg__Detection2d * msg)
{
  if (msg) {
    detect_mot__msg__Detection2d__fini(msg);
  }
  free(msg);
}


bool
detect_mot__msg__Detection2d__Sequence__init(detect_mot__msg__Detection2d__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  detect_mot__msg__Detection2d * data = NULL;
  if (size) {
    data = (detect_mot__msg__Detection2d *)calloc(size, sizeof(detect_mot__msg__Detection2d));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = detect_mot__msg__Detection2d__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        detect_mot__msg__Detection2d__fini(&data[i - 1]);
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
detect_mot__msg__Detection2d__Sequence__fini(detect_mot__msg__Detection2d__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      detect_mot__msg__Detection2d__fini(&array->data[i]);
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

detect_mot__msg__Detection2d__Sequence *
detect_mot__msg__Detection2d__Sequence__create(size_t size)
{
  detect_mot__msg__Detection2d__Sequence * array = (detect_mot__msg__Detection2d__Sequence *)malloc(sizeof(detect_mot__msg__Detection2d__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = detect_mot__msg__Detection2d__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
detect_mot__msg__Detection2d__Sequence__destroy(detect_mot__msg__Detection2d__Sequence * array)
{
  if (array) {
    detect_mot__msg__Detection2d__Sequence__fini(array);
  }
  free(array);
}
