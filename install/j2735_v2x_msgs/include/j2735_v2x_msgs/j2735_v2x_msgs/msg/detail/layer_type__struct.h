// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LayerType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/layer_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LAYER_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LAYER_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
/**
  * LayerType ::= ENUMERATED {
  * none,
  * mixedContent, -- two or more of the below types
  * generalMapData,
  * intersectionData,
  * curveData,
  * roadwaySectionData,
  * parkingAreaData,
  * sharedLaneData,
  * ...
  * }
  * enumeration values for plan type:
 */
enum
{
  j2735_v2x_msgs__msg__LayerType__NONE = 0
};

/// Constant 'MIXED_CONTENT'.
enum
{
  j2735_v2x_msgs__msg__LayerType__MIXED_CONTENT = 1
};

/// Constant 'GENERAL_MAP_DATA'.
enum
{
  j2735_v2x_msgs__msg__LayerType__GENERAL_MAP_DATA = 2
};

/// Constant 'INTERSECTION_DATA'.
enum
{
  j2735_v2x_msgs__msg__LayerType__INTERSECTION_DATA = 3
};

/// Constant 'CURVE_DATA'.
enum
{
  j2735_v2x_msgs__msg__LayerType__CURVE_DATA = 4
};

/// Constant 'ROADWAY_SECTION_DATA'.
enum
{
  j2735_v2x_msgs__msg__LayerType__ROADWAY_SECTION_DATA = 5
};

/// Constant 'PARKING_AREA_DATA'.
enum
{
  j2735_v2x_msgs__msg__LayerType__PARKING_AREA_DATA = 6
};

/// Constant 'SHARED_LANE_DATA'.
enum
{
  j2735_v2x_msgs__msg__LayerType__SHARED_LANE_DATA = 7
};

/// Struct defined in msg/LayerType in the package j2735_v2x_msgs.
/**
  * LayerType.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * Data element used to uniquely identify the type of information to be found in a layer of geographic map fragment
  * such as an intersection.
 */
typedef struct j2735_v2x_msgs__msg__LayerType
{
  uint8_t layer_type;
} j2735_v2x_msgs__msg__LayerType;

// Struct for a sequence of j2735_v2x_msgs__msg__LayerType.
typedef struct j2735_v2x_msgs__msg__LayerType__Sequence
{
  j2735_v2x_msgs__msg__LayerType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LayerType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LAYER_TYPE__STRUCT_H_
