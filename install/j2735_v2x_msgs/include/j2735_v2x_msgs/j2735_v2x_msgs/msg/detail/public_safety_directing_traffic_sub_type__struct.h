// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PublicSafetyDirectingTrafficSubType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/public_safety_directing_traffic_sub_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__UNAVAILABLE = 0
};

/// Constant 'POLICE_AND_TRAFFIC_OFFICERS'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__POLICE_AND_TRAFFIC_OFFICERS = 1
};

/// Constant 'TRAFFIC_CONTROL_PERSONS'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__TRAFFIC_CONTROL_PERSONS = 2
};

/// Constant 'RAILROAD_CROSSING_GURADS'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__RAILROAD_CROSSING_GURADS = 4
};

/// Constant 'CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE = 8
};

/// Constant 'EMERGENCY_ORGANIZATION_PERSONNEL'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__EMERGENCY_ORGANIZATION_PERSONNEL = 16
};

/// Constant 'HIGHWAY_SERVICE_VEHICLE_PERSONNEL'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__HIGHWAY_SERVICE_VEHICLE_PERSONNEL = 32
};

/// Struct defined in msg/PublicSafetyDirectingTrafficSubType in the package j2735_v2x_msgs.
/**
  * PublicSafetyDirectingTrafficSubType.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PublicSafetyDirectingTrafficSubType from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PublicSafetyDirectingTrafficSubType ::= BIT STRING {
  *    unavailable                        (0),
  *       -- Default.  
  *       -- to be used if unknown or if the worker type is not otherwise identified
  *    policeAndTrafficOfficers           (1), 
  *       -- Law enforcement officers, including traffic control officers,
  *       -- and adult school crossing guards.
  *    trafficControlPersons              (2), 
  *      -- Road workers with special equipment for directing traffic.
  *    railroadCrossingGuards             (3), 
  *      -- Railroad crossing guards who notify motorists of approaching trains 
  *      -- at locations like private roads or driveways crossing train tracks 
  *      -- and where automated equipment is disabled or not present. 
  *    civilDefenseNationalGuardMilitaryPolice (4),
  *         -- while performing their regular duties or during National
  *      -- or local emergencies
  *    emergencyOrganizationPersonnel     (5),
  *       -- Personnel belonging to emergency response organizations such as
  *       -- fire departments, hospitals, river rescue, or associated with
  *       -- emergency vehicles including ambulances as designated by the 
  *       -- regional authority (relating to designation of emergency vehicles)
  *       -- while performing their duties.
  *    highwayServiceVehiclePersonnel     (6)
  *       -- Associated with tow trucks and road service vehicles.
  *    } (SIZE (7, ...))
 */
typedef struct j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType
{
  /// A BIT STRING defining the presence of optional flags.
  /// Compare with bitwise-and
  /// if (sub_types & POLICE_AND_TRAFFIC_OFFICERS) etc.
  /// Create with bitwise-or
  /// sub_types = sub_types | POLICE_AND_TRAFFIC_OFFICERS
  uint8_t sub_types;
} j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType;

// Struct for a sequence of j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType.
typedef struct j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__Sequence
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__STRUCT_H_
