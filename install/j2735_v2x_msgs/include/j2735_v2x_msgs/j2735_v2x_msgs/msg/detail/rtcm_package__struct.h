// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RTCMPackage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/rtcm_package.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_RTCM_HEADER'.
enum
{
  j2735_v2x_msgs__msg__RTCMPackage__HAS_RTCM_HEADER = 1
};

// Include directives for member types
// Member 'rtcm_header'
#include "j2735_v2x_msgs/msg/detail/rtcm_header__struct.h"
// Member 'messages'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RTCMPackage in the package j2735_v2x_msgs.
/**
  * RTCMPackage.msg
  *
  * Modified J2735 2016 message format, adjusted to use base SI units (m,s, etc) in most case.
 */
typedef struct j2735_v2x_msgs__msg__RTCMPackage
{
  /// RTCMPackage ::= SEQUENCE {
  ///    -- precise antenna position and noise data for a rover
  ///    rtcmHeader  RTCMheader OPTIONAL,
  ///
  ///    -- one or more RTCM messages
  ///    msgs        RTCMmessageList,
  ///    ...
  ///    }
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_RTCM_HEADER) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_RTCM_HEADER
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__RTCMHeader rtcm_header;
  ///  The RTCMmessage data element contains the stream of octets of the actual RTCM message that is being sent. The
  ///  message’s contents are defined in RTCM Standard 10403.1 and in RTCM Standard 10402.1 and its successors. Note that
  ///  most RTCM messages are considerably smaller than the size limit defined here, but that some messages may need to be
  ///  broken into smaller messages (as per the rules defined in the RTCM work) in order to be transmitted using V2X
  /// communications.
  rosidl_runtime_c__uint8__Sequence messages;
} j2735_v2x_msgs__msg__RTCMPackage;

// Struct for a sequence of j2735_v2x_msgs__msg__RTCMPackage.
typedef struct j2735_v2x_msgs__msg__RTCMPackage__Sequence
{
  j2735_v2x_msgs__msg__RTCMPackage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RTCMPackage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__STRUCT_H_
