// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from j2735_v2x_msgs:msg/LaneAttributesCrosswalk.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_crosswalk.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__FUNCTIONS_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__FUNCTIONS_H_

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

#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__struct.h"

/// Initialize msg/LaneAttributesCrosswalk message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * j2735_v2x_msgs__msg__LaneAttributesCrosswalk
 * )) before or use
 * j2735_v2x_msgs__msg__LaneAttributesCrosswalk__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__init(j2735_v2x_msgs__msg__LaneAttributesCrosswalk * msg);

/// Finalize msg/LaneAttributesCrosswalk message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__fini(j2735_v2x_msgs__msg__LaneAttributesCrosswalk * msg);

/// Create msg/LaneAttributesCrosswalk message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * j2735_v2x_msgs__msg__LaneAttributesCrosswalk__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__LaneAttributesCrosswalk *
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__create(void);

/// Destroy msg/LaneAttributesCrosswalk message.
/**
 * It calls
 * j2735_v2x_msgs__msg__LaneAttributesCrosswalk__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__destroy(j2735_v2x_msgs__msg__LaneAttributesCrosswalk * msg);

/// Check for msg/LaneAttributesCrosswalk message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__are_equal(const j2735_v2x_msgs__msg__LaneAttributesCrosswalk * lhs, const j2735_v2x_msgs__msg__LaneAttributesCrosswalk * rhs);

/// Copy a msg/LaneAttributesCrosswalk message.
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
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__copy(
  const j2735_v2x_msgs__msg__LaneAttributesCrosswalk * input,
  j2735_v2x_msgs__msg__LaneAttributesCrosswalk * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/LaneAttributesCrosswalk messages.
/**
 * It allocates the memory for the number of elements and calls
 * j2735_v2x_msgs__msg__LaneAttributesCrosswalk__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence__init(j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence * array, size_t size);

/// Finalize array of msg/LaneAttributesCrosswalk messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__LaneAttributesCrosswalk__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence__fini(j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence * array);

/// Create array of msg/LaneAttributesCrosswalk messages.
/**
 * It allocates the memory for the array and calls
 * j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence *
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence__create(size_t size);

/// Destroy array of msg/LaneAttributesCrosswalk messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence__destroy(j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence * array);

/// Check for msg/LaneAttributesCrosswalk message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence__are_equal(const j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence * lhs, const j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence * rhs);

/// Copy an array of msg/LaneAttributesCrosswalk messages.
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
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence__copy(
  const j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence * input,
  j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__FUNCTIONS_H_
