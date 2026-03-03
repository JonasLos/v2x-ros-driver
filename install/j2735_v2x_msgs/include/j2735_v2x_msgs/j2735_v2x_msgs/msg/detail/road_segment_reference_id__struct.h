// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/road_segment_reference_id.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoadSegmentReferenceID in the package j2735_v2x_msgs.
/**
  * RoadSegmentReferenceID.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DF_RoadSegmentReferenceID data frame is used to convey theRoadSegmentID which is unique to a given
  * road segment of interest, and also the RoadRegulatorID assigned to the region in which it is operating (when required).
 */
typedef struct j2735_v2x_msgs__msg__RoadSegmentReferenceID
{
  /// RoadSegmentReferenceID ::= SEQUENCE {
  /// region RoadRegulatorID OPTIONAL,
  /// -- a globally unique regional assignment value
  /// -- typically assigned to a regional DOT authority
  /// -- the value zero shall be used for testing needs
  /// id RoadSegmentID
  /// -- a unique mapping to the road segment
  /// -- in question within the above region of use
  /// -- during its period of assignment and use
  /// -- note that unlike intersectionID values,
  /// -- this value can be reused by the region
  /// }
  /// RoadRegulatorID ::= INTEGER (0..65535)
  uint16_t region;
  bool region_exists;
  /// RoadSegmentID ::= INTEGER (0..65535)
  /// -- The values zero to 255 shall be used for testing only
  /// -- Note that the value assigned to an RoadSegment will be
  /// -- unique within a given regional ID only during its use
  uint16_t id;
  bool id_exists;
} j2735_v2x_msgs__msg__RoadSegmentReferenceID;

// Struct for a sequence of j2735_v2x_msgs__msg__RoadSegmentReferenceID.
typedef struct j2735_v2x_msgs__msg__RoadSegmentReferenceID__Sequence
{
  j2735_v2x_msgs__msg__RoadSegmentReferenceID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RoadSegmentReferenceID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_H_
