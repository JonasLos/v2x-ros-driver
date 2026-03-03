// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SignalControlZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/signal_control_zone.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SIGNAL_CONTROL_ZONE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SIGNAL_CONTROL_ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/SignalControlZone in the package j2735_v2x_msgs.
/**
  * SignalControlZone.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * SignalControlZone ::= SEQUENCE {
  * zone RegionalExtension {{REGION.Reg-SignalControlZone}},
  * ...
  * }
  *
  * regional_extension  #TODO: RegionalExtensions are not yet implemented in asn1c
 */
typedef struct j2735_v2x_msgs__msg__SignalControlZone
{
  uint8_t structure_needs_at_least_one_member;
} j2735_v2x_msgs__msg__SignalControlZone;

// Struct for a sequence of j2735_v2x_msgs__msg__SignalControlZone.
typedef struct j2735_v2x_msgs__msg__SignalControlZone__Sequence
{
  j2735_v2x_msgs__msg__SignalControlZone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SignalControlZone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SIGNAL_CONTROL_ZONE__STRUCT_H_
