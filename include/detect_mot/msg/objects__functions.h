// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from detect_mot:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__OBJECTS__FUNCTIONS_H_
#define DETECT_MOT__MSG__OBJECTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "detect_mot/msg/rosidl_generator_c__visibility_control.h"

#include "detect_mot/msg/objects__struct.h"

/// Initialize msg/Objects message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * detect_mot__msg__Objects
 * )) before or use
 * detect_mot__msg__Objects__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
bool
detect_mot__msg__Objects__init(detect_mot__msg__Objects * msg);

/// Finalize msg/Objects message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
void
detect_mot__msg__Objects__fini(detect_mot__msg__Objects * msg);

/// Create msg/Objects message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * detect_mot__msg__Objects__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
detect_mot__msg__Objects *
detect_mot__msg__Objects__create();

/// Destroy msg/Objects message.
/**
 * It calls
 * detect_mot__msg__Objects__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
void
detect_mot__msg__Objects__destroy(detect_mot__msg__Objects * msg);


/// Initialize array of msg/Objects messages.
/**
 * It allocates the memory for the number of elements and calls
 * detect_mot__msg__Objects__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
bool
detect_mot__msg__Objects__Sequence__init(detect_mot__msg__Objects__Sequence * array, size_t size);

/// Finalize array of msg/Objects messages.
/**
 * It calls
 * detect_mot__msg__Objects__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
void
detect_mot__msg__Objects__Sequence__fini(detect_mot__msg__Objects__Sequence * array);

/// Create array of msg/Objects messages.
/**
 * It allocates the memory for the array and calls
 * detect_mot__msg__Objects__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
detect_mot__msg__Objects__Sequence *
detect_mot__msg__Objects__Sequence__create(size_t size);

/// Destroy array of msg/Objects messages.
/**
 * It calls
 * detect_mot__msg__Objects__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_detect_mot
void
detect_mot__msg__Objects__Sequence__destroy(detect_mot__msg__Objects__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DETECT_MOT__MSG__OBJECTS__FUNCTIONS_H_
