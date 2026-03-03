// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneAttributesCrosswalk.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_crosswalk.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LaneAttributesCrosswalk in the package j2735_v2x_msgs.
/**
  * LaneAttributesCrosswalk.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
 */
typedef struct j2735_v2x_msgs__msg__LaneAttributesCrosswalk
{
  /// LaneAttributes-Crosswalk ::= BIT STRING {
  ///  -- With bits as defined:
  ///  -- MUTCD provides no suitable "types" to use here
  ///  crosswalkRevocableLane (0),
  ///   -- this lane may be activated or not based
  ///   -- on the current SPAT message contents
  ///   -- if not asserted, the lane is ALWAYS present
  ///  bicyleUseAllowed (1),
  ///   -- The path allows bicycle traffic,
  ///   -- if not set, this mode is prohibited
  ///  isXwalkFlyOverLane (2),
  ///   -- path of lane is not at grade
  ///  fixedCycleTime (3),
  ///   -- ped walk phases use preset times
  ///   -- i.e. there is not a 'push to cross' button
  ///  biDirectionalCycleTimes (4),
  ///   -- ped walk phases use different SignalGroupID
  ///   -- for each direction. The first SignalGroupID
  ///   -- in the first Connection represents 'inbound'
  ///   -- flow (the direction of travel towards the first
  ///   -- node point) while second SignalGroupID in the
  ///   -- next Connection entry represents the 'outbound'
  ///   -- flow. And use of RestrictionClassID entries
  ///   -- in the Connect follow this same pattern in pairs.
  ///  hasPushToWalkButton (5),
  ///   -- Has a demand input
  ///  audioSupport (6),
  ///   -- audio crossing cues present
  ///  rfSignalRequestPresent (7),
  ///   -- Supports RF push to walk technologies
  ///  unsignalizedSegmentsPresent (8)
  ///   -- The lane path consists of one of more segments
  ///   -- which are not part of a signal group ID
  /// } (SIZE (16))
  uint16_t lane_attributes_crosswalk;
} j2735_v2x_msgs__msg__LaneAttributesCrosswalk;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneAttributesCrosswalk.
typedef struct j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence
{
  j2735_v2x_msgs__msg__LaneAttributesCrosswalk * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneAttributesCrosswalk__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__STRUCT_H_
