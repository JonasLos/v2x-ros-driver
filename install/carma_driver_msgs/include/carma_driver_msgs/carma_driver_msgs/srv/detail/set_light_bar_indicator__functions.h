// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_driver_msgs:srv/SetLightBarIndicator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/set_light_bar_indicator.h"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__FUNCTIONS_H_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__FUNCTIONS_H_

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
#include "carma_driver_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetLightBarIndicator__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__SetLightBarIndicator__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetLightBarIndicator__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetLightBarIndicator__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SetLightBarIndicator message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_driver_msgs__srv__SetLightBarIndicator_Request
 * )) before or use
 * carma_driver_msgs__srv__SetLightBarIndicator_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__init(carma_driver_msgs__srv__SetLightBarIndicator_Request * msg);

/// Finalize srv/SetLightBarIndicator message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Request__fini(carma_driver_msgs__srv__SetLightBarIndicator_Request * msg);

/// Create srv/SetLightBarIndicator message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
carma_driver_msgs__srv__SetLightBarIndicator_Request *
carma_driver_msgs__srv__SetLightBarIndicator_Request__create(void);

/// Destroy srv/SetLightBarIndicator message.
/**
 * It calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Request__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Request * msg);

/// Check for srv/SetLightBarIndicator message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Request * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Request * rhs);

/// Copy a srv/SetLightBarIndicator message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Request * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetLightBarIndicator_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__SetLightBarIndicator_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetLightBarIndicator_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetLightBarIndicator_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetLightBarIndicator messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__init(carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetLightBarIndicator messages.
/**
 * It calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__fini(carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * array);

/// Create array of srv/SetLightBarIndicator messages.
/**
 * It allocates the memory for the array and calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence *
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetLightBarIndicator messages.
/**
 * It calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * array);

/// Check for srv/SetLightBarIndicator message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * rhs);

/// Copy an array of srv/SetLightBarIndicator messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * output);

/// Initialize srv/SetLightBarIndicator message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_driver_msgs__srv__SetLightBarIndicator_Response
 * )) before or use
 * carma_driver_msgs__srv__SetLightBarIndicator_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__init(carma_driver_msgs__srv__SetLightBarIndicator_Response * msg);

/// Finalize srv/SetLightBarIndicator message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Response__fini(carma_driver_msgs__srv__SetLightBarIndicator_Response * msg);

/// Create srv/SetLightBarIndicator message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
carma_driver_msgs__srv__SetLightBarIndicator_Response *
carma_driver_msgs__srv__SetLightBarIndicator_Response__create(void);

/// Destroy srv/SetLightBarIndicator message.
/**
 * It calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Response__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Response * msg);

/// Check for srv/SetLightBarIndicator message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Response * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Response * rhs);

/// Copy a srv/SetLightBarIndicator message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Response * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetLightBarIndicator_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__SetLightBarIndicator_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetLightBarIndicator_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetLightBarIndicator_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetLightBarIndicator messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__init(carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetLightBarIndicator messages.
/**
 * It calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__fini(carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * array);

/// Create array of srv/SetLightBarIndicator messages.
/**
 * It allocates the memory for the array and calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence *
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetLightBarIndicator messages.
/**
 * It calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * array);

/// Check for srv/SetLightBarIndicator message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * rhs);

/// Copy an array of srv/SetLightBarIndicator messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * output);

/// Initialize srv/SetLightBarIndicator message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_driver_msgs__srv__SetLightBarIndicator_Event
 * )) before or use
 * carma_driver_msgs__srv__SetLightBarIndicator_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__init(carma_driver_msgs__srv__SetLightBarIndicator_Event * msg);

/// Finalize srv/SetLightBarIndicator message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Event__fini(carma_driver_msgs__srv__SetLightBarIndicator_Event * msg);

/// Create srv/SetLightBarIndicator message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
carma_driver_msgs__srv__SetLightBarIndicator_Event *
carma_driver_msgs__srv__SetLightBarIndicator_Event__create(void);

/// Destroy srv/SetLightBarIndicator message.
/**
 * It calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Event__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Event * msg);

/// Check for srv/SetLightBarIndicator message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Event * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Event * rhs);

/// Copy a srv/SetLightBarIndicator message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Event * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetLightBarIndicator_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__SetLightBarIndicator_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetLightBarIndicator_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetLightBarIndicator_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetLightBarIndicator messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__init(carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * array, size_t size);

/// Finalize array of srv/SetLightBarIndicator messages.
/**
 * It calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__fini(carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * array);

/// Create array of srv/SetLightBarIndicator messages.
/**
 * It allocates the memory for the array and calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence *
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__create(size_t size);

/// Destroy array of srv/SetLightBarIndicator messages.
/**
 * It calls
 * carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * array);

/// Check for srv/SetLightBarIndicator message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * rhs);

/// Copy an array of srv/SetLightBarIndicator messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__FUNCTIONS_H_
