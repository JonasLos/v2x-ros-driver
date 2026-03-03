// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_geometry.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'REFLON_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLON_UNAVAILABLE = 1800000001l
};

/// Constant 'REFLON_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLON_MAX = 1800000000l
};

/// Constant 'REFLON_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLON_MIN = -1799999999l
};

/// Constant 'REFLAT_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLAT_UNAVAILABLE = 900000001l
};

/// Constant 'REFLAT_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLAT_MAX = 900000000l
};

/// Constant 'REFLAT_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLAT_MIN = -900000000l
};

/// Constant 'REFELV_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFELV_UNKNOWN = 0l
};

/// Constant 'REFELV_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFELV_MAX = 65535l
};

/// Constant 'REFELV_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFELV_MIN = 1l
};

/// Constant 'HEADING_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__HEADING_MAX = 3599
};

/// Constant 'HEADING_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__HEADING_MIN = 0
};

// Include directives for member types
// Member 'proj'
// Member 'datum'
#include "rosidl_runtime_c/string.h"
// Member 'nodes'
#include "j2735_v2x_msgs/msg/detail/path_node__struct.h"

/// Struct defined in msg/TrafficControlGeometry in the package j2735_v2x_msgs.
/**
  * TrafficControlGeometry.msg
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
typedef struct j2735_v2x_msgs__msg__TrafficControlGeometry
{
  /// TrafficControlGeometry ::= SEQUENCE
  /// {
  ///  proj IA5String (SIZE(0..63)),
  ///  datum IA5String (SIZE(0..63)),
  ///  reftime EpochMins,
  ///  reflon Longitude,
  ///  reflat Latitude,
  ///  refelv Elevation, -- decimeter offset -4096 from reference datum
  ///  heading INTEGER (0..3599), -- initial path heading clockwise from north in tenths of degrees
  ///  nodes SEQUENCE (SIZE(1..255)) OF PathNode
  /// }
  /// proj IA5String (SIZE(0..63)),
  rosidl_runtime_c__String proj;
  /// datum IA5String (SIZE(0..63)),
  rosidl_runtime_c__String datum;
  /// reftime EpochMins INTEGER (0..153722867280912) -- minutes since epoch January 1, 1970 00:00 UTC
  uint64_t reftime;
  /// reflon Longitude ::= INTEGER (-1799999999..1800000001)-- geographic longitude expressed in 1/10th microdegrees, 1800000001 represents null
  int32_t reflon;
  /// reflat Latitude ::= INTEGER (-900000000..900000001) -- geographic latitude expressed in 1/10th microdegrees, 900000001 represents null
  int32_t reflat;
  /// refelv Elevation ::= INTEGER (0..65535) -- offset by 4096, -4096 represents unknown, -409.5 to 6143.9 meters relative to referemce datum
  int32_t refelv;
  /// heading INTEGER (0..3599) -- initial path heading clockwise from north in tenths of degrees
  uint16_t heading;
  /// nodes SEQUENCE (SIZE(1..255)) OF PathNode
  j2735_v2x_msgs__msg__PathNode__Sequence nodes;
} j2735_v2x_msgs__msg__TrafficControlGeometry;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlGeometry.
typedef struct j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_H_
