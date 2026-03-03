// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/connecting_lane__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ConnectingLane__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa8, 0xe3, 0xc4, 0x7b, 0xb0, 0xff, 0x57, 0x0d,
      0x48, 0x21, 0x01, 0x5c, 0x86, 0xa0, 0xdf, 0x53,
      0x9a, 0x4c, 0x8e, 0xf5, 0x9c, 0x0d, 0x44, 0xb7,
      0xdc, 0x48, 0xc0, 0xd0, 0x4b, 0x67, 0x51, 0xd0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AllowedManeuvers__EXPECTED_HASH = {1, {
    0x88, 0x10, 0x46, 0x7e, 0x1b, 0xf6, 0x40, 0x6f,
    0x24, 0x4a, 0x8f, 0xcf, 0x3c, 0x7d, 0xfb, 0x07,
    0x3f, 0xeb, 0x18, 0x34, 0xf7, 0x84, 0xda, 0xb5,
    0x70, 0x37, 0x05, 0x14, 0x4d, 0xcf, 0x62, 0x7e,
  }};
#endif

static char j2735_v2x_msgs__msg__ConnectingLane__TYPE_NAME[] = "j2735_v2x_msgs/msg/ConnectingLane";
static char j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME[] = "j2735_v2x_msgs/msg/AllowedManeuvers";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ConnectingLane__FIELD_NAME__lane[] = "lane";
static char j2735_v2x_msgs__msg__ConnectingLane__FIELD_NAME__maneuver[] = "maneuver";
static char j2735_v2x_msgs__msg__ConnectingLane__FIELD_NAME__maneuver_exists[] = "maneuver_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ConnectingLane__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ConnectingLane__FIELD_NAME__lane, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectingLane__FIELD_NAME__maneuver, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectingLane__FIELD_NAME__maneuver_exists, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__ConnectingLane__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__ConnectingLane__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ConnectingLane__TYPE_NAME, 33, 33},
      {j2735_v2x_msgs__msg__ConnectingLane__FIELDS, 3, 3},
    },
    {j2735_v2x_msgs__msg__ConnectingLane__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AllowedManeuvers__EXPECTED_HASH, j2735_v2x_msgs__msg__AllowedManeuvers__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AllowedManeuvers__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# ConnectingLane.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# ConnectingLane ::= SEQUENCE {\n"
  "# lane LaneID,\n"
  "# -- Index of the connecting lane\n"
  "# maneuver AllowedManeuvers OPTIONAL\n"
  "# -- The Maneuver between\n"
  "# -- the enclosing lane and this lane\n"
  "# -- at the stop line to connect them\n"
  "# }\n"
  "\n"
  "# LaneID ::= INTEGER (0..255)\n"
  "# -- the value 0 shall be used when the lane ID is\n"
  "# -- not available or not known\n"
  "# -- the value 255 is reserved for future use\n"
  "uint16 lane\n"
  "uint16 LANE_UNAVAILABLE=0\n"
  "\n"
  "# -- the permitted maneuvers for this lane\n"
  "# AllowedManeuvers ::= BIT STRING {\n"
  "# -- With bits as defined:\n"
  "# -- Allowed maneuvers at path end (stop line)\n"
  "# -- *** All maneuvers with bits not set are therefore prohibited ! ***\n"
  "# -- A value of zero shall be used for unknown, indicating no Maneuver\n"
  "j2735_v2x_msgs/AllowedManeuvers maneuver\n"
  "bool maneuver_exists\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ConnectingLane__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ConnectingLane__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 876, 876},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ConnectingLane__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ConnectingLane__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AllowedManeuvers__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
