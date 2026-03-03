// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ElevationConfidence.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/elevation_confidence__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ElevationConfidence__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x00, 0xa2, 0x1c, 0xd6, 0xc7, 0x69, 0x48, 0xca,
      0xb7, 0x24, 0xb3, 0x6a, 0xa3, 0xb2, 0xdd, 0x8f,
      0x5f, 0x5a, 0x6d, 0xb4, 0x94, 0x6d, 0x79, 0x98,
      0xac, 0x9d, 0x6e, 0x00, 0x33, 0xbc, 0x4d, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ElevationConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/ElevationConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ElevationConfidence__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ElevationConfidence__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ElevationConfidence__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__ElevationConfidence__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ElevationConfidence__TYPE_NAME, 38, 38},
      {j2735_v2x_msgs__msg__ElevationConfidence__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# ElevationConfidence.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of ElevationConfidence from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# ElevationConfidence ::= ENUMERATED {\n"
  "#    unavailable (0),  -- B'0000  Not Equipped or unavailable\n"
  "#    elev-500-00 (1),  -- B'0001  (500 m)\n"
  "#    elev-200-00 (2),  -- B'0010  (200 m)\n"
  "#    elev-100-00 (3),  -- B'0011  (100 m)\n"
  "#    elev-050-00 (4),  -- B'0100  (50 m)\n"
  "#    elev-020-00 (5),  -- B'0101  (20 m)\n"
  "#    elev-010-00 (6),  -- B'0110  (10 m)\n"
  "#    elev-005-00 (7),  -- B'0111  (5 m)\n"
  "#    elev-002-00 (8),  -- B'1000  (2 m)\n"
  "#    elev-001-00 (9),  -- B'1001  (1 m)\n"
  "#    elev-000-50 (10), -- B'1010  (50 cm)\n"
  "#    elev-000-20 (11), -- B'1011  (20 cm)\n"
  "#    elev-000-10 (12), -- B'1100  (10 cm)\n"
  "#    elev-000-05 (13), -- B'1101  (5 cm)\n"
  "#    elev-000-02 (14), -- B'1110  (2 cm)\n"
  "#    elev-000-01 (15)  -- B'1111  (1 cm)\n"
  "#    }\n"
  "\n"
  "uint8 confidence\n"
  "\n"
  "uint8 UNAVAILABLE = 0\n"
  "uint8 ELEV_500_00 = 1\n"
  "uint8 ELEV_200_00 = 2\n"
  "uint8 ELEV_100_00 = 3\n"
  "uint8 ELEV_050_00 = 4\n"
  "uint8 ELEV_020_00 = 5\n"
  "uint8 ELEV_010_00 = 6\n"
  "uint8 ELEV_005_00 = 7\n"
  "uint8 ELEV_002_00 = 8\n"
  "uint8 ELEV_001_00 = 9\n"
  "uint8 ELEV_000_50 = 10\n"
  "uint8 ELEV_000_20 = 11\n"
  "uint8 ELEV_000_10 = 12\n"
  "uint8 ELEV_000_05 = 13\n"
  "uint8 ELEV_000_02 = 14\n"
  "uint8 ELEV_000_01 = 15";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ElevationConfidence__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ElevationConfidence__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1303, 1303},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ElevationConfidence__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ElevationConfidence__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
