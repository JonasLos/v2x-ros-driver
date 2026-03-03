// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/byte_array.h"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__STRUCT_H_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'message_type'
#include "rosidl_runtime_c/string.h"
// Member 'content'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ByteArray in the package carma_driver_msgs.
/**
  * ByteArray.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * Raw binary blobs from Drivers.Comms package and then parse the raw data according to the header. 
  * Currently all messages are DSRC message. 
  *
  * NOTE: Initial version only considers Part I. Part II will be defined for later use. 
 */
typedef struct carma_driver_msgs__msg__ByteArray
{
  std_msgs__msg__Header header;
  /// Need to know the type before parsing. MessageTypes are MAP, SPAT, TIM, BSM, Mobility.
  rosidl_runtime_c__String message_type;
  /// The DSRC message content
  rosidl_runtime_c__uint8__Sequence content;
} carma_driver_msgs__msg__ByteArray;

// Struct for a sequence of carma_driver_msgs__msg__ByteArray.
typedef struct carma_driver_msgs__msg__ByteArray__Sequence
{
  carma_driver_msgs__msg__ByteArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__msg__ByteArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__STRUCT_H_
