// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/IntersectionReferenceID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_reference_id.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_REFERENCE_ID__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_REFERENCE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'REGION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__IntersectionReferenceID__REGION_UNAVAILABLE = 0
};

/// Struct defined in msg/IntersectionReferenceID in the package j2735_v2x_msgs.
/**
  * IntersectionReferenceID.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The IntersectionReferenceID data frame conveys the combination of an optional RoadRegulatorID and of an
  * IntersectionID that is unique within that region. When the RoadRegulatorID is present the IntersectionReferenceID is
  * guaranteed to be globally unique.
 */
typedef struct j2735_v2x_msgs__msg__IntersectionReferenceID
{
  /// region RoadRegulatorID OPTIONAL ::= INTEGER (0..65535)
  /// -- a globally unique regional assignment value
  /// -- typical assigned to a regional DOT authority
  /// -- the value zero shall be used for testing needs
  /// 0 is a J2735 value for testing needs, and carma can use it to indicate optional field was not set or unavailable.
  uint16_t region;
  bool region_exists;
  /// id IntersectionID ::= INTEGER (0..65535)
  /// -- a unique mapping to the intersection
  /// -- in question within the above region of use
  uint16_t id;
} j2735_v2x_msgs__msg__IntersectionReferenceID;

// Struct for a sequence of j2735_v2x_msgs__msg__IntersectionReferenceID.
typedef struct j2735_v2x_msgs__msg__IntersectionReferenceID__Sequence
{
  j2735_v2x_msgs__msg__IntersectionReferenceID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__IntersectionReferenceID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_REFERENCE_ID__STRUCT_H_
