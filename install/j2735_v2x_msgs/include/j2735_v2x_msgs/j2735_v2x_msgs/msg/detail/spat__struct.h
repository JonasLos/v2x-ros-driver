// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SPAT.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/spat.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'intersections'
#include "j2735_v2x_msgs/msg/detail/intersection_state_list__struct.h"

/// Struct defined in msg/SPAT in the package j2735_v2x_msgs.
/**
  * SPAT.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * A complete description of an intersection's roadway geometry and its allowed navigational paths
  * (independent of any additional regulatory restrictions that may apply over time or from user classification).
 */
typedef struct j2735_v2x_msgs__msg__SPAT
{
  ///  The SPAT message sends the current movement state of each active phase in the system as needed (such as values of
  ///  what states are active and values at what time a state has begun/does begin earliest, is expected to begin most likely and
  ///  will end latest). The state of inactive movements is not normally transmitted. Movements are mapped to specific
  ///  approaches and connections of ingress to egress lanes and by use of the SignalGroupID in the MapData message
  ///  SPAT ::= SEQUENCE {
  ///   timeStamp MinuteOfTheYear OPTIONAL,
  ///   name DescriptiveName OPTIONAL,
  ///   -- human readable name for this collection
  ///   -- to be used only in debug mode
  ///   intersections IntersectionStateList,
  ///   -- sets of SPAT data (one per intersection)
  ///
  ///   -- If PrioritizationResponse data is required, it is found
  ///   -- in the RegionalSPAT entry below
  ///
  ///   regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-SPAT}} OPTIONAL,
  ///   ...
  ///  }
  /// MinuteOfTheYear OPTIONAL ::= INTEGER (0..527040)
  ///  -- The value 527040 shall be used for invalid
  uint32_t time_stamp;
  bool time_stamp_exists;
  /// name DescriptiveName OPTIONAL := IA5String (SIZE(1..63))
  /// -- often for debug use only
  /// -- but at times used to name ped crossings
  rosidl_runtime_c__String name;
  bool name_exists;
  j2735_v2x_msgs__msg__IntersectionStateList intersections;
} j2735_v2x_msgs__msg__SPAT;

// Struct for a sequence of j2735_v2x_msgs__msg__SPAT.
typedef struct j2735_v2x_msgs__msg__SPAT__Sequence
{
  j2735_v2x_msgs__msg__SPAT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SPAT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_
