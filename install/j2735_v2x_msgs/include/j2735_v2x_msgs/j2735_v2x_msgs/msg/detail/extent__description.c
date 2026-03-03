// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Extent.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/extent__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Extent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0x06, 0xa4, 0x3f, 0x89, 0x96, 0x73, 0xb7,
      0x1b, 0xaf, 0x35, 0x96, 0x25, 0xa7, 0x17, 0x3f,
      0xd9, 0x4c, 0x08, 0x35, 0x5f, 0x0f, 0x5f, 0x3e,
      0xe7, 0x36, 0x5e, 0x3f, 0x90, 0xba, 0x6a, 0xb0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Extent__TYPE_NAME[] = "j2735_v2x_msgs/msg/Extent";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Extent__FIELD_NAME__extent_value[] = "extent_value";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Extent__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Extent__FIELD_NAME__extent_value, 12, 12},
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
j2735_v2x_msgs__msg__Extent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Extent__TYPE_NAME, 25, 25},
      {j2735_v2x_msgs__msg__Extent__FIELDS, 1, 1},
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
  "# Extent.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# Extent ::= ENUMERATED {\n"
  "#    useInstantlyOnly     (0),\n"
  "#    useFor3meters        (1),\n"
  "#    useFor10meters       (2),\n"
  "#    useFor50meters       (3),\n"
  "#    useFor100meters      (4),\n"
  "#    useFor500meters      (5),\n"
  "#    useFor1000meters     (6),\n"
  "#    useFor5000meters     (7),\n"
  "#    useFor10000meters    (8),\n"
  "#    useFor50000meters    (9),\n"
  "#    useFor100000meters   (10),\n"
  "#    useFor500000meters   (11),\n"
  "#    useFor1000000meters  (12),\n"
  "#    useFor5000000meters  (13),\n"
  "#    useFor10000000meters (14),\n"
  "#    forever              (15)  -- very wide area\n"
  "#    }  -- Encoded as a 4 bit value\n"
  "\n"
  "uint8 extent_value\n"
  "\n"
  "uint8 USE_INSTANTLY_ONLY=0\n"
  "uint8 USE_FOR_3_METERS=1\n"
  "uint8 USE_FOR_10_METERS=2\n"
  "uint8 USE_FOR_50_METERS=3\n"
  "uint8 USE_FOR_100_METERS=4\n"
  "uint8 USE_FOR_500_METERS=5\n"
  "uint8 USE_FOR_1000_METERS=6\n"
  "uint8 USE_FOR_5000_METERS=7\n"
  "uint8 USE_FOR_10000_METERS=8\n"
  "uint8 USE_FOR_50000_METERS=9\n"
  "uint8 USE_FOR_100000_METERS=10\n"
  "uint8 USE_FOR_500000_METERS=11\n"
  "uint8 USE_FOR_1000000_METERS=12\n"
  "uint8 USE_FOR_5000000_METERS=13\n"
  "uint8 USE_FOR_10000000_METERS=14\n"
  "uint8 FOREVER=15";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Extent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Extent__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1099, 1099},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Extent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Extent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
