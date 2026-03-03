// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/allowed_maneuvers.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STRAIGHT'.
/**
  * Bit flags
 */
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__STRAIGHT = 1
};

/// Constant 'LEFT_TURN'.
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__LEFT_TURN = 2
};

/// Constant 'RIGHT_TURN'.
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__RIGHT_TURN = 4
};

/// Constant 'U_TURN'.
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__U_TURN = 8
};

/// Constant 'LEFT_TURN_ON_RED'.
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__LEFT_TURN_ON_RED = 16
};

/// Constant 'RIGHT_TURN_ON_RED'.
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__RIGHT_TURN_ON_RED = 32
};

/// Constant 'LANE_CHANGE'.
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__LANE_CHANGE = 64
};

/// Constant 'NO_STOPPING_ALLOWED'.
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__NO_STOPPING_ALLOWED = 128
};

/// Constant 'ALWAYS_YIELD'.
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__ALWAYS_YIELD = 256
};

/// Constant 'GO_WITH_HALT'.
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__GO_WITH_HALT = 512
};

/// Constant 'CAUTION'.
enum
{
  j2735_v2x_msgs__msg__AllowedManeuvers__CAUTION = 1024
};

/// Struct defined in msg/AllowedManeuvers in the package j2735_v2x_msgs.
/**
  * AllowedManeuvers.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * AllowedManeuvers ::= BIT STRING {
  * -- With bits as defined:
  * -- Allowed maneuvers at path end (stop line)
  * -- All maneuvers with bits not set are therefore prohibited !
  * -- A value of zero shall be used for unknown, indicating no Maneuver
  * maneuverStraightAllowed(0),
  * -- a Straight movement is allowed in this lane
  * maneuverLeftAllowed(1),
  * -- a Left Turn movement is allowed in this lane
  * maneuverRightAllowed(2),
  * -- a Right Turn movement is allowed in this lane
  * maneuverUTurnAllowed(3),
  * -- a U turn movement is allowed in this lane
  * maneuverLeftTurnOnRedAllowed (4),
  * -- a Stop, and then proceed when safe movement
  * -- is allowed in this lane
  * maneuverRightTurnOnRedAllowed (5),
  * -- a Stop, and then proceed when safe movement
  * -- is allowed in this lane
  * maneuverLaneChangeAllowed(6),
  * -- a movement which changes to an outer lane
  * -- on the egress side is allowed in this lane
  * -- (example: left into either outbound lane)
  * maneuverNoStoppingAllowed(7),
  * -- the vehicle should not stop at the stop line
  * -- (example: a flashing green arrow)
  * yieldAllwaysRequired(8),
  * -- the allowed movements above are not protected
  * -- (example: an permanent yellow condition)
  * goWithHalt(9),
  * -- after making a full stop, may proceed
  * caution(10),
  * -- proceed past stop line with caution
  * reserved1(11)
  * -- used to align to 12 Bit Field
  * } (SIZE(12))
 */
typedef struct j2735_v2x_msgs__msg__AllowedManeuvers
{
  uint16_t allowed_maneuvers;
} j2735_v2x_msgs__msg__AllowedManeuvers;

// Struct for a sequence of j2735_v2x_msgs__msg__AllowedManeuvers.
typedef struct j2735_v2x_msgs__msg__AllowedManeuvers__Sequence
{
  j2735_v2x_msgs__msg__AllowedManeuvers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AllowedManeuvers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_H_
