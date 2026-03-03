// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrafficControlBounds__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x27, 0x64, 0x84, 0x3d, 0xd9, 0xd2, 0xd0,
      0x8b, 0x66, 0x50, 0x03, 0xc1, 0x03, 0x2a, 0x67,
      0xa4, 0xd1, 0x47, 0x88, 0x53, 0x5b, 0xb5, 0x94,
      0xa4, 0x3a, 0x34, 0x42, 0x40, 0xa6, 0xbf, 0x51,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/offset_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetPoint__EXPECTED_HASH = {1, {
    0xef, 0x61, 0x9d, 0x87, 0x46, 0xff, 0x9e, 0xec,
    0x13, 0x3f, 0x41, 0x79, 0x90, 0xbc, 0xba, 0x80,
    0x53, 0x5d, 0x6a, 0xbe, 0xae, 0x5e, 0x9d, 0x0a,
    0x4b, 0x7f, 0xad, 0x2e, 0xaa, 0x02, 0xbf, 0x01,
  }};
#endif

static char j2735_v2x_msgs__msg__TrafficControlBounds__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlBounds";
static char j2735_v2x_msgs__msg__OffsetPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetPoint";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrafficControlBounds__FIELD_NAME__oldest[] = "oldest";
static char j2735_v2x_msgs__msg__TrafficControlBounds__FIELD_NAME__reflon[] = "reflon";
static char j2735_v2x_msgs__msg__TrafficControlBounds__FIELD_NAME__reflat[] = "reflat";
static char j2735_v2x_msgs__msg__TrafficControlBounds__FIELD_NAME__offsets[] = "offsets";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrafficControlBounds__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrafficControlBounds__FIELD_NAME__oldest, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlBounds__FIELD_NAME__reflon, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlBounds__FIELD_NAME__reflat, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlBounds__FIELD_NAME__offsets, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      3,
      0,
      {j2735_v2x_msgs__msg__OffsetPoint__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__TrafficControlBounds__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__OffsetPoint__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TrafficControlBounds__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrafficControlBounds__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__TrafficControlBounds__FIELDS, 4, 4},
    },
    {j2735_v2x_msgs__msg__TrafficControlBounds__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetPoint__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__OffsetPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# TrafficControlBounds.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# ...\n"
  "\n"
  "\n"
  "#TrafficControlBounds ::= SEQUENCE\n"
  "#{\n"
  "#\\toldest EpochMins, -- timestamp of oldest traffic control message within bounds\n"
  "#\\treflon Longitude, -- initial vertex reference longitude\n"
  "#\\treflat Latitude, -- initial vertex reference latitude\n"
  "#\\toffsets SEQUENCE (SIZE(3)) OF OffsetPoint -- relative vertex positions in scaled meters\n"
  "#}\n"
  "\n"
  "#oldest ::= EpochMins\n"
  "uint64 oldest\n"
  "\n"
  "# reflon ::= INTEGER (-1799999999..1800000000)\n"
  "#  -- initial vertex reference longitude\n"
  "#  -- LSB = 1/10 micro degree\n"
  "#  -- Providing a range of plus-minus 180 degrees\n"
  "#  -- Convert to degree with factor 0.0000001 when field is used\n"
  "int32 reflon\n"
  "\n"
  "int32 REFLON_MAX = 1800000000\n"
  "int32 REFLON_MIN = -1799999999\n"
  "int32 REFLON_UNAVAILABLE = 1800000001\n"
  "\n"
  "\n"
  "# reflat ::= INTEGER (-900000000..900000000)\n"
  "#  -- initial vertex reference latitude\n"
  "#  -- LSB = 1/10 micro degree\n"
  "#  -- Providing a range of plus-minus 90 degrees\n"
  "#  -- Convert to degree with factor 0.0000001 when field is used\n"
  "int32 reflat\n"
  "\n"
  "int32 REFLAT_MAX = 900000000\n"
  "int32 REFLAT_MIN = -900000000\n"
  "int32 REFLAT_UNAVAILABLE = 900000001\n"
  "\n"
  "#offsets ::= SEQUENCE (SIZE(3)) OF OffsetPoint \n"
  "j2735_v2x_msgs/OffsetPoint[3] offsets";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrafficControlBounds__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrafficControlBounds__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1338, 1338},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrafficControlBounds__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrafficControlBounds__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__OffsetPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
