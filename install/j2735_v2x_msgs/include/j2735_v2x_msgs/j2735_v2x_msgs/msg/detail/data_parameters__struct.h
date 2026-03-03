// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DataParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/data_parameters.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'process_method'
// Member 'process_agency'
// Member 'last_checked_date'
// Member 'geoid_used'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DataParameters in the package j2735_v2x_msgs.
/**
  * MapData.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DataParameters data frame is used to provide basic (static) information
  * on how a map fragment was processed or determined.
  *
  * DataParameters ::= SEQUENCE {
  * processMethod IA5String(SIZE(1..255))
  * processAgency IA5String(SIZE(1..255))
  * lastCheckedDate IA5String(SIZE(1..255))
  * geoidUsed IA5String(SIZE(1..255))
  * ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__DataParameters
{
  rosidl_runtime_c__String process_method;
  rosidl_runtime_c__String process_agency;
  rosidl_runtime_c__String last_checked_date;
  rosidl_runtime_c__String geoid_used;
} j2735_v2x_msgs__msg__DataParameters;

// Struct for a sequence of j2735_v2x_msgs__msg__DataParameters.
typedef struct j2735_v2x_msgs__msg__DataParameters__Sequence
{
  j2735_v2x_msgs__msg__DataParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DataParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__STRUCT_H_
