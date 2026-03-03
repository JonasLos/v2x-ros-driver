// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PublicSafetyAndRoadWorkerActivity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/public_safety_and_road_worker_activity.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__STRUCT_H_

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
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__UNAVAILABLE = 0
};

/// Constant 'WORKING_ON_ROAD'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__WORKING_ON_ROAD = 1
};

/// Constant 'SETTING_UP_CLOSURES'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__SETTING_UP_CLOSURES = 2
};

/// Constant 'RESPONDING_TO_EVENTS'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__RESPONDING_TO_EVENTS = 4
};

/// Constant 'DIRECTING_TRAFFIC'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__DIRECTING_TRAFFIC = 8
};

/// Constant 'OTHER_ACTIVITIES'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__OTHER_ACTIVITIES = 16
};

/// Struct defined in msg/PublicSafetyAndRoadWorkerActivity in the package j2735_v2x_msgs.
/**
  * PublicSafetyAndRoadWorkerActivity.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PropelledInformation from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PublicSafetyAndRoadWorkerActivity ::= BIT STRING {
  *    unavailable          (0), -- Not specified
  *    workingOnRoad        (1), -- Road workers on foot, in or out of 
  *                              -- a closure, performing activities like: 
  *                              -- construction, land surveying, 
  *                              -- trash removal, or site inspection.
  *    settingUpClosures    (2), -- Road workers on foot performing
  *                              -- activities like: setting up signs, 
  *                              -- placing cones/barrels/pylons, or placing 
  *                              -- flares.  Note: People are in the road 
  *                              -- redirecting traffic, but the closure is 
  *                              -- not complete, so utmost care is required 
  *                              -- to determine the allowed path to take to 
  *                              -- avoid entering the work zone and/or 
  *                              -- harming the workers.
  *    respondingToEvents   (3), -- Public safety or other road workers on
  *                              -- foot performing activities like: treating 
  *                              -- injured people, putting out fires, 
  *                              -- cleaning chemical spills, aiding disabled 
  *                              -- vehicles, criminal investigations, 
  *                              -- or animal control.  Note: These events tend 
  *                              -- to be more dynamic than workingOnRoad
  *    directingTraffic     (4), -- Public safety or other road workers on
  *                              -- foot directing traffic in situations like: 
  *                              -- a traffic signal out of operation, 
  *                              -- a construction or crash site with a short 
  *                              -- term lane closure, a single lane flagging 
  *                              -- operation, or ingress/egress to a special event.
  *    otherActivities      (5)  -- Designated by regional authorities  
  *    } (SIZE (6, ...))
 */
typedef struct j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity
{
  /// A BIT STRING defining the presence of optional flags.
  /// Compare with bitwise-and
  /// if (activities & SETTING_UP_CLOSURES) etc.
  /// Create with bitwise-or
  /// activities = activities | SETTING_UP_CLOSURES
  uint8_t activities;
} j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity;

// Struct for a sequence of j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity.
typedef struct j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__Sequence
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__STRUCT_H_
