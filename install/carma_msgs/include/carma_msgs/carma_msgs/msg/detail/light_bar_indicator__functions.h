// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_msgs:msg/LightBarIndicator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_indicator.h"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__FUNCTIONS_H_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__FUNCTIONS_H_

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
#include "carma_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_msgs/msg/detail/light_bar_indicator__struct.h"

/// Initialize msg/LightBarIndicator message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_msgs__msg__LightBarIndicator
 * )) before or use
 * carma_msgs__msg__LightBarIndicator__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__LightBarIndicator__init(carma_msgs__msg__LightBarIndicator * msg);

/// Finalize msg/LightBarIndicator message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
void
carma_msgs__msg__LightBarIndicator__fini(carma_msgs__msg__LightBarIndicator * msg);

/// Create msg/LightBarIndicator message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_msgs__msg__LightBarIndicator__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
carma_msgs__msg__LightBarIndicator *
carma_msgs__msg__LightBarIndicator__create(void);

/// Destroy msg/LightBarIndicator message.
/**
 * It calls
 * carma_msgs__msg__LightBarIndicator__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
void
carma_msgs__msg__LightBarIndicator__destroy(carma_msgs__msg__LightBarIndicator * msg);

/// Check for msg/LightBarIndicator message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__LightBarIndicator__are_equal(const carma_msgs__msg__LightBarIndicator * lhs, const carma_msgs__msg__LightBarIndicator * rhs);

/// Copy a msg/LightBarIndicator message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__LightBarIndicator__copy(
  const carma_msgs__msg__LightBarIndicator * input,
  carma_msgs__msg__LightBarIndicator * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__msg__LightBarIndicator__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__msg__LightBarIndicator__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__msg__LightBarIndicator__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__msg__LightBarIndicator__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/LightBarIndicator messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_msgs__msg__LightBarIndicator__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__LightBarIndicator__Sequence__init(carma_msgs__msg__LightBarIndicator__Sequence * array, size_t size);

/// Finalize array of msg/LightBarIndicator messages.
/**
 * It calls
 * carma_msgs__msg__LightBarIndicator__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
void
carma_msgs__msg__LightBarIndicator__Sequence__fini(carma_msgs__msg__LightBarIndicator__Sequence * array);

/// Create array of msg/LightBarIndicator messages.
/**
 * It allocates the memory for the array and calls
 * carma_msgs__msg__LightBarIndicator__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
carma_msgs__msg__LightBarIndicator__Sequence *
carma_msgs__msg__LightBarIndicator__Sequence__create(size_t size);

/// Destroy array of msg/LightBarIndicator messages.
/**
 * It calls
 * carma_msgs__msg__LightBarIndicator__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
void
carma_msgs__msg__LightBarIndicator__Sequence__destroy(carma_msgs__msg__LightBarIndicator__Sequence * array);

/// Check for msg/LightBarIndicator message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__LightBarIndicator__Sequence__are_equal(const carma_msgs__msg__LightBarIndicator__Sequence * lhs, const carma_msgs__msg__LightBarIndicator__Sequence * rhs);

/// Copy an array of msg/LightBarIndicator messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__LightBarIndicator__Sequence__copy(
  const carma_msgs__msg__LightBarIndicator__Sequence * input,
  carma_msgs__msg__LightBarIndicator__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__FUNCTIONS_H_
