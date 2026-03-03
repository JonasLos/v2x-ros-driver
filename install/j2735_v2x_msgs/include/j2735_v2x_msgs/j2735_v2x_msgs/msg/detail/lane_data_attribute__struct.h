// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_data_attribute.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'PATH_END_POINT_ANGLE'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__PATH_END_POINT_ANGLE = 0
};

/// Constant 'LANE_CROWN_POINT_CENTER'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__LANE_CROWN_POINT_CENTER = 1
};

/// Constant 'LANE_CROWN_POINT_LEFT'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__LANE_CROWN_POINT_LEFT = 2
};

/// Constant 'LANE_CROWN_POINT_RIGHT'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__LANE_CROWN_POINT_RIGHT = 3
};

/// Constant 'LANE_ANGLE'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__LANE_ANGLE = 4
};

/// Constant 'SPEED_LIMITS'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__SPEED_LIMITS = 5
};

// Include directives for member types
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__struct.h"

/// Struct defined in msg/LaneDataAttribute in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__LaneDataAttribute
{
  /// The data frame DF_LaneDataAttribute is used to relate an attribute and a control value at a node point or along a
  /// lane segment from an enumerated list of defined choices. It is then followed by a defined data value associated with it and
  /// which is defined elsewhere in this standard.
  /// LaneDataAttribute ::= CHOICE {
  /// -- Segment attribute types and the data needed for each
  /// pathEndPointAngle DeltaAngle,
  /// -- adjusts final point/width slant
  /// -- of the lane to align with the stop line
  /// laneCrownPointCenter RoadwayCrownAngle,
  /// -- sets the canter of the road bed
  /// -- from centerline point
  /// laneCrownPointLeft RoadwayCrownAngle,
  /// -- sets the canter of the road bed
  /// -- from left edge
  /// laneCrownPointRight RoadwayCrownAngle,
  /// -- sets the canter of the road bed
  /// -- from right edge
  /// laneAngle MergeDivergeNodeAngle,
  /// -- the angle or direction of another lane
  /// -- this is required to support Japan style
  /// -- when a merge point angle is required
  /// speedLimits SpeedLimitList,
  /// -- Reference regulatory speed limits
  /// -- used by all segments
  /// -- Add others as needed, in regional space
  /// regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-LaneDataAttribute}},
  /// ...
  /// }
  uint8_t choice;
  /// DeltaAngle ::= INTEGER (-150..150)
  /// -- With an angle range from
  /// -- negative 150 to positive 150
  /// -- in one degree steps where zero is directly
  /// -- along the axis or the lane center line as defined by the
  /// -- two closest points
  ///
  /// The DeltaAngle data element provides the final angle used in the last point of the lane path.
  /// Used to "cant" the stop line of the lane.
  int16_t path_end_point_angle;
  /// RoadwayCrownAngle ::= INTEGER (-128..127)
  /// -- In LSB units of 0.3 degrees of angle
  /// -- over a range of -38.1 to + 38.1 degrees
  /// -- The value -128 shall be used for unknown
  /// -- The value zero shall be used for angles
  /// -- which are between -0.15 and +0.15
  ///
  /// The RoadwayCrownAngle data element relates the gross tangential angle of the roadway surface with respect to
  /// the local horizontal axis and is measured at the indicated part of the lane.
  int8_t lane_crown_point_center;
  int8_t lane_crown_point_right;
  int8_t lane_crown_point_left;
  /// MergeDivergeNodeAngle ::= INTEGER (-180..180)
  /// -- In units of 1.5 degrees from north
  /// -- the value -180 shall be used to represent
  /// -- data is not available or unknown
  int16_t lane_angle;
  /// SpeedLimitList ::= SEQUENCE (SIZE(1..9)) OF RegulatorySpeedLimit
  j2735_v2x_msgs__msg__SpeedLimitList speed_limits;
} j2735_v2x_msgs__msg__LaneDataAttribute;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneDataAttribute.
typedef struct j2735_v2x_msgs__msg__LaneDataAttribute__Sequence
{
  j2735_v2x_msgs__msg__LaneDataAttribute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneDataAttribute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_
