// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TransmissionAndSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/transmission_and_speed.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__struct.h"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/velocity__struct.h"

/// Struct defined in msg/TransmissionAndSpeed in the package j2735_v2x_msgs.
/**
  * TransmissionAndSpeed.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of TransmissionAndSpeed from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * TransmissionAndSpeed ::= SEQUENCE {
  *    transmisson   TransmissionState,
  *    speed         Velocity
  *    }
 */
typedef struct j2735_v2x_msgs__msg__TransmissionAndSpeed
{
  j2735_v2x_msgs__msg__TransmissionState transmission;
  j2735_v2x_msgs__msg__Velocity speed;
} j2735_v2x_msgs__msg__TransmissionAndSpeed;

// Struct for a sequence of j2735_v2x_msgs__msg__TransmissionAndSpeed.
typedef struct j2735_v2x_msgs__msg__TransmissionAndSpeed__Sequence
{
  j2735_v2x_msgs__msg__TransmissionAndSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TransmissionAndSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_H_
