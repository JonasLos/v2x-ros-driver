// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_msgs:msg/UIInstructions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/ui_instructions.h"


#ifndef CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__STRUCT_H_
#define CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'INFO'.
/**
  * Notification of status or state change
 */
enum
{
  carma_msgs__msg__UIInstructions__INFO = 0
};

/// Constant 'ACK_REQUIRED'.
/**
  * A command requiring driver acknowledgement
 */
enum
{
  carma_msgs__msg__UIInstructions__ACK_REQUIRED = 1
};

/// Constant 'NO_ACK_REQUIRED'.
/**
  * A command that does not require driver acknowledgement
 */
enum
{
  carma_msgs__msg__UIInstructions__NO_ACK_REQUIRED = 2
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'msg'
// Member 'response_service'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UIInstructions in the package carma_msgs.
/**
  * UIInstructions.msg
  *
  * Describes simple instructions for the CARMA UI to preform
  *
  * @version 0.1
 */
typedef struct carma_msgs__msg__UIInstructions
{
  /// Time stamp
  builtin_interfaces__msg__Time stamp;
  /// The message to send
  rosidl_runtime_c__String msg;
  /// Enum identifying the contents of this message as informational or requireing acknowledgement
  uint8_t type;
  /// Name of a simple service to be called when a acknowledgement is required (service must be std_msgs/Bool)
  rosidl_runtime_c__String response_service;
} carma_msgs__msg__UIInstructions;

// Struct for a sequence of carma_msgs__msg__UIInstructions.
typedef struct carma_msgs__msg__UIInstructions__Sequence
{
  carma_msgs__msg__UIInstructions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__msg__UIInstructions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__STRUCT_H_
