// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlDetail.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_detail.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SIGNAL_CHOICE'.
/**
  * enumeration values for choice:
 */
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__SIGNAL_CHOICE = 0
};

/// Constant 'STOP_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__STOP_CHOICE = 1
};

/// Constant 'YIELD_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__YIELD_CHOICE = 2
};

/// Constant 'NOTOWING_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__NOTOWING_CHOICE = 3
};

/// Constant 'RESTRICTED_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__RESTRICTED_CHOICE = 4
};

/// Constant 'CLOSED_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__CLOSED_CHOICE = 5
};

/// Constant 'CHAINS_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__CHAINS_CHOICE = 6
};

/// Constant 'DIRECTION_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__DIRECTION_CHOICE = 7
};

/// Constant 'LATAFFINITY_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__LATAFFINITY_CHOICE = 8
};

/// Constant 'LATPERM_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__LATPERM_CHOICE = 9
};

/// Constant 'PARKING_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__PARKING_CHOICE = 10
};

/// Constant 'MINSPEED_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MINSPEED_CHOICE = 11
};

/// Constant 'MAXSPEED_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXSPEED_CHOICE = 12
};

/// Constant 'MINHDWY_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MINHDWY_CHOICE = 13
};

/// Constant 'MAXVEHMASS_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXVEHMASS_CHOICE = 14
};

/// Constant 'MAXVEHHEIGHT_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXVEHHEIGHT_CHOICE = 15
};

/// Constant 'MAXVEHWIDTH_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXVEHWIDTH_CHOICE = 16
};

/// Constant 'MAXVEHLENGTH_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXVEHLENGTH_CHOICE = 17
};

/// Constant 'MAXVEHAXLES_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXVEHAXLES_CHOICE = 18
};

/// Constant 'MINVEHOCC_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MINVEHOCC_CHOICE = 19
};

/// Constant 'MAXPLATOONSIZE_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXPLATOONSIZE_CHOICE = 20
};

/// Constant 'MINPLATOONHDWY_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MINPLATOONHDWY_CHOICE = 21
};

/// Constant 'OPEN'.
/**
  * enumeration values for closed:
 */
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__OPEN = 0
};

/// Constant 'CLOSED'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__CLOSED = 1
};

/// Constant 'TAPERLEFT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__TAPERLEFT = 2
};

/// Constant 'TAPERRIGHT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__TAPERRIGHT = 3
};

/// Constant 'OPENLEFT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__OPENLEFT = 4
};

/// Constant 'OPENRIGHT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__OPENRIGHT = 5
};

/// Constant 'NO'.
/**
  * enumeration values for chains:
 */
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__NO = 0
};

/// Constant 'PERMITTED'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__PERMITTED = 1
};

/// Constant 'REQUIRED'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__REQUIRED = 2
};

/// Constant 'FORWARD'.
/**
  * enumeration values for direction:
 */
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__FORWARD = 0
};

/// Constant 'REVERSE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__REVERSE = 1
};

/// Constant 'LEFT'.
/**
  * enumeration values for lataffinity:
 */
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__LEFT = 0
};

/// Constant 'RIGHT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__RIGHT = 1
};

/// Constant 'NONE'.
/**
  * enumeration values for latperm:
 */
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__NONE = 0
};

/// Constant 'PASSINGONLY'.
/**
  * uint8 PERMITTED=1 redeclaration
 */
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__PASSINGONLY = 2
};

/// Constant 'EMERGENCYONLY'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__EMERGENCYONLY = 3
};

/// Constant 'PARALLEL'.
/**
  * enumeration values for parking:
  * uint8 NO=0 redeclaration
 */
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__PARALLEL = 1
};

/// Constant 'ANGLED'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__ANGLED = 2
};

// Include directives for member types
// Member 'signal'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TrafficControlDetail in the package j2735_v2x_msgs.
/**
  * TrafficControlDetail.msg
  *
  * Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard
  *
  * J2735 2016 message format.
  *
  *
  * @version 0.1
  *
  * Description
  * ...
 */
typedef struct j2735_v2x_msgs__msg__TrafficControlDetail
{
  /// TrafficControlDetail ::= CHOICE
  /// {
  ///  signal OCTET STRING SIZE(0..63),
  ///  stop NULL,
  ///  yield NULL,
  ///  notowing NULL,
  ///  restricted NULL,
  ///  closed ENUMERATED {open, closed, taperleft, taperright, openleft, openright},
  ///  chains ENUMERATED {no, permitted, required},
  ///  direction ENUMERATED {forward, reverse},
  ///  lataffinity ENUMERATED {left, right},
  ///  latperm SEQUENCE (SIZE(2)) OF ENUMERATED {none, permitted, passing-only, emergency-only},
  ///  parking ENUMERATED {no, parallel, angled},
  ///  minspeed INTEGER (0..1023), -- tenths of m/s
  ///  maxspeed INTEGER (0..1023), -- tenths of m/s
  ///  minhdwy INTEGER (0..2047), -- tenths of meters
  ///  maxvehmass INTEGER (0..65535), -- kg
  ///  maxvehheight INTEGER (0..127), -- tenths of meters
  ///  maxvehwidth INTEGER (0..127), -- tenths of meters
  ///  maxvehlength INTEGER (0..1023), -- tenths of meters
  ///  maxvehaxles INTEGER (2..15), -- number of axles
  ///  minvehocc INTEGER (1..15), -- vehicle passenger count
  ///    maxplatoonsize INTEGER (1..63), -- vehicle count
  ///    minplatoonhdwy INTEGER (0..2047), -- tenths of meters
  ///  ...
  /// }
  uint8_t choice;
  /// signal ::= OCTET STRING SIZE(0..63)
  rosidl_runtime_c__uint8__Sequence signal;
  /// closed ENUMERATED {open, closed, taperleft, taperright, openleft, openright}
  uint8_t closed;
  /// chains ENUMERATED {no, permitted, required}
  uint8_t chains;
  /// direction ENUMERATED {forward, reverse}
  uint8_t direction;
  /// lataffinity ENUMERATED {left, right}
  uint8_t lataffinity;
  /// latperm SEQUENCE (SIZE(2)) OF ENUMERATED {none, permitted, passing-only, emergency-only}
  uint8_t latperm[2];
  /// parking ENUMERATED {no, parallel, angled}
  uint8_t parking;
  /// minspeed ::= INTEGER (0..1023), -- tenths of m/s
  uint16_t minspeed;
  /// maxspeed ::= INTEGER (0..1023), -- tenths of m/s
  uint16_t maxspeed;
  /// minhdwy ::= INTEGER (0..2047), -- tenths of meters
  uint16_t minhdwy;
  /// maxvehmass ::= INTEGER (0..65535), -- kg
  uint16_t maxvehmass;
  /// maxvehheight ::= INTEGER (0..127), -- tenths of meters
  uint8_t maxvehheight;
  /// maxvehwidth ::= INTEGER (0..127), -- tenths of meters
  uint8_t maxvehwidth;
  /// maxvehlength ::= INTEGER (0..1023), -- tenths of meters
  uint16_t maxvehlength;
  /// maxvehaxles ::= INTEGER (2..15), -- number of axles
  uint8_t maxvehaxles;
  /// minvehocc ::= INTEGER (1..15), -- vehicle passenger count
  uint8_t minvehocc;
  /// maxplatoonsize ::= INTEGER (1..63), -- vehicle count
  uint8_t maxplatoonsize;
  /// minplatoonhdwy ::= INTEGER (0..2047), -- tenths of meters
  uint16_t minplatoonhdwy;
} j2735_v2x_msgs__msg__TrafficControlDetail;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlDetail.
typedef struct j2735_v2x_msgs__msg__TrafficControlDetail__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlDetail * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlDetail__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_H_
