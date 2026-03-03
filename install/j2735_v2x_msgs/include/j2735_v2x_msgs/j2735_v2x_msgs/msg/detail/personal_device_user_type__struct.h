// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PersonalDeviceUserType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_device_user_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USER_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USER_TYPE__STRUCT_H_

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
  j2735_v2x_msgs__msg__PersonalDeviceUserType__UNAVAILABLE = 0
};

/// Constant 'A_PEDESTRIAN'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUserType__A_PEDESTRIAN = 1
};

/// Constant 'A_PEDALCYCLIST'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUserType__A_PEDALCYCLIST = 2
};

/// Constant 'A_PUBLIC_SAFETY_WORKER'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUserType__A_PUBLIC_SAFETY_WORKER = 3
};

/// Constant 'AN_ANIMAL'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUserType__AN_ANIMAL = 4
};

/// Struct defined in msg/PersonalDeviceUserType in the package j2735_v2x_msgs.
/**
  * PersonalDeviceUserType.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PersonalDeviceUserType from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
 */
typedef struct j2735_v2x_msgs__msg__PersonalDeviceUserType
{
  /// PersonalDeviceUserType ::= ENUMERATED {
  ///    unavailable           (0),
  ///    aPEDESTRIAN           (1), -- Further details may be provided elsewhere
  ///    aPEDALCYCLIST         (2), -- Presumed to be human propelled,
  ///                               -- unless PropelledInformation indicates motorized
  ///    aPUBLICSAFETYWORKER   (3),
  ///    anANIMAL              (4),
  ///    ...
  ///    }
  uint8_t type;
} j2735_v2x_msgs__msg__PersonalDeviceUserType;

// Struct for a sequence of j2735_v2x_msgs__msg__PersonalDeviceUserType.
typedef struct j2735_v2x_msgs__msg__PersonalDeviceUserType__Sequence
{
  j2735_v2x_msgs__msg__PersonalDeviceUserType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PersonalDeviceUserType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USER_TYPE__STRUCT_H_
