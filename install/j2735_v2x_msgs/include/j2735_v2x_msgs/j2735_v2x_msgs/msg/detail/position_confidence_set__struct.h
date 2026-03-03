// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PositionConfidenceSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/position_confidence_set.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pos'
#include "j2735_v2x_msgs/msg/detail/position_confidence__struct.h"
// Member 'elevation'
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__struct.h"

/// Struct defined in msg/PositionConfidenceSet in the package j2735_v2x_msgs.
/**
  * PositionConfidenceSet.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PositionConfidenceSet from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PositionConfidenceSet ::= SEQUENCE {
  *    pos        PositionConfidence, -- for both horizontal directions
  *    elevation  ElevationConfidence 
  *    }
 */
typedef struct j2735_v2x_msgs__msg__PositionConfidenceSet
{
  j2735_v2x_msgs__msg__PositionConfidence pos;
  j2735_v2x_msgs__msg__ElevationConfidence elevation;
} j2735_v2x_msgs__msg__PositionConfidenceSet;

// Struct for a sequence of j2735_v2x_msgs__msg__PositionConfidenceSet.
typedef struct j2735_v2x_msgs__msg__PositionConfidenceSet__Sequence
{
  j2735_v2x_msgs__msg__PositionConfidenceSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PositionConfidenceSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__STRUCT_H_
