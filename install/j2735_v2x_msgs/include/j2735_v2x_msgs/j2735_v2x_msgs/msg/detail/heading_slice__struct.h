// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/HeadingSlice.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/heading_slice.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NO_HEADING'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__NO_HEADING = 0
};

/// Constant 'FROM_000_0_TO_022_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_000_0_TO_022_5_DEGREES = 1
};

/// Constant 'FROM_022_5_TO_045_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_022_5_TO_045_0_DEGREES = 2
};

/// Constant 'FROM_045_0_TO_067_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_045_0_TO_067_5_DEGREES = 4
};

/// Constant 'FROM_067_5_TO_090_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_067_5_TO_090_0_DEGREES = 8
};

/// Constant 'FROM_090_0_TO_112_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_090_0_TO_112_5_DEGREES = 16
};

/// Constant 'FROM_112_5_TO_135_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_112_5_TO_135_0_DEGREES = 32
};

/// Constant 'FROM_135_0_TO_157_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_135_0_TO_157_5_DEGREES = 64
};

/// Constant 'FROM_157_5_TO_180_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_157_5_TO_180_0_DEGREES = 128
};

/// Constant 'FROM_180_0_TO_202_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_180_0_TO_202_5_DEGREES = 256
};

/// Constant 'FROM_202_5_TO_225_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_202_5_TO_225_0_DEGREES = 512
};

/// Constant 'FROM_225_0_TO_247_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_225_0_TO_247_5_DEGREES = 1024
};

/// Constant 'FROM_247_5_TO_270_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_247_5_TO_270_0_DEGREES = 2048
};

/// Constant 'FROM_270_0_TO_292_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_270_0_TO_292_5_DEGREES = 4096
};

/// Constant 'FROM_292_5_TO_315_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_292_5_TO_315_0_DEGREES = 8192
};

/// Constant 'FROM_315_0_TO_337_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_315_0_TO_337_5_DEGREES = 16384
};

/// Constant 'FROM_337_5_TO_360_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_337_5_TO_360_0_DEGREES = 32768
};

/// Constant 'ALL_HEADINGS'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__ALL_HEADINGS = 65535
};

/// Struct defined in msg/HeadingSlice in the package j2735_v2x_msgs.
/**
  * HeadingSlice.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__HeadingSlice
{
  /// HeadingSlice ::= BIT STRING {
  ///    -- Each bit 22.5 degree starting from
  ///    -- North and moving Eastward (clockwise) as one bit
  ///    -- a value of noHeading means no bits set, while a
  ///    -- a value of allHeadings means all bits would be set
  ///
  ///    from000-0to022-5degrees  (0),
  ///    from022-5to045-0degrees  (1),
  ///    from045-0to067-5degrees  (2),
  ///    from067-5to090-0degrees  (3),
  ///
  ///    from090-0to112-5degrees  (4),
  ///    from112-5to135-0degrees  (5),
  ///    from135-0to157-5degrees  (6),
  ///    from157-5to180-0degrees  (7),
  ///
  ///    from180-0to202-5degrees  (8),
  ///    from202-5to225-0degrees  (9),
  ///    from225-0to247-5degrees  (10),
  ///    from247-5to270-0degrees  (11),
  ///
  ///    from270-0to292-5degrees  (12),
  ///    from292-5to315-0degrees  (13),
  ///    from315-0to337-5degrees  (14),
  ///    from337-5to360-0degrees  (15)
  ///    }  (SIZE (16))
  uint16_t heading_slice;
} j2735_v2x_msgs__msg__HeadingSlice;

// Struct for a sequence of j2735_v2x_msgs__msg__HeadingSlice.
typedef struct j2735_v2x_msgs__msg__HeadingSlice__Sequence
{
  j2735_v2x_msgs__msg__HeadingSlice * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__HeadingSlice__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__STRUCT_H_
