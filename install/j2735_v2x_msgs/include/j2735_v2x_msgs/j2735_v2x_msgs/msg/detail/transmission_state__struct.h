// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TransmissionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/transmission_state.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NEUTRAL'.
/**
  * enumeration values for status:
 */
enum
{
  j2735_v2x_msgs__msg__TransmissionState__NEUTRAL = 0
};

/// Constant 'PARK'.
enum
{
  j2735_v2x_msgs__msg__TransmissionState__PARK = 1
};

/// Constant 'FORWARDGEARS'.
enum
{
  j2735_v2x_msgs__msg__TransmissionState__FORWARDGEARS = 2
};

/// Constant 'REVERSEGEARS'.
enum
{
  j2735_v2x_msgs__msg__TransmissionState__REVERSEGEARS = 3
};

/// Constant 'RESERVED1'.
enum
{
  j2735_v2x_msgs__msg__TransmissionState__RESERVED1 = 4
};

/// Constant 'RESERVED2'.
enum
{
  j2735_v2x_msgs__msg__TransmissionState__RESERVED2 = 5
};

/// Constant 'RESERVED3'.
enum
{
  j2735_v2x_msgs__msg__TransmissionState__RESERVED3 = 6
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__TransmissionState__UNAVAILABLE = 7
};

/// Struct defined in msg/TransmissionState in the package j2735_v2x_msgs.
/**
  * TransmissionState.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * Provide the current state of the vehicle transmission.
 */
typedef struct j2735_v2x_msgs__msg__TransmissionState
{
  /// TransmissionState ::= ENUMERATED {
  ///    neutral      (0), -- Neutral
  ///    park         (1), -- Park
  ///    forwardGears (2), -- Forward gears
  ///    reverseGears (3), -- Reverse gears
  ///    reserved1    (4),
  ///    reserved2    (5),
  ///    reserved3    (6),
  ///    unavailable  (7)  -- not-equipped or unavailable value,
  ///    -- Any related speed is relative to the vehicle reference frame used
  ///    }
  uint8_t transmission_state;
} j2735_v2x_msgs__msg__TransmissionState;

// Struct for a sequence of j2735_v2x_msgs__msg__TransmissionState.
typedef struct j2735_v2x_msgs__msg__TransmissionState__Sequence
{
  j2735_v2x_msgs__msg__TransmissionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TransmissionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__STRUCT_H_
