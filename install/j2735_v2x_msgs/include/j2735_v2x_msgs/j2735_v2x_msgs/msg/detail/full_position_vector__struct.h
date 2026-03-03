// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/full_position_vector.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_UTC_TIME'.
enum
{
  j2735_v2x_msgs__msg__FullPositionVector__HAS_UTC_TIME = 1
};

/// Constant 'HAS_ELEVATION'.
enum
{
  j2735_v2x_msgs__msg__FullPositionVector__HAS_ELEVATION = 2
};

/// Constant 'HAS_HEADING'.
enum
{
  j2735_v2x_msgs__msg__FullPositionVector__HAS_HEADING = 4
};

/// Constant 'HAS_SPEED'.
enum
{
  j2735_v2x_msgs__msg__FullPositionVector__HAS_SPEED = 8
};

/// Constant 'HAS_POS_ACCURACY'.
enum
{
  j2735_v2x_msgs__msg__FullPositionVector__HAS_POS_ACCURACY = 16
};

/// Constant 'HAS_TIME_CONFIDENCE'.
enum
{
  j2735_v2x_msgs__msg__FullPositionVector__HAS_TIME_CONFIDENCE = 32
};

/// Constant 'HAS_POS_CONFIDENCE'.
enum
{
  j2735_v2x_msgs__msg__FullPositionVector__HAS_POS_CONFIDENCE = 64
};

/// Constant 'HAS_SPEED_CONFIDENCE'.
enum
{
  j2735_v2x_msgs__msg__FullPositionVector__HAS_SPEED_CONFIDENCE = 128
};

// Include directives for member types
// Member 'utc_time'
#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.h"
// Member 'lon'
#include "j2735_v2x_msgs/msg/detail/longitude__struct.h"
// Member 'lat'
#include "j2735_v2x_msgs/msg/detail/latitude__struct.h"
// Member 'elevation'
#include "j2735_v2x_msgs/msg/detail/elevation__struct.h"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading__struct.h"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__struct.h"
// Member 'pos_accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__struct.h"
// Member 'time_confidence'
#include "j2735_v2x_msgs/msg/detail/time_confidence__struct.h"
// Member 'pos_confidence'
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__struct.h"
// Member 'speed_confidence'
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__struct.h"

/// Struct defined in msg/FullPositionVector in the package j2735_v2x_msgs.
/**
  * FullPositionVector.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of FullPositionVector from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * FullPositionVector ::= SEQUENCE {
  *    utcTime             DDateTime OPTIONAL,   -- time with mSec precision
  *    long                Longitude,            -- 1/10th microdegree
  *    lat                 Latitude,             -- 1/10th microdegree
  *    elevation           Elevation  OPTIONAL,  -- units of 0.1 m
  *    heading             Heading OPTIONAL, 
  *    speed               TransmissionAndSpeed OPTIONAL,
  *    posAccuracy         PositionalAccuracy OPTIONAL,
  *    timeConfidence      TimeConfidence OPTIONAL,
  *    posConfidence       PositionConfidenceSet OPTIONAL,
  *    speedConfidence     SpeedandHeadingandThrottleConfidence OPTIONAL, 
  *    ...  
  *    }
 */
typedef struct j2735_v2x_msgs__msg__FullPositionVector
{
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_HEADING) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_HEADING
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__DDateTime utc_time;
  j2735_v2x_msgs__msg__Longitude lon;
  j2735_v2x_msgs__msg__Latitude lat;
  j2735_v2x_msgs__msg__Elevation elevation;
  j2735_v2x_msgs__msg__Heading heading;
  j2735_v2x_msgs__msg__TransmissionAndSpeed speed;
  j2735_v2x_msgs__msg__PositionalAccuracy pos_accuracy;
  j2735_v2x_msgs__msg__TimeConfidence time_confidence;
  j2735_v2x_msgs__msg__PositionConfidenceSet pos_confidence;
  j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence speed_confidence;
} j2735_v2x_msgs__msg__FullPositionVector;

// Struct for a sequence of j2735_v2x_msgs__msg__FullPositionVector.
typedef struct j2735_v2x_msgs__msg__FullPositionVector__Sequence
{
  j2735_v2x_msgs__msg__FullPositionVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__FullPositionVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_H_
