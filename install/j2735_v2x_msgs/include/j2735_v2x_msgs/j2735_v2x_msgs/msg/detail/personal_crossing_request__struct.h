// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PersonalCrossingRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_crossing_request.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_REQUEST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/PersonalCrossingRequest in the package j2735_v2x_msgs.
/**
  * PersonalCrossingRequest.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PersonalCrossingRequest from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PersonalCrossingRequest ::= BOOLEAN 
  *    -- Use:
  *    -- True  = On  (request crossing)
  *    -- False = Off (no request)
 */
typedef struct j2735_v2x_msgs__msg__PersonalCrossingRequest
{
  bool cross_request;
} j2735_v2x_msgs__msg__PersonalCrossingRequest;

// Struct for a sequence of j2735_v2x_msgs__msg__PersonalCrossingRequest.
typedef struct j2735_v2x_msgs__msg__PersonalCrossingRequest__Sequence
{
  j2735_v2x_msgs__msg__PersonalCrossingRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PersonalCrossingRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_REQUEST__STRUCT_H_
