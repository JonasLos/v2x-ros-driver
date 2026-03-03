// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlVehClass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_veh_class.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_VEH_CLASS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_VEH_CLASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ANY'.
/**
  * enumeration values for vehicle_class:
 */
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__ANY = 0
};

/// Constant 'PEDESTRIAN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__PEDESTRIAN = 1
};

/// Constant 'BICYCLE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__BICYCLE = 2
};

/// Constant 'MICROMOBILE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__MICROMOBILE = 3
};

/// Constant 'MOTORCYCLE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__MOTORCYCLE = 4
};

/// Constant 'PASSENGER_CAR'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__PASSENGER_CAR = 5
};

/// Constant 'LIGHT_TRUCK_VAN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__LIGHT_TRUCK_VAN = 6
};

/// Constant 'BUS'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__BUS = 7
};

/// Constant 'TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK = 8
};

/// Constant 'THREE_AXLE_SINGLE_UNIT_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__THREE_AXLE_SINGLE_UNIT_TRUCK = 9
};

/// Constant 'FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK = 10
};

/// Constant 'FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK = 11
};

/// Constant 'FIVE_AXLE_SINGLE_TRAILER_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__FIVE_AXLE_SINGLE_TRAILER_TRUCK = 12
};

/// Constant 'SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK = 13
};

/// Constant 'FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK = 14
};

/// Constant 'SIX_AXLE_MULTI_TRAILER_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__SIX_AXLE_MULTI_TRAILER_TRUCK = 15
};

/// Constant 'SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK = 16
};

/// Constant 'RAIL'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__RAIL = 17
};

/// Constant 'UNCLASSIFIED'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__UNCLASSIFIED = 18
};

/// Struct defined in msg/TrafficControlVehClass in the package j2735_v2x_msgs.
/**
  * TrafficControlVehClass.msg
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
typedef struct j2735_v2x_msgs__msg__TrafficControlVehClass
{
  /// TrafficControlVehClass ::= ENUMERATED
  /// {
  ///  any,
  ///  pedestrian,
  ///  bicycle,
  ///  micromobile,
  ///  motorcycle,
  ///  passenger-car,
  ///  light-truck-van,
  ///  bus,
  ///  two-axle-six-tire-single-unit-truck,
  ///  three-axle-single-unit-truck,
  ///  four-or-more-axle-single-unit-truck,
  ///  four-or-fewer-axle-single-trailer-truck,
  ///  five-axle-single-trailer-truck,
  ///  six-or-more-axle-single-trailer-truck,
  ///  five-or-fewer-axle-multi-trailer-truck,
  ///  six-axle-multi-trailer-truck,
  ///  seven-or-more-axle-multi-trailer-truck,
  ///  rail,
  ///  unclassified,
  ///  ...
  /// }
  uint8_t vehicle_class;
} j2735_v2x_msgs__msg__TrafficControlVehClass;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlVehClass.
typedef struct j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlVehClass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_VEH_CLASS__STRUCT_H_
