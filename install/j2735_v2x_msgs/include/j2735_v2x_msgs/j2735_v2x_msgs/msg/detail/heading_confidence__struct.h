// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/HeadingConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/heading_confidence.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__STRUCT_H_

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
  j2735_v2x_msgs__msg__HeadingConfidence__UNAVAILABLE = 0
};

/// Constant 'PREC_10_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_10_DEG = 1
};

/// Constant 'PREC_05_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_05_DEG = 2
};

/// Constant 'PREC_01_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_01_DEG = 3
};

/// Constant 'PREC_001_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_001_DEG = 4
};

/// Constant 'PREC_0005_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_0005_DEG = 5
};

/// Constant 'PREC_0001_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_0001_DEG = 6
};

/// Constant 'PREC_000125_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_000125_DEG = 7
};

/// Struct defined in msg/HeadingConfidence in the package j2735_v2x_msgs.
/**
  * HeadingConfidence.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of HeadingConfidence from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * HeadingConfidence ::= ENUMERATED {
  *    unavailable   (0), -- B'000  Not Equipped or unavailable
  *    prec10deg     (1), -- B'010  10     degrees
  *    prec05deg     (2), -- B'011  5      degrees
  *    prec01deg     (3), -- B'100  1      degrees
  *    prec0-1deg    (4), -- B'101  0.1    degrees
  *    prec0-05deg   (5), -- B'110  0.05   degrees
  *    prec0-01deg   (6), -- B'110  0.01   degrees
  *    prec0-0125deg (7)  -- B'111  0.0125 degrees, aligned with heading LSB
  *    }  -- Encoded as a 3 bit value
 */
typedef struct j2735_v2x_msgs__msg__HeadingConfidence
{
  uint8_t confidence;
} j2735_v2x_msgs__msg__HeadingConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__HeadingConfidence.
typedef struct j2735_v2x_msgs__msg__HeadingConfidence__Sequence
{
  j2735_v2x_msgs__msg__HeadingConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__HeadingConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__STRUCT_H_
