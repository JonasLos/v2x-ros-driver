// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlRequestV01.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/traffic_control_request_v01__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrafficControlRequestV01__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0xb8, 0x1b, 0x1f, 0x5a, 0x3f, 0x05, 0xcc,
      0x7e, 0xd7, 0xc0, 0x59, 0xc7, 0x71, 0xef, 0x5e,
      0x7f, 0xd4, 0x38, 0xc1, 0x58, 0xe8, 0x34, 0x1d,
      0x05, 0x8b, 0x2b, 0x83, 0xb3, 0xc3, 0xa9, 0xdb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/id64b__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Id64b__EXPECTED_HASH = {1, {
    0x50, 0xc4, 0x8b, 0xe9, 0x00, 0xf5, 0xa0, 0xa0,
    0x2a, 0x20, 0xff, 0xe3, 0x21, 0xbc, 0x2c, 0x13,
    0x40, 0xa9, 0xfd, 0x57, 0x18, 0xe2, 0xea, 0xf1,
    0x90, 0x06, 0x79, 0xf4, 0x79, 0xb5, 0x00, 0xef,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetPoint__EXPECTED_HASH = {1, {
    0xef, 0x61, 0x9d, 0x87, 0x46, 0xff, 0x9e, 0xec,
    0x13, 0x3f, 0x41, 0x79, 0x90, 0xbc, 0xba, 0x80,
    0x53, 0x5d, 0x6a, 0xbe, 0xae, 0x5e, 0x9d, 0x0a,
    0x4b, 0x7f, 0xad, 0x2e, 0xaa, 0x02, 0xbf, 0x01,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrafficControlBounds__EXPECTED_HASH = {1, {
    0x48, 0x27, 0x64, 0x84, 0x3d, 0xd9, 0xd2, 0xd0,
    0x8b, 0x66, 0x50, 0x03, 0xc1, 0x03, 0x2a, 0x67,
    0xa4, 0xd1, 0x47, 0x88, 0x53, 0x5b, 0xb5, 0x94,
    0xa4, 0x3a, 0x34, 0x42, 0x40, 0xa6, 0xbf, 0x51,
  }};
#endif

static char j2735_v2x_msgs__msg__TrafficControlRequestV01__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlRequestV01";
static char j2735_v2x_msgs__msg__Id64b__TYPE_NAME[] = "j2735_v2x_msgs/msg/Id64b";
static char j2735_v2x_msgs__msg__OffsetPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetPoint";
static char j2735_v2x_msgs__msg__TrafficControlBounds__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlBounds";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrafficControlRequestV01__FIELD_NAME__reqid[] = "reqid";
static char j2735_v2x_msgs__msg__TrafficControlRequestV01__FIELD_NAME__reqseq[] = "reqseq";
static char j2735_v2x_msgs__msg__TrafficControlRequestV01__FIELD_NAME__scale[] = "scale";
static char j2735_v2x_msgs__msg__TrafficControlRequestV01__FIELD_NAME__bounds[] = "bounds";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrafficControlRequestV01__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrafficControlRequestV01__FIELD_NAME__reqid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Id64b__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlRequestV01__FIELD_NAME__reqseq, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlRequestV01__FIELD_NAME__scale, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlRequestV01__FIELD_NAME__bounds, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__TrafficControlBounds__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__TrafficControlRequestV01__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__Id64b__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetPoint__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlBounds__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TrafficControlRequestV01__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrafficControlRequestV01__TYPE_NAME, 43, 43},
      {j2735_v2x_msgs__msg__TrafficControlRequestV01__FIELDS, 4, 4},
    },
    {j2735_v2x_msgs__msg__TrafficControlRequestV01__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Id64b__EXPECTED_HASH, j2735_v2x_msgs__msg__Id64b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__Id64b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetPoint__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__OffsetPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrafficControlBounds__EXPECTED_HASH, j2735_v2x_msgs__msg__TrafficControlBounds__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__TrafficControlBounds__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# TrafficControlRequestV01.msg\n"
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
  "#TrafficControlRequestV01 ::= SEQUENCE\n"
  "#{\n"
  "#\\treqid Id64b, -- randomly generated ephemeral request identifier\n"
  "#\\treqseq INTEGER (0..255), -- sequential counter used to differentiate traffic control requests\n"
  "#\\tscale INTEGER (-3..3), -- vertex offset units 10^n meters\n"
  "#\\tbounds SEQUENCE (SIZE(1..63)) OF TrafficControlBounds\n"
  "#}\n"
  "\n"
  "\n"
  "# reqid ::= Id64b\n"
  "j2735_v2x_msgs/Id64b reqid\n"
  "\n"
  "# reqseq ::= INTEGER (0..255)\n"
  "uint8 reqseq\n"
  "\n"
  "# Scale ::= INTEGER (-3..3)  \n"
  "int8 scale\n"
  "\n"
  "# Bounds SEQUENCE (SIZE(1..63)) OF TrafficControlBounds\n"
  "j2735_v2x_msgs/TrafficControlBounds[] bounds\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrafficControlRequestV01__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrafficControlRequestV01__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 794, 794},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrafficControlRequestV01__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrafficControlRequestV01__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__Id64b__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__OffsetPoint__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__TrafficControlBounds__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
