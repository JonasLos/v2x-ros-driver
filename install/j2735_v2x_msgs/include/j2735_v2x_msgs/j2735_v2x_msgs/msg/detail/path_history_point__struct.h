// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/path_history_point.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'lat_offset'
// Member 'lon_offset'
#include "j2735_v2x_msgs/msg/detail/offset_llb18__struct.h"
// Member 'elevation_offset'
#include "j2735_v2x_msgs/msg/detail/vert_offset_b12__struct.h"
// Member 'time_offset'
#include "j2735_v2x_msgs/msg/detail/time_offset__struct.h"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/speed__struct.h"
// Member 'pos_accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__struct.h"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/coarse_heading__struct.h"

/// Struct defined in msg/PathHistoryPoint in the package j2735_v2x_msgs.
/**
  * PathHistoryPoint.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PathHistoryPoint from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PathHistoryPoint ::= SEQUENCE {
  *    latOffset       OffsetLL-B18,
  *    lonOffset       OffsetLL-B18,
  *    elevationOffset VertOffset-B12,  
  *    timeOffset      TimeOffset,
  *                    -- Offset backwards in time 
  *    speed           Speed                 OPTIONAL, 
  *                    -- Speed over the reported period
  *    posAccuracy     PositionalAccuracy    OPTIONAL, 
  *                    -- The accuracy of this value
  *    heading         CoarseHeading         OPTIONAL, 
  *                    -- overall heading 
  *    ...
  *    }
 */
typedef struct j2735_v2x_msgs__msg__PathHistoryPoint
{
  j2735_v2x_msgs__msg__OffsetLLB18 lat_offset;
  j2735_v2x_msgs__msg__OffsetLLB18 lon_offset;
  j2735_v2x_msgs__msg__VertOffsetB12 elevation_offset;
  j2735_v2x_msgs__msg__TimeOffset time_offset;
  j2735_v2x_msgs__msg__Speed speed;
  j2735_v2x_msgs__msg__PositionalAccuracy pos_accuracy;
  j2735_v2x_msgs__msg__CoarseHeading heading;
} j2735_v2x_msgs__msg__PathHistoryPoint;

// Struct for a sequence of j2735_v2x_msgs__msg__PathHistoryPoint.
typedef struct j2735_v2x_msgs__msg__PathHistoryPoint__Sequence
{
  j2735_v2x_msgs__msg__PathHistoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PathHistoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_H_
