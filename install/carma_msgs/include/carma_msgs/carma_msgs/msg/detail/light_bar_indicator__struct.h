// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_msgs:msg/LightBarIndicator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_indicator.h"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__STRUCT_H_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'GREEN_SOLID'.
enum
{
  carma_msgs__msg__LightBarIndicator__GREEN_SOLID = 0
};

/// Constant 'GREEN_FLASH'.
enum
{
  carma_msgs__msg__LightBarIndicator__GREEN_FLASH = 1
};

/// Constant 'YELLOW_SIDES'.
enum
{
  carma_msgs__msg__LightBarIndicator__YELLOW_SIDES = 2
};

/// Constant 'YELLOW_DIM'.
enum
{
  carma_msgs__msg__LightBarIndicator__YELLOW_DIM = 3
};

/// Constant 'YELLOW_FLASH'.
enum
{
  carma_msgs__msg__LightBarIndicator__YELLOW_FLASH = 4
};

/// Constant 'YELLOW_ARROW_LEFT'.
enum
{
  carma_msgs__msg__LightBarIndicator__YELLOW_ARROW_LEFT = 5
};

/// Constant 'YELLOW_ARROW_RIGHT'.
enum
{
  carma_msgs__msg__LightBarIndicator__YELLOW_ARROW_RIGHT = 6
};

/// Constant 'YELLOW_ARROW_OUT'.
enum
{
  carma_msgs__msg__LightBarIndicator__YELLOW_ARROW_OUT = 7
};

/// Struct defined in msg/LightBarIndicator in the package carma_msgs.
/**
  * LightBarIndicator.msg
  *
  * @author Misheel Bayartsengel
  * @version 0.1
  *
  * A component interacting with the lightbar manager can request/release control and set 
  * lightbar indicators by specifying its IDs in here. 
 */
typedef struct carma_msgs__msg__LightBarIndicator
{
  uint8_t indicator;
} carma_msgs__msg__LightBarIndicator;

// Struct for a sequence of carma_msgs__msg__LightBarIndicator.
typedef struct carma_msgs__msg__LightBarIndicator__Sequence
{
  carma_msgs__msg__LightBarIndicator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__msg__LightBarIndicator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__STRUCT_H_
