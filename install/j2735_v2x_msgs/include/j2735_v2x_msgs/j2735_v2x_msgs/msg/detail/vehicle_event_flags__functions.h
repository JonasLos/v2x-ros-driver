// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from j2735_v2x_msgs:msg/VehicleEventFlags.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_event_flags.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__FUNCTIONS_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "j2735_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__struct.h"

/// Initialize msg/VehicleEventFlags message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * j2735_v2x_msgs__msg__VehicleEventFlags
 * )) before or use
 * j2735_v2x_msgs__msg__VehicleEventFlags__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__VehicleEventFlags__init(j2735_v2x_msgs__msg__VehicleEventFlags * msg);

/// Finalize msg/VehicleEventFlags message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__VehicleEventFlags__fini(j2735_v2x_msgs__msg__VehicleEventFlags * msg);

/// Create msg/VehicleEventFlags message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * j2735_v2x_msgs__msg__VehicleEventFlags__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__VehicleEventFlags *
j2735_v2x_msgs__msg__VehicleEventFlags__create(void);

/// Destroy msg/VehicleEventFlags message.
/**
 * It calls
 * j2735_v2x_msgs__msg__VehicleEventFlags__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__VehicleEventFlags__destroy(j2735_v2x_msgs__msg__VehicleEventFlags * msg);

/// Check for msg/VehicleEventFlags message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__VehicleEventFlags__are_equal(const j2735_v2x_msgs__msg__VehicleEventFlags * lhs, const j2735_v2x_msgs__msg__VehicleEventFlags * rhs);

/// Copy a msg/VehicleEventFlags message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__VehicleEventFlags__copy(
  const j2735_v2x_msgs__msg__VehicleEventFlags * input,
  j2735_v2x_msgs__msg__VehicleEventFlags * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VehicleEventFlags__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__VehicleEventFlags__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VehicleEventFlags__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VehicleEventFlags__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/VehicleEventFlags messages.
/**
 * It allocates the memory for the number of elements and calls
 * j2735_v2x_msgs__msg__VehicleEventFlags__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__VehicleEventFlags__Sequence__init(j2735_v2x_msgs__msg__VehicleEventFlags__Sequence * array, size_t size);

/// Finalize array of msg/VehicleEventFlags messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__VehicleEventFlags__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__VehicleEventFlags__Sequence__fini(j2735_v2x_msgs__msg__VehicleEventFlags__Sequence * array);

/// Create array of msg/VehicleEventFlags messages.
/**
 * It allocates the memory for the array and calls
 * j2735_v2x_msgs__msg__VehicleEventFlags__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__VehicleEventFlags__Sequence *
j2735_v2x_msgs__msg__VehicleEventFlags__Sequence__create(size_t size);

/// Destroy array of msg/VehicleEventFlags messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__VehicleEventFlags__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__VehicleEventFlags__Sequence__destroy(j2735_v2x_msgs__msg__VehicleEventFlags__Sequence * array);

/// Check for msg/VehicleEventFlags message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__VehicleEventFlags__Sequence__are_equal(const j2735_v2x_msgs__msg__VehicleEventFlags__Sequence * lhs, const j2735_v2x_msgs__msg__VehicleEventFlags__Sequence * rhs);

/// Copy an array of msg/VehicleEventFlags messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__VehicleEventFlags__Sequence__copy(
  const j2735_v2x_msgs__msg__VehicleEventFlags__Sequence * input,
  j2735_v2x_msgs__msg__VehicleEventFlags__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__FUNCTIONS_H_
