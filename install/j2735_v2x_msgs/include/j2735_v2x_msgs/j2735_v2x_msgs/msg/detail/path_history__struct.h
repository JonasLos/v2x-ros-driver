// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/path_history.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_CURR_GNSS_STATUS'.
enum
{
  j2735_v2x_msgs__msg__PathHistory__HAS_CURR_GNSS_STATUS = 1
};

/// Constant 'HAS_INITIAL_POSITION'.
enum
{
  j2735_v2x_msgs__msg__PathHistory__HAS_INITIAL_POSITION = 2
};

// Include directives for member types
// Member 'crumb_data'
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__struct.h"
// Member 'initial_position'
#include "j2735_v2x_msgs/msg/detail/full_position_vector__struct.h"
// Member 'curr_gnss_status'
#include "j2735_v2x_msgs/msg/detail/gnss_status__struct.h"

/// Struct defined in msg/PathHistory in the package j2735_v2x_msgs.
/**
  * PathHistory.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PathHistory from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PathHistory ::= SEQUENCE {
  *    initialPosition  FullPositionVector    OPTIONAL,
  *    currGNSSstatus   GNSSstatus            OPTIONAL,   
  *    crumbData       PathHistoryPointList,
  *    ...
  *    }
 */
typedef struct j2735_v2x_msgs__msg__PathHistory
{
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_CURR_GNSS_STATUS) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_CURR_GNSS_STATUS
  uint8_t presence_vector;
  j2735_v2x_msgs__msg__PathHistoryPointList crumb_data;
  /// OPTIONAL FIELDS
  /// All fields below this section are optional.
  /// The presence of a given field can be idenfied by checking the precense_vector
  j2735_v2x_msgs__msg__FullPositionVector initial_position;
  j2735_v2x_msgs__msg__GNSSStatus curr_gnss_status;
} j2735_v2x_msgs__msg__PathHistory;

// Struct for a sequence of j2735_v2x_msgs__msg__PathHistory.
typedef struct j2735_v2x_msgs__msg__PathHistory__Sequence
{
  j2735_v2x_msgs__msg__PathHistory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PathHistory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_
