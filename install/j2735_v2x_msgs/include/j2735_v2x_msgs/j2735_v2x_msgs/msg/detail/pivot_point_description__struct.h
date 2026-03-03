// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PivotPointDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/pivot_point_description.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pivot_offset'
#include "j2735_v2x_msgs/msg/detail/offset_b11__struct.h"
// Member 'pivot_angle'
#include "j2735_v2x_msgs/msg/detail/angle__struct.h"
// Member 'pivots'
#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__struct.h"

/// Struct defined in msg/PivotPointDescription in the package j2735_v2x_msgs.
/**
  * PivotPointDescription.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__PivotPointDescription
{
  /// pivotOffset  Offset-B11,
  ///              -- This gives a +- 10m range from the edge of the outline
  ///              -- measured from the edge of the length of this unit
  ///              -- a negative value is offset to inside the units
  ///              -- a positive value is offset beyond the unit
  j2735_v2x_msgs__msg__OffsetB11 pivot_offset;
  /// pivotAngle   Angle,
  ///              -- Measured between the center-line of this unit
  ///              -- and the unit ahead which is pulling it.
  ///              -- This value is required to project the units relative position
  j2735_v2x_msgs__msg__Angle pivot_angle;
  /// pivots       PivotingAllowed,
  ///              -- true if this unit can rotate about the pivot connection point
  j2735_v2x_msgs__msg__PivotingAllowed pivots;
} j2735_v2x_msgs__msg__PivotPointDescription;

// Struct for a sequence of j2735_v2x_msgs__msg__PivotPointDescription.
typedef struct j2735_v2x_msgs__msg__PivotPointDescription__Sequence
{
  j2735_v2x_msgs__msg__PivotPointDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PivotPointDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__STRUCT_H_
