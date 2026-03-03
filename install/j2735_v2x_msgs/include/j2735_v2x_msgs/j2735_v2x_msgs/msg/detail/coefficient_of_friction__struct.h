// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/CoefficientOfFriction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/coefficient_of_friction.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'COEFFICIENT_MIN'.
enum
{
  j2735_v2x_msgs__msg__CoefficientOfFriction__COEFFICIENT_MIN = 0
};

/// Constant 'COEFFICIENT_MAX'.
enum
{
  j2735_v2x_msgs__msg__CoefficientOfFriction__COEFFICIENT_MAX = 50
};

/// Constant 'COEFFICIENT_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__CoefficientOfFriction__COEFFICIENT_UNAVAILABLE = 0
};

/// Struct defined in msg/CoefficientOfFriction in the package j2735_v2x_msgs.
/**
  * CoefficientOfFriction.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__CoefficientOfFriction
{
  /// CoefficientOfFriction ::= INTEGER (0..50)
  ///    -- where 0 = 0.00 micro (frictionless), also used when data is unavailable
  ///    -- and  50 = 1.00 micro, in steps of 0.02
  uint8_t coefficient;
} j2735_v2x_msgs__msg__CoefficientOfFriction;

// Struct for a sequence of j2735_v2x_msgs__msg__CoefficientOfFriction.
typedef struct j2735_v2x_msgs__msg__CoefficientOfFriction__Sequence
{
  j2735_v2x_msgs__msg__CoefficientOfFriction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__CoefficientOfFriction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_H_
