// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BasicVehicleRole.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/basic_vehicle_role.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'BASIC_VEHICLE'.
/**
  * Enumeration values for basic_vehicle_role
 */
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE = 0
};

/// Constant 'PUBLIC_TRANSPORT'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__PUBLIC_TRANSPORT = 1
};

/// Constant 'SPECIAL_TRANSPORT'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__SPECIAL_TRANSPORT = 2
};

/// Constant 'DANGEROUS_GOODS'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__DANGEROUS_GOODS = 3
};

/// Constant 'ROAD_WORK'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__ROAD_WORK = 4
};

/// Constant 'ROAD_RESCUE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__ROAD_RESCUE = 5
};

/// Constant 'EMERGENCY'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__EMERGENCY = 6
};

/// Constant 'SAFETY_CAR'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__SAFETY_CAR = 7
};

/// Constant 'NONE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__NONE_UNKNOWN = 8
};

/// Constant 'TRUCK'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__TRUCK = 9
};

/// Constant 'MOTORCYCLE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__MOTORCYCLE = 10
};

/// Constant 'ROAD_SIDE_SOURCE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__ROAD_SIDE_SOURCE = 11
};

/// Constant 'POLICE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__POLICE = 12
};

/// Constant 'FIRE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__FIRE = 13
};

/// Constant 'AMBULANCE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__AMBULANCE = 14
};

/// Constant 'DOT'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__DOT = 15
};

/// Constant 'TRANSIT'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__TRANSIT = 16
};

/// Constant 'SLOW_MOVING'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__SLOW_MOVING = 17
};

/// Constant 'STOP_N_GO'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__STOP_N_GO = 18
};

/// Constant 'CYCLIST'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__CYCLIST = 19
};

/// Constant 'PEDESTRIAN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__PEDESTRIAN = 20
};

/// Constant 'NON_MOTORIZED'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__NON_MOTORIZED = 21
};

/// Constant 'MILITARY'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleRole__MILITARY = 22
};

/// Struct defined in msg/BasicVehicleRole in the package j2735_v2x_msgs.
/**
  * BasicVehicleRole.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__BasicVehicleRole
{
  /// BasicVehicleRole ::= ENUMERATED {
  ///     -- Values used in the EU and in the US
  ///     basicVehicle     (0), -- Light duty passenger vehicle type
  ///     publicTransport  (1), -- Used in EU for Transit us
  ///     specialTransport (2), -- Used in EU (e.g. heavy load)
  ///     dangerousGoods   (3), -- Used in EU for any HAZMAT
  ///     roadWork         (4), -- Used in EU for State and Local DOT uses
  ///     roadRescue       (5), -- Used in EU and in the US to include tow trucks.
  ///     emergency        (6), -- Used in EU for Police, Fire and Ambulance units
  ///     safetyCar        (7), -- Used in EU for Escort vehicles
  ///     -- Begin US unique numbering
  ///     none-unknown     (8), -- added to follow current SAE style guidelines
  ///     truck            (9), -- Heavy trucks with additional BSM rights and obligations
  ///     motorcycle      (10), --
  ///     roadSideSource  (11), -- For infrastructure generated calls such as
  ///                           -- fire house, rail infrastructure, roadwork site, etc.
  ///     police          (12), --
  ///     fire            (13), --
  ///     ambulance       (14), -- (does not include private para-transit etc.)
  ///     dot             (15), -- all roadwork vehicles
  ///     transit         (16), -- all transit vehicles
  ///     slowMoving      (17), -- to also include oversize etc.
  ///     stopNgo         (18), -- to include trash trucks, school buses and others
  ///                           -- that routinely disturb the free flow of traffic
  ///     cyclist         (19), --
  ///     pedestrian      (20), -- also includes those with mobility limitations
  ///     nonMotorized    (21), -- other, horse drawn, etc.
  ///     military        (22), --
  ///     ...
  ///     }
  uint8_t basic_vehicle_role;
} j2735_v2x_msgs__msg__BasicVehicleRole;

// Struct for a sequence of j2735_v2x_msgs__msg__BasicVehicleRole.
typedef struct j2735_v2x_msgs__msg__BasicVehicleRole__Sequence
{
  j2735_v2x_msgs__msg__BasicVehicleRole * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BasicVehicleRole__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__STRUCT_H_
