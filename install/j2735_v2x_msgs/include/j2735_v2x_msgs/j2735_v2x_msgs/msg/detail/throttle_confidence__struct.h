// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ThrottleConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/throttle_confidence.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__THROTTLE_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__THROTTLE_CONFIDENCE__STRUCT_H_

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
  j2735_v2x_msgs__msg__ThrottleConfidence__UNAVAILABLE = 0
};

/// Constant 'PREC_10_PERCENT'.
enum
{
  j2735_v2x_msgs__msg__ThrottleConfidence__PREC_10_PERCENT = 1
};

/// Constant 'PREC_1_PERCENT'.
enum
{
  j2735_v2x_msgs__msg__ThrottleConfidence__PREC_1_PERCENT = 2
};

/// Constant 'PREC_05_PERCENT'.
enum
{
  j2735_v2x_msgs__msg__ThrottleConfidence__PREC_05_PERCENT = 3
};

/// Struct defined in msg/ThrottleConfidence in the package j2735_v2x_msgs.
/**
  * ThrottleConfidence.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of ThrottleConfidence from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * ThrottleConfidence ::= ENUMERATED {
  *    unavailable     (0), -- B'00  Not Equipped or unavailable
  *    prec10percent   (1), -- B'01  10  percent Confidence level
  *    prec1percent    (2), -- B'10  1   percent Confidence level
  *    prec0-5percent  (3)  -- B'11  0.5 percent Confidence level
  *    }
 */
typedef struct j2735_v2x_msgs__msg__ThrottleConfidence
{
  uint8_t confidence;
} j2735_v2x_msgs__msg__ThrottleConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__ThrottleConfidence.
typedef struct j2735_v2x_msgs__msg__ThrottleConfidence__Sequence
{
  j2735_v2x_msgs__msg__ThrottleConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ThrottleConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__THROTTLE_CONFIDENCE__STRUCT_H_
