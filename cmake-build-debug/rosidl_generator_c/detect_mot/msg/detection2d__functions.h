// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from detect_mot:msg/Detection2d.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__DETECTION2D__FUNCTIONS_H_
#define DETECT_MOT__MSG__DETECTION2D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "detect_mot/msg/rosidl_generator_c__visibility_control.h"

#include "detect_mot/msg/detection2d__struct.h"

/// Initialize msg/Detection2d message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * detect_mot__msg__Detection2d
 * )) before or use
 * detect_mot__msg__Detection2d__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
bool
detect_mot__msg__Detection2d__init(detect_mot__msg__Detection2d * msg);

/// Finalize msg/Detection2d message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
void
detect_mot__msg__Detection2d__fini(detect_mot__msg__Detection2d * msg);

/// Create msg/Detection2d message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * detect_mot__msg__Detection2d__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
detect_mot__msg__Detection2d *
detect_mot__msg__Detection2d__create();

/// Destroy msg/Detection2d message.
/**
 * It calls
 * detect_mot__msg__Detection2d__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
void
detect_mot__msg__Detection2d__destroy(detect_mot__msg__Detection2d * msg);


/// Initialize array of msg/Detection2d messages.
/**
 * It allocates the memory for the number of elements and calls
 * detect_mot__msg__Detection2d__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
bool
detect_mot__msg__Detection2d__Sequence__init(detect_mot__msg__Detection2d__Sequence * array, size_t size);

/// Finalize array of msg/Detection2d messages.
/**
 * It calls
 * detect_mot__msg__Detection2d__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
void
detect_mot__msg__Detection2d__Sequence__fini(detect_mot__msg__Detection2d__Sequence * array);

/// Create array of msg/Detection2d messages.
/**
 * It allocates the memory for the array and calls
 * detect_mot__msg__Detection2d__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
detect_mot__msg__Detection2d__Sequence *
detect_mot__msg__Detection2d__Sequence__create(size_t size);

/// Destroy array of msg/Detection2d messages.
/**
 * It calls
 * detect_mot__msg__Detection2d__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
void
detect_mot__msg__Detection2d__Sequence__destroy(detect_mot__msg__Detection2d__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DETECT_MOT__MSG__DETECTION2D__FUNCTIONS_H_
