// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ElevationConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/elevation_confidence.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_H_

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
  j2735_v2x_msgs__msg__ElevationConfidence__UNAVAILABLE = 0
};

/// Constant 'ELEV_500_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_500_00 = 1
};

/// Constant 'ELEV_200_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_200_00 = 2
};

/// Constant 'ELEV_100_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_100_00 = 3
};

/// Constant 'ELEV_050_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_050_00 = 4
};

/// Constant 'ELEV_020_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_020_00 = 5
};

/// Constant 'ELEV_010_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_010_00 = 6
};

/// Constant 'ELEV_005_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_005_00 = 7
};

/// Constant 'ELEV_002_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_002_00 = 8
};

/// Constant 'ELEV_001_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_001_00 = 9
};

/// Constant 'ELEV_000_50'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_50 = 10
};

/// Constant 'ELEV_000_20'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_20 = 11
};

/// Constant 'ELEV_000_10'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_10 = 12
};

/// Constant 'ELEV_000_05'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_05 = 13
};

/// Constant 'ELEV_000_02'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_02 = 14
};

/// Constant 'ELEV_000_01'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_01 = 15
};

/// Struct defined in msg/ElevationConfidence in the package j2735_v2x_msgs.
/**
  * ElevationConfidence.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of ElevationConfidence from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * ElevationConfidence ::= ENUMERATED {
  *    unavailable (0),  -- B'0000  Not Equipped or unavailable
  *    elev-500-00 (1),  -- B'0001  (500 m)
  *    elev-200-00 (2),  -- B'0010  (200 m)
  *    elev-100-00 (3),  -- B'0011  (100 m)
  *    elev-050-00 (4),  -- B'0100  (50 m)
  *    elev-020-00 (5),  -- B'0101  (20 m)
  *    elev-010-00 (6),  -- B'0110  (10 m)
  *    elev-005-00 (7),  -- B'0111  (5 m)
  *    elev-002-00 (8),  -- B'1000  (2 m)
  *    elev-001-00 (9),  -- B'1001  (1 m)
  *    elev-000-50 (10), -- B'1010  (50 cm)
  *    elev-000-20 (11), -- B'1011  (20 cm)
  *    elev-000-10 (12), -- B'1100  (10 cm)
  *    elev-000-05 (13), -- B'1101  (5 cm)
  *    elev-000-02 (14), -- B'1110  (2 cm)
  *    elev-000-01 (15)  -- B'1111  (1 cm)
  *    }
 */
typedef struct j2735_v2x_msgs__msg__ElevationConfidence
{
  uint8_t confidence;
} j2735_v2x_msgs__msg__ElevationConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__ElevationConfidence.
typedef struct j2735_v2x_msgs__msg__ElevationConfidence__Sequence
{
  j2735_v2x_msgs__msg__ElevationConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ElevationConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_H_
