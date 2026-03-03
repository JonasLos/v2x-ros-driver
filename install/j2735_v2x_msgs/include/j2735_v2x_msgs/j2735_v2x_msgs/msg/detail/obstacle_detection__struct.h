// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ObstacleDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/obstacle_detection.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_DESCRIPTION'.
enum
{
  j2735_v2x_msgs__msg__ObstacleDetection__HAS_DESCRIPTION = 1
};

/// Constant 'HAS_LOCATION_DETAILS'.
enum
{
  j2735_v2x_msgs__msg__ObstacleDetection__HAS_LOCATION_DETAILS = 2
};

/// Constant 'HAS_VERT_EVENT'.
enum
{
  j2735_v2x_msgs__msg__ObstacleDetection__HAS_VERT_EVENT = 4
};

/// Constant 'DESCRIPTION_MIN'.
enum
{
  j2735_v2x_msgs__msg__ObstacleDetection__DESCRIPTION_MIN = 523
};

/// Constant 'DESCRIPTION_MAX'.
enum
{
  j2735_v2x_msgs__msg__ObstacleDetection__DESCRIPTION_MAX = 541
};

// Include directives for member types
// Member 'ob_dist'
#include "j2735_v2x_msgs/msg/detail/obstacle_distance__struct.h"
// Member 'ob_direct'
#include "j2735_v2x_msgs/msg/detail/obstacle_direction__struct.h"
// Member 'date_time'
#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.h"
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__struct.h"
// Member 'location_details'
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__struct.h"
// Member 'vert_event'
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__struct.h"

/// Struct defined in msg/ObstacleDetection in the package j2735_v2x_msgs.
/**
  * ObstacleDetection.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__ObstacleDetection
{
  /// ObstacleDetection ::= SEQUENCE {
  ///    obDist          ObstacleDistance,        -- Obstacle Distance
  ///    obDirect        ObstacleDirection,       -- Obstacle Direction
  ///    description     ITIS.ITIScodes(523..541) OPTIONAL,
  ///                                             -- Uses a limited set of ITIS codes
  ///    locationDetails ITIS.GenericLocations OPTIONAL,
  ///    dateTime        DDateTime,               -- Time detected
  ///    vertEvent       VerticalAccelerationThreshold OPTIONAL,
  ///                                             -- Any wheels which have
  ///                                             -- exceeded the acceleration point
  ///    ...
  ///    }
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_DESCRIPTION) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_DESCRIPTION
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__ObstacleDistance ob_dist;
  j2735_v2x_msgs__msg__ObstacleDirection ob_direct;
  j2735_v2x_msgs__msg__DDateTime date_time;
  /// OPTIONAL FIELDS
  /// All fields below this section are optional.
  /// The presence of a given field can be idenfied by checking the presence_vector
  j2735_v2x_msgs__msg__ITIScodes description;
  j2735_v2x_msgs__msg__ITISGenericLocations location_details;
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold vert_event;
} j2735_v2x_msgs__msg__ObstacleDetection;

// Struct for a sequence of j2735_v2x_msgs__msg__ObstacleDetection.
typedef struct j2735_v2x_msgs__msg__ObstacleDetection__Sequence
{
  j2735_v2x_msgs__msg__ObstacleDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ObstacleDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__STRUCT_H_
