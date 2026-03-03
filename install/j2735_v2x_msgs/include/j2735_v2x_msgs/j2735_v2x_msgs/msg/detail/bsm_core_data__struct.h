// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm_core_data.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MSG_COUNT_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__MSG_COUNT_MAX = 127
};

/// Constant 'ID_TIME_MAX'.
/**
  * TemporaryID will change every 3000 seconds.
 */
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__ID_TIME_MAX = 3000
};

/// Constant 'SEC_MARK_MOD'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__SEC_MARK_MOD = 60000
};

/// Constant 'SEC_MARK_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__SEC_MARK_UNAVAILABLE = 65535
};

/// Constant 'LONGITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LONGITUDE_UNAVAILABLE = 1800000001l
};

/// Constant 'LONGITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LONGITUDE_MAX = 1800000000l
};

/// Constant 'LONGITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LONGITUDE_MIN = -1799999999l
};

/// Constant 'LATITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LATITUDE_UNAVAILABLE = 900000001l
};

/// Constant 'LATITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LATITUDE_MAX = 900000000l
};

/// Constant 'LATITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LATITUDE_MIN = -900000000l
};

/// Constant 'ELEVATION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__ELEVATION_UNAVAILABLE = -4096l
};

/// Constant 'ELEVATION_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__ELEVATION_MAX = 61439l
};

/// Constant 'ELEVATION_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__ELEVATION_MIN = -4095l
};

/// Constant 'SPEED_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__SPEED_UNAVAILABLE = 8191
};

/// Constant 'SPEED_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__SPEED_MAX = 8190
};

/// Constant 'SPEED_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__SPEED_MIN = 0
};

/// Constant 'HEADING_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__HEADING_UNAVAILABLE = 28800
};

/// Constant 'HEADING_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__HEADING_MAX = 28798
};

/// Constant 'HEADING_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__HEADING_MIN = 0
};

/// Constant 'STEER_WHEEL_ANGLE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__STEER_WHEEL_ANGLE_UNAVAILABLE = 127
};

/// Constant 'STEER_WHEEL_ANGLE_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__STEER_WHEEL_ANGLE_MAX = 126
};

/// Constant 'STEER_WHEEL_ANGLE_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__STEER_WHEEL_ANGLE_MIN = -126
};

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__struct.h"
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__struct.h"
// Member 'accel_set'
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__struct.h"
// Member 'brakes'
#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.h"
// Member 'size'
#include "j2735_v2x_msgs/msg/detail/vehicle_size__struct.h"

/// Struct defined in msg/BSMCoreData in the package j2735_v2x_msgs.
/**
  * BSMCoreData.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * Contains critical core elements deemed to be needed with every BSM issued.  
 */
typedef struct j2735_v2x_msgs__msg__BSMCoreData
{
  /// MsgCount ::= INTEGER (0..127)
  uint8_t msg_count;
  /// TemporaryID ::= OCTET STRING (SIZE(4))
  rosidl_runtime_c__uint8__Sequence id;
  /// DSecond ::= INTEGER (0..65535)
  ///   -- Integer values from 0 to 59999 represent the milliseconds within a minute
  ///   -- A leap second is represented by the value range 60000 to 60999
  ///   -- The values from 61000 to 65534 are reserved
  ///   -- The value of 65535 shall represent an unavailable value in the range of the minute
  ///   -- Unit is milliseconds
  uint16_t sec_mark;
  /// Longitude ::= INTEGER (-1799999999..1800000001)
  ///   -- LSB = 1/10 micro degree
  ///   -- Providing a range of plus-minus 180 degrees
  ///   -- Convert to degree with factor 0.0000001 when field is used
  int32_t longitude;
  /// Latitude ::= INTEGER (-900000000..900000001)
  ///   -- LSB = 1/10 micro degree
  ///   -- Providing a range of plus-minus 90 degrees
  ///   -- Convert to degree with factor 0.0000001 when field is used
  int32_t latitude;
  /// Elevation ::= INTEGER (-4096..61439)
  ///   -- In units of 10 cm steps above or below the reference ellipsoid
  ///   -- Providing a range of -409.5 to + 6143.9 meters
  ///   -- The value -4096 shall be used when Unknown is to be sent
  ///   -- Convert to meter with factor 0.1 when field is used
  int32_t elev;
  /// Used to model the accuracy of the positional determination with respect to each given axis.
  j2735_v2x_msgs__msg__PositionalAccuracy accuracy;
  /// Provide the current state of the vehicle transmission
  j2735_v2x_msgs__msg__TransmissionState transmission;
  /// Speed ::= INTEGER (0..8191) -- Units of 0.02 m/s
  ///   -- The value 8191 indicates that speed is unavailable
  ///   -- Convert to m/s with factor 0.02 when field is used
  uint16_t speed;
  /// Heading ::= INTEGER (0..28800)
  ///   -- LSB of 0.0125 degrees
  ///   -- A range of 0 to 359.9875 degrees
  ///   -- Convert to degree with factor 0.0125 when field is used
  uint16_t heading;
  /// SteeringWheelAngle ::= INTEGER (-126..127)
  ///   -- LSB units of 1.5 degrees, a range of -189 to +189 degrees
  ///   -- +001 = +1.5 deg
  ///   -- -126 = -189 deg and beyond
  ///   -- +126 = +189 deg and beyond
  ///   -- +127 to be used for unavailable
  ///   -- Convert to degree with factor 1.5 when this field is used
  int8_t angle;
  /// Set of acceleration values in 3 orthogonal directions of the vehicle and with yaw rotation rates expressed as a structure.
  j2735_v2x_msgs__msg__AccelerationSet4Way accel_set;
  /// Conveys a variety of information about the current brake and system control activity of the vehicle.
  j2735_v2x_msgs__msg__BrakeSystemStatus brakes;
  /// The vehicle length and width
  j2735_v2x_msgs__msg__VehicleSize size;
} j2735_v2x_msgs__msg__BSMCoreData;

// Struct for a sequence of j2735_v2x_msgs__msg__BSMCoreData.
typedef struct j2735_v2x_msgs__msg__BSMCoreData__Sequence
{
  j2735_v2x_msgs__msg__BSMCoreData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BSMCoreData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_
