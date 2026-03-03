// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/turn_signal.h"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LEFT'.
enum
{
  carma_driver_msgs__msg__TurnSignal__LEFT = 0
};

/// Constant 'RIGHT'.
enum
{
  carma_driver_msgs__msg__TurnSignal__RIGHT = 1
};

/// Constant 'NEUTRAL'.
enum
{
  carma_driver_msgs__msg__TurnSignal__NEUTRAL = 2
};

/// Struct defined in msg/TurnSignal in the package carma_driver_msgs.
/**
  * TurnSignal.msg
 */
typedef struct carma_driver_msgs__msg__TurnSignal
{
  /// Message with the state of the TurnSignal Lever
  uint8_t state;
} carma_driver_msgs__msg__TurnSignal;

// Struct for a sequence of carma_driver_msgs__msg__TurnSignal.
typedef struct carma_driver_msgs__msg__TurnSignal__Sequence
{
  carma_driver_msgs__msg__TurnSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__msg__TurnSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_
