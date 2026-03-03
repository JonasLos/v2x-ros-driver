// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_msgs:msg/SystemAlert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/system_alert.h"


#ifndef CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__STRUCT_H_
#define CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CAUTION'.
/**
  * enumeration values for type.
  * NOT_READY indicates that system is starting up
  * DRIVERS_READY is a one-time indicator that the startup sequence is complete.
 */
enum
{
  carma_msgs__msg__SystemAlert__CAUTION = 1
};

/// Constant 'WARNING'.
enum
{
  carma_msgs__msg__SystemAlert__WARNING = 2
};

/// Constant 'FATAL'.
enum
{
  carma_msgs__msg__SystemAlert__FATAL = 3
};

/// Constant 'NOT_READY'.
enum
{
  carma_msgs__msg__SystemAlert__NOT_READY = 4
};

/// Constant 'DRIVERS_READY'.
enum
{
  carma_msgs__msg__SystemAlert__DRIVERS_READY = 5
};

/// Constant 'SHUTDOWN'.
enum
{
  carma_msgs__msg__SystemAlert__SHUTDOWN = 6
};

// Include directives for member types
// Member 'description'
// Member 'source_node'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemAlert in the package carma_msgs.
/**
  * SystemAlert.msg
  *
  * Broadcasts important alerts related to system health.
 */
typedef struct carma_msgs__msg__SystemAlert
{
  /// the enumerated alert type
  uint8_t type;
  /// the specific alert message in human readable form
  rosidl_runtime_c__String description;
  /// The fully specified name of the node which generated this message
  rosidl_runtime_c__String source_node;
} carma_msgs__msg__SystemAlert;

// Struct for a sequence of carma_msgs__msg__SystemAlert.
typedef struct carma_msgs__msg__SystemAlert__Sequence
{
  carma_msgs__msg__SystemAlert * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__msg__SystemAlert__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__STRUCT_H_
