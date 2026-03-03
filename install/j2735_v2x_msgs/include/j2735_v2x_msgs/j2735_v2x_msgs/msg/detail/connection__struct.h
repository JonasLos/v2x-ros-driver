// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connection.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'connecting_lane'
#include "j2735_v2x_msgs/msg/detail/connecting_lane__struct.h"
// Member 'remote_intersection'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.h"

/// Struct defined in msg/Connection in the package j2735_v2x_msgs.
/**
  * Connection.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The Connection data structure is used in the ConnectsToList data frame to provide data about how the stop line at
  * the end of a single lane connects to another lane beyond its stop point. The ConnectingLane entry ties an outbound
  * (egress) lane by its index to a valid single maneuver required to reach that outbound lane. The SignalGroupID maps this
  * to a single SPAT index. (Note that more than one entry can exist for any given lane to handle admissive and protected
  * conditions).
  *
  * Connection ::= SEQUENCE {
  * -- The subject lane connecting to this lane is:
  * connectingLane ConnectingLane,
  * -- The index of the connecting lane and also
  * -- the maneuver from the current lane to it
  * remoteIntersection IntersectionReferenceID OPTIONAL,
  * -- This entry is only used when the
  * -- indicated connecting lane belongs
  * -- to another intersection layout. This
  * -- provides a means to create meshes of lanes
  * -- SPAT mapping details at the stop line are:
  * signalGroup SignalGroupID OPTIONAL,
  * -- The matching signal group send by
  * -- the SPAT message for this lane/maneuver.
  * -- Shall be present unless the connectingLane
  * -- has no signal group (is un-signalized)
  * userClass RestrictionClassID OPTIONAL,
  * -- The Restriction Class of users this applies to
  * -- The use of some lane/maneuver and SignalGroupID
  * -- pairings are restricted to selected users.
  * -- When absent, the SignalGroupID applies to all
  * -- Movement assist details are given by:
  * connectionID LaneConnectionID OPTIONAL
  * -- An optional connection index used to
  * -- relate this lane connection to any dynamic
  * -- clearance data in the SPAT. Note that
  * -- the index may be shared with other
  * -- connections if the clearance data is common
  * }
 */
typedef struct j2735_v2x_msgs__msg__Connection
{
  j2735_v2x_msgs__msg__ConnectingLane connecting_lane;
  j2735_v2x_msgs__msg__IntersectionReferenceID remote_intersection;
  bool remote_intersection_exists;
  /// SignalGroupID ::= INTEGER (0..255)
  uint8_t signal_group;
  bool signal_group_exists;
  /// RestrictionClassID ::= INTEGER (0..255)
  uint8_t user_class;
  bool user_class_exists;
  /// LaneConnectionID ::= INTEGER (0..255)
  uint8_t connection_id;
  bool connection_id_exists;
} j2735_v2x_msgs__msg__Connection;

// Struct for a sequence of j2735_v2x_msgs__msg__Connection.
typedef struct j2735_v2x_msgs__msg__Connection__Sequence
{
  j2735_v2x_msgs__msg__Connection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Connection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_
