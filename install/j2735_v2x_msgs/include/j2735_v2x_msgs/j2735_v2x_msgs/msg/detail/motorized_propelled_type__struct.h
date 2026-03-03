// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/MotorizedPropelledType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/motorized_propelled_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOTORIZED_PROPELLED_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MOTORIZED_PROPELLED_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__MotorizedPropelledType__UNAVAILABLE = 0
};

/// Constant 'OTHER_TYPES'.
enum
{
  j2735_v2x_msgs__msg__MotorizedPropelledType__OTHER_TYPES = 1
};

/// Constant 'WHEELCHAIR'.
enum
{
  j2735_v2x_msgs__msg__MotorizedPropelledType__WHEELCHAIR = 2
};

/// Constant 'BICYCLE'.
enum
{
  j2735_v2x_msgs__msg__MotorizedPropelledType__BICYCLE = 3
};

/// Constant 'SCOOTER'.
enum
{
  j2735_v2x_msgs__msg__MotorizedPropelledType__SCOOTER = 4
};

/// Constant 'SELF_BALANCING_DEVICE'.
enum
{
  j2735_v2x_msgs__msg__MotorizedPropelledType__SELF_BALANCING_DEVICE = 5
};

/// Struct defined in msg/MotorizedPropelledType in the package j2735_v2x_msgs.
/**
  * MotorizedPropelledType.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of MotorizedPropelledType from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * MotorizedPropelledType ::= ENUMERATED {   
  *    unavailable         (0),
  *    otherTypes          (1), -- any method not listed below
  *    wheelChair          (2),
  *    bicycle             (3),
  *    scooter             (4),
  *    selfBalancingDevice (5), -- such as Segway
  *    ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__MotorizedPropelledType
{
  uint8_t type;
} j2735_v2x_msgs__msg__MotorizedPropelledType;

// Struct for a sequence of j2735_v2x_msgs__msg__MotorizedPropelledType.
typedef struct j2735_v2x_msgs__msg__MotorizedPropelledType__Sequence
{
  j2735_v2x_msgs__msg__MotorizedPropelledType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__MotorizedPropelledType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOTORIZED_PROPELLED_TYPE__STRUCT_H_
