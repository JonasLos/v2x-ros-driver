// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/EventDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/event_description.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_PRIORITY'.
enum
{
  j2735_v2x_msgs__msg__EventDescription__HAS_PRIORITY = 1
};

/// Constant 'HAS_HEADING'.
enum
{
  j2735_v2x_msgs__msg__EventDescription__HAS_HEADING = 2
};

/// Constant 'HAS_EXTENT'.
enum
{
  j2735_v2x_msgs__msg__EventDescription__HAS_EXTENT = 4
};

/// Constant 'HAS_DESCRIPTION'.
enum
{
  j2735_v2x_msgs__msg__EventDescription__HAS_DESCRIPTION = 8
};

/// Constant 'DESCRIPTION_SIZE_MIN'.
enum
{
  j2735_v2x_msgs__msg__EventDescription__DESCRIPTION_SIZE_MIN = 1
};

/// Constant 'DESCRIPTION_SIZE_MAX'.
enum
{
  j2735_v2x_msgs__msg__EventDescription__DESCRIPTION_SIZE_MAX = 8
};

// Include directives for member types
// Member 'type_event'
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__struct.h"
// Member 'priority'
#include "j2735_v2x_msgs/msg/detail/priority__struct.h"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading_slice__struct.h"
// Member 'extent'
#include "j2735_v2x_msgs/msg/detail/extent__struct.h"

/// Struct defined in msg/EventDescription in the package j2735_v2x_msgs.
/**
  * EventDescription.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__EventDescription
{
  /// EventDescription ::= SEQUENCE {
  ///    typeEvent     ITIS.ITIScodes,
  ///                  -- A category and an item from that category
  ///                  -- all ITS stds use the same types here
  ///                  -- to explain the type of  the
  ///                  -- alert / danger / hazard involved
  ///    description   SEQUENCE (SIZE(1..8)) OF ITIS.ITIScodes OPTIONAL,
  ///                  -- Up to eight ITIS code set entries to further
  ///                  -- describe the event, give advice, or any
  ///                  -- other ITIS codes
  ///    priority      Priority OPTIONAL,
  ///                  -- The urgency of this message, a relative
  ///                  -- degree of merit compared with other
  ///                  -- similar messages for this type (not other
  ///                  -- messages being sent by the device), nor
  ///                  -- is it a priority of display urgency
  ///    heading       HeadingSlice  OPTIONAL,
  ///                  -- Applicable headings/direction
  ///    extent        Extent OPTIONAL,
  ///                  -- The spatial distance over which this
  ///                  -- message applies and should be presented to the driver
  ///    regional      SEQUENCE (SIZE(1..4)) OF
  ///                  RegionalExtension {{REGION.Reg-EventDescription}} OPTIONAL,
  ///    ...
  ///    }
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_PRIORITY) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_PRIORITY
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__ITIScodes type_event;
  /// OPTIONAL FIELDS
  /// All fields below this section are optional.
  /// The presence of a given field can be idenfied by checking the presence_vector
  j2735_v2x_msgs__msg__Priority priority;
  j2735_v2x_msgs__msg__HeadingSlice heading;
  j2735_v2x_msgs__msg__Extent extent;
  j2735_v2x_msgs__msg__ITIScodes__Sequence description;
} j2735_v2x_msgs__msg__EventDescription;

// Struct for a sequence of j2735_v2x_msgs__msg__EventDescription.
typedef struct j2735_v2x_msgs__msg__EventDescription__Sequence
{
  j2735_v2x_msgs__msg__EventDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__EventDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__STRUCT_H_
