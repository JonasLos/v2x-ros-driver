// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TractionControlStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traction_control_status.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRACTION_CONTROL_STATUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRACTION_CONTROL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNAVAILABLE'.
/**
  * enumeration values for status:
 */
enum
{
  j2735_v2x_msgs__msg__TractionControlStatus__UNAVAILABLE = 0
};

/// Constant 'OFF'.
enum
{
  j2735_v2x_msgs__msg__TractionControlStatus__OFF = 1
};

/// Constant 'ON'.
enum
{
  j2735_v2x_msgs__msg__TractionControlStatus__ON = 2
};

/// Constant 'ENGAGED'.
enum
{
  j2735_v2x_msgs__msg__TractionControlStatus__ENGAGED = 3
};

/// Struct defined in msg/TractionControlStatus in the package j2735_v2x_msgs.
/**
  * TractionControlStatus.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
 */
typedef struct j2735_v2x_msgs__msg__TractionControlStatus
{
  /// TractionControlStatus ::= ENUMERATED {
  ///    unavailable (0), -- B'00  Not Equipped with traction control
  ///                     --       or traction control status is unavailable
  ///    off         (1), -- B'01  traction control is Off
  ///    on          (2), -- B'10  traction control is On (but not Engaged)
  ///    engaged     (3)  -- B'11  traction control is Engaged
  ///    }
  uint8_t traction_control_status;
} j2735_v2x_msgs__msg__TractionControlStatus;

// Struct for a sequence of j2735_v2x_msgs__msg__TractionControlStatus.
typedef struct j2735_v2x_msgs__msg__TractionControlStatus__Sequence
{
  j2735_v2x_msgs__msg__TractionControlStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TractionControlStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRACTION_CONTROL_STATUS__STRUCT_H_
