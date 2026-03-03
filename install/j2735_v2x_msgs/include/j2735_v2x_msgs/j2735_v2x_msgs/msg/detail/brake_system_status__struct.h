// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/brake_system_status.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'wheel_brakes'
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__struct.h"
// Member 'traction'
#include "j2735_v2x_msgs/msg/detail/traction_control_status__struct.h"
// Member 'abs'
#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__struct.h"
// Member 'scs'
#include "j2735_v2x_msgs/msg/detail/stability_control_status__struct.h"
// Member 'brake_boost'
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__struct.h"
// Member 'aux_brakes'
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__struct.h"

/// Struct defined in msg/BrakeSystemStatus in the package j2735_v2x_msgs.
/**
  * BrakeSystemStatus.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * Conveys a variety of information about the current brake and system control activity of the vehicle.
 */
typedef struct j2735_v2x_msgs__msg__BrakeSystemStatus
{
  /// BrakeSystemStatus ::= SEQUENCE {
  ///    wheelBrakes        BrakeAppliedStatus,
  ///    traction           TractionControlStatus,
  ///    abs                AntiLockBrakeStatus,
  ///    scs                StabilityControlStatus,
  ///    brakeBoost         BrakeBoostApplied,
  ///    auxBrakes          AuxiliaryBrakeStatus
  ///    }
  /// BrakeAppliedStatus ::= BIT STRING {
  ///    unavailable (0),  -- When set, the brake applied status is unavailable
  ///    leftFront   (1),  -- Left Front Active
  ///    leftRear    (2),  -- Left Rear Active
  ///    rightFront  (3),  -- Right Front Active
  ///    rightRear   (4)   -- Right Rear Active
  ///    } (SIZE (5))
  j2735_v2x_msgs__msg__BrakeAppliedStatus wheel_brakes;
  /// TractionControlStatus ::= ENUMERATED {
  ///    unavailable (0), -- B'00  Not Equipped with traction control
  ///                     --       or traction control status is unavailable
  ///    off         (1), -- B'01  traction control is Off
  ///    on          (2), -- B'10  traction control is On (but not Engaged)
  ///    engaged     (3)  -- B'11  traction control is Engaged
  ///    }
  j2735_v2x_msgs__msg__TractionControlStatus traction;
  /// AntiLockBrakeStatus ::= ENUMERATED {
  ///    unavailable (0), -- B'00  Vehicle Not Equipped with ABS Brakes
  ///                     --       or ABS Brakes status is unavailable
  ///    off         (1), -- B'01  Vehicle's ABS are Off
  ///    on          (2), -- B'10  Vehicle's ABS are On ( but not Engaged )
  ///    engaged     (3)  -- B'11  Vehicle's ABS control is Engaged on any wheel
  ///    }
  j2735_v2x_msgs__msg__AntiLockBrakeStatus abs;
  /// StabilityControlStatus ::= ENUMERATED {
  ///    unavailable (0), -- B'00  Not Equipped with SC
  ///                     --       or SC status is unavailable
  ///    off         (1), -- B'01  Off
  ///    on          (2), -- B'10  On or active (but not engaged)
  ///    engaged     (3)  -- B'11  stability control is Engaged
  ///    }
  j2735_v2x_msgs__msg__StabilityControlStatus scs;
  /// BrakeBoostApplied ::= ENUMERATED {
  ///    unavailable   (0), -- Vehicle not equipped with brake boost
  ///                       -- or brake boost data is unavailable
  ///    off           (1), -- Vehicle's brake boost is off
  ///    on            (2)  -- Vehicle's brake boost is on (applied)
  ///    }
  j2735_v2x_msgs__msg__BrakeBoostApplied brake_boost;
  /// AuxiliaryBrakeStatus ::= ENUMERATED {
  ///    unavailable (0), -- B'00  Vehicle Not Equipped with Aux Brakes
  ///                     --       or Aux Brakes status is unavailable
  ///    off         (1), -- B'01  Vehicle's Aux Brakes are Off
  ///    on          (2), -- B'10  Vehicle's Aux Brakes are On ( Engaged )
  ///    reserved    (3)  -- B'11
  ///    }
  j2735_v2x_msgs__msg__AuxiliaryBrakeStatus aux_brakes;
} j2735_v2x_msgs__msg__BrakeSystemStatus;

// Struct for a sequence of j2735_v2x_msgs__msg__BrakeSystemStatus.
typedef struct j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence
{
  j2735_v2x_msgs__msg__BrakeSystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_H_
