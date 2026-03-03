// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TimeConfidence.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/time_confidence__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TimeConfidence__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0xec, 0x32, 0x9f, 0x3b, 0x01, 0xec, 0x1e,
      0x64, 0xaf, 0x49, 0x81, 0x82, 0x10, 0x49, 0x12,
      0x77, 0x69, 0x08, 0x1b, 0xc1, 0xcb, 0x23, 0xb5,
      0x16, 0xbb, 0xa8, 0x3a, 0xb9, 0x3f, 0x66, 0x07,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__TimeConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TimeConfidence__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TimeConfidence__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TimeConfidence__FIELD_NAME__confidence, 10, 10},
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
j2735_v2x_msgs__msg__TimeConfidence__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TimeConfidence__TYPE_NAME, 33, 33},
      {j2735_v2x_msgs__msg__TimeConfidence__FIELDS, 1, 1},
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
  "# TimeConfidence.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of TimeConfidence from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# TimeConfidence ::= ENUMERATED {\n"
  "#    unavailable              (0), -- Not Equipped or unavailable\n"
  "#    time-100-000             (1), -- Better than  100 Seconds\n"
  "#    time-050-000             (2), -- Better than  50 Seconds\n"
  "#    time-020-000             (3), -- Better than  20 Seconds\n"
  "#    time-010-000             (4), -- Better than  10 Seconds\n"
  "#    time-002-000             (5), -- Better than  2 Seconds\n"
  "#    time-001-000             (6), -- Better than  1 Second\n"
  "#    time-000-500             (7), -- Better than  0.5 Seconds\n"
  "#    time-000-200             (8), -- Better than  0.2 Seconds\n"
  "#    time-000-100             (9), -- Better than  0.1 Seconds\n"
  "#    time-000-050            (10), -- Better than  0.05 Seconds\n"
  "#    time-000-020            (11), -- Better than  0.02 Seconds\n"
  "#    time-000-010            (12), -- Better than  0.01 Seconds\n"
  "#    time-000-005            (13), -- Better than  0.005 Seconds\n"
  "#    time-000-002            (14), -- Better than  0.002 Seconds\n"
  "#    time-000-001            (15), -- Better than  0.001 Seconds\n"
  "#                                  -- Better than  one millisecond\n"
  "#    time-000-000-5          (16), -- Better than  0.000,5 Seconds\n"
  "#    time-000-000-2          (17), -- Better than  0.000,2 Seconds\n"
  "#    time-000-000-1          (18), -- Better than  0.000,1 Seconds\n"
  "#    time-000-000-05         (19), -- Better than  0.000,05 Seconds\n"
  "#    time-000-000-02         (20), -- Better than  0.000,02 Seconds\n"
  "#    time-000-000-01         (21), -- Better than  0.000,01 Seconds\n"
  "#    time-000-000-005        (22), -- Better than  0.000,005 Seconds\n"
  "#    time-000-000-002        (23), -- Better than  0.000,002 Seconds\n"
  "#    time-000-000-001        (24), -- Better than  0.000,001 Seconds \n"
  "#                                  -- Better than  one micro second\n"
  "#    time-000-000-000-5      (25), -- Better than  0.000,000,5 Seconds\n"
  "#    time-000-000-000-2      (26), -- Better than  0.000,000,2 Seconds\n"
  "#    time-000-000-000-1      (27), -- Better than  0.000,000,1 Seconds\n"
  "#    time-000-000-000-05     (28), -- Better than  0.000,000,05 Seconds\n"
  "#    time-000-000-000-02     (29), -- Better than  0.000,000,02 Seconds\n"
  "#    time-000-000-000-01     (30), -- Better than  0.000,000,01 Seconds\n"
  "#    time-000-000-000-005    (31), -- Better than  0.000,000,005 Seconds\n"
  "#    time-000-000-000-002    (32), -- Better than  0.000,000,002 Seconds\n"
  "#    time-000-000-000-001    (33), -- Better than  0.000,000,001 Seconds\n"
  "#                                  -- Better than  one nano second\n"
  "#    time-000-000-000-000-5  (34), -- Better than  0.000,000,000,5 Seconds\n"
  "#    time-000-000-000-000-2  (35), -- Better than  0.000,000,000,2 Seconds\n"
  "#    time-000-000-000-000-1  (36), -- Better than  0.000,000,000,1 Seconds\n"
  "#    time-000-000-000-000-05 (37), -- Better than  0.000,000,000,05 Seconds\n"
  "#    time-000-000-000-000-02 (38), -- Better than  0.000,000,000,02 Seconds\n"
  "#    time-000-000-000-000-01 (39)  -- Better than  0.000,000,000,01 Seconds \n"
  "#    }\n"
  "\n"
  "uint8 confidence\n"
  "\n"
  "uint8 UNAVAILABLE = 0\n"
  "uint8 TIME_100_000 = 1\n"
  "uint8 TIME_050_000 = 2\n"
  "uint8 TIME_020_000 = 3\n"
  "uint8 TIME_010_000 = 4\n"
  "uint8 TIME_002_000 = 5\n"
  "uint8 TIME_001_000 = 6\n"
  "uint8 TIME_000_500 = 7\n"
  "uint8 TIME_000_200 = 8\n"
  "uint8 TIME_000_100 = 9\n"
  "uint8 TIME_000_050 = 10\n"
  "uint8 TIME_000_020 = 11\n"
  "uint8 TIME_000_010 = 12\n"
  "uint8 TIME_000_005 = 13\n"
  "uint8 TIME_000_002 = 14\n"
  "uint8 TIME_000_001 = 15\n"
  "uint8 TIME_000_000_5 = 16\n"
  "uint8 TIME_000_000_2 = 17\n"
  "uint8 TIME_000_000_1 = 18\n"
  "uint8 TIME_000_000_05 = 19\n"
  "uint8 TIME_000_000_02 = 20\n"
  "uint8 TIME_000_000_01 = 21\n"
  "uint8 TIME_000_000_005 = 22\n"
  "uint8 TIME_000_000_002 = 23\n"
  "uint8 TIME_000_000_001 = 24\n"
  "uint8 TIME_000_000_000_5 = 25\n"
  "uint8 TIME_000_000_000_2 = 26\n"
  "uint8 TIME_000_000_000_1 = 27\n"
  "uint8 TIME_000_000_000_05 = 28\n"
  "uint8 TIME_000_000_000_02 = 29\n"
  "uint8 TIME_000_000_000_01 = 30\n"
  "uint8 TIME_000_000_000_005 = 31\n"
  "uint8 TIME_000_000_000_002 = 32\n"
  "uint8 TIME_000_000_000_001 = 33\n"
  "uint8 TIME_000_000_000_000_5 = 34\n"
  "uint8 TIME_000_000_000_000_2 = 35\n"
  "uint8 TIME_000_000_000_000_1 = 36\n"
  "uint8 TIME_000_000_000_000_05 = 37\n"
  "uint8 TIME_000_000_000_000_02 = 38\n"
  "uint8 TIME_000_000_000_000_01 = 39";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TimeConfidence__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TimeConfidence__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 4281, 4281},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TimeConfidence__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TimeConfidence__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
