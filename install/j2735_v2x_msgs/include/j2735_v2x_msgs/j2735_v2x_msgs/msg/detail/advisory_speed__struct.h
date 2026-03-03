// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/advisory_speed.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SPEED_UNAVAILABLE'.
static const float j2735_v2x_msgs__msg__AdvisorySpeed__SPEED_UNAVAILABLE = 500.0f;

/// Constant 'DISTANCE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__AdvisorySpeed__DISTANCE_UNKNOWN = 0
};

// Include directives for member types
// Member 'type'
#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__struct.h"
// Member 'confidence'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__struct.h"

/// Struct defined in msg/AdvisorySpeed in the package j2735_v2x_msgs.
/**
  * AdvisorySpeed.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DF_AdvisorySpeed data frame is used to convey a recommended traveling approach speed to an intersection
  * from the message issuer to various travelers and vehicle types. Besides support for various eco-driving applications, this
  * allows transmitting recommended speeds for specialty vehicles such as transit buses.
  * AdvisorySpeed ::= SEQUENCE {
  * type AdvisorySpeedType,
  * -- the type of advisory which this is.
  * speed SpeedAdvice OPTIONAL,
  * -- See Section 11 for converting and translating speed
  * -- expressed in mph into units of m/s
  * -- This element is optional ONLY when superceded
  * -- by the presence of a regional speed element found in
  * -- Reg-AdvisorySpeed entry
  * confidence SpeedConfidence OPTIONAL,
  * -- A confidence value for the above speed
  * distance ZoneLength OPTIONAL,
  * -- Unit = 1 meter,
  * -- The distance indicates the region for which the advised speed
  * -- is recommended, it is specified upstream from the stop bar
  * -- along the connected egressing lane
  * class RestrictionClassID OPTIONAL,
  * -- the vehicle types to which it applies
  * -- when absent, the AdvisorySpeed applies to
  * -- all motor vehicle types
  * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-AdvisorySpeed}} OPTIONAL,
  * ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__AdvisorySpeed
{
  j2735_v2x_msgs__msg__AdvisorySpeedType type;
  ///  SpeedAdvice ::= INTEGER (0..500) OPTIONAL
  ///  This data element represents the recommended velocity of an object, typically a vehicle speed along a roadway,
  ///  expressed in unsigned units of 0.1 meters per second.
  /// -- LSB units are 0.1 m/s^2
  /// -- the value 499 shall be used for values at or greater than 49.9 m/s
  /// -- the value 500 shall be used to indicate that speed is unavailable
  float speed;
  bool speed_exists;
  /// SpeedConfidence is an enum already with 0 as unavailable.
  j2735_v2x_msgs__msg__SpeedConfidence confidence;
  /// ZoneLength ::= INTEGER (0..10000)
  /// -- Unit = 1 meter, 0 = unknown,
  /// -- The value 10000 to be used for Distances >=10000 m
  /// -- (e.g. from known point to another point along a
  /// -- known path, often against traffic flow direction
  /// -- when used for measuring queues)
  uint16_t distance;
  bool distance_exists;
  /// RestrictionClassID ::= INTEGER (0..255)
  uint8_t restriction_class_id;
  bool restriction_class_id_exists;
} j2735_v2x_msgs__msg__AdvisorySpeed;

// Struct for a sequence of j2735_v2x_msgs__msg__AdvisorySpeed.
typedef struct j2735_v2x_msgs__msg__AdvisorySpeed__Sequence
{
  j2735_v2x_msgs__msg__AdvisorySpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AdvisorySpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_
