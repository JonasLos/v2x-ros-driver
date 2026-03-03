// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneAttributesParking.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_parking.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_PARKING__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_PARKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LaneAttributesParking in the package j2735_v2x_msgs.
/**
  * LaneAttributesParking.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The LaneAttributes-Parking data element relates specific properties found in a vehicle parking lane type.
  *
  * LaneAttributes-Parking ::= BIT STRING {
  * -- With bits as defined:
  * -- Parking use details, note that detailed restrictions such as
  * -- allowed hours are sent by way of ITIS codes in the TIM message
  * parkingRevocableLane(0),
  * -- this lane may be activated or not based
  * -- on the current SPAT message contents
  * -- if not asserted, the lane is ALWAYS present
  * parallelParkingInUse(1),
  * headInParkingInUse(2),
  * doNotParkZone(3),
  * -- used to denote fire hydrants as well as
  * -- short disruptions in a parking zone
  * parkingForBusUse(4),
  * parkingForTaxiUse(5),
  * noPublicParkingUse(6)
  * -- private parking, as in front of
  * -- private property
  * -- Bits 7~15 reserved and set to zero
  * } (SIZE (16))
 */
typedef struct j2735_v2x_msgs__msg__LaneAttributesParking
{
  uint16_t lane_attributes_parking;
} j2735_v2x_msgs__msg__LaneAttributesParking;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneAttributesParking.
typedef struct j2735_v2x_msgs__msg__LaneAttributesParking__Sequence
{
  j2735_v2x_msgs__msg__LaneAttributesParking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneAttributesParking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_PARKING__STRUCT_H_
