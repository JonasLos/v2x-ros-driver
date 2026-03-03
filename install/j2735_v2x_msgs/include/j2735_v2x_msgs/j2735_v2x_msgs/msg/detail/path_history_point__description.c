// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/path_history_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PathHistoryPoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0x3f, 0x10, 0x96, 0xcc, 0x16, 0x63, 0x2c,
      0x87, 0xd4, 0xbe, 0xae, 0x0e, 0x40, 0xbe, 0xd1,
      0xc5, 0xdf, 0x69, 0x69, 0x84, 0x73, 0x30, 0x49,
      0x0f, 0x9d, 0x00, 0xa1, 0xa0, 0x54, 0x15, 0x74,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/coarse_heading__functions.h"
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"
#include "j2735_v2x_msgs/msg/detail/time_offset__functions.h"
#include "j2735_v2x_msgs/msg/detail/vert_offset_b12__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_llb18__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH = {1, {
    0x1f, 0x65, 0xfa, 0x36, 0x68, 0x7f, 0xac, 0x8e,
    0xcb, 0x56, 0x01, 0xff, 0x00, 0x6c, 0x22, 0x72,
    0xab, 0xbc, 0x40, 0xe8, 0x13, 0xef, 0xf1, 0x58,
    0xfb, 0x43, 0xd1, 0x0e, 0x99, 0x3d, 0xb9, 0xc8,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetLLB18__EXPECTED_HASH = {1, {
    0x60, 0x12, 0xa2, 0x3c, 0x8e, 0xd5, 0xc0, 0xfb,
    0x4b, 0xaa, 0x9e, 0xd8, 0x17, 0x1c, 0x07, 0xbc,
    0x85, 0x3b, 0x1b, 0x48, 0xd5, 0x58, 0x90, 0x14,
    0x5e, 0x7d, 0x12, 0x11, 0xb5, 0x27, 0xe3, 0xbb,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PositionalAccuracy__EXPECTED_HASH = {1, {
    0xc9, 0x81, 0xc5, 0xb3, 0x13, 0x72, 0xab, 0xba,
    0xca, 0x5a, 0xf5, 0xcd, 0xc2, 0xa2, 0x2b, 0xc9,
    0xfb, 0xa1, 0x73, 0x73, 0xed, 0x39, 0xf6, 0x8f,
    0x9e, 0xc7, 0x6c, 0xc3, 0xba, 0x5d, 0xfe, 0xdd,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Speed__EXPECTED_HASH = {1, {
    0xb8, 0xc8, 0xb7, 0x35, 0x92, 0xe5, 0x20, 0x47,
    0x80, 0x83, 0x56, 0x7f, 0xe3, 0x43, 0x2a, 0x05,
    0x0e, 0xc7, 0xf2, 0x83, 0xf5, 0x8d, 0x71, 0xc8,
    0xd4, 0x09, 0x3a, 0x2b, 0x41, 0x5b, 0xb1, 0xec,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TimeOffset__EXPECTED_HASH = {1, {
    0x9c, 0x0d, 0x74, 0xc8, 0xb3, 0xce, 0x4f, 0xa5,
    0x46, 0x07, 0x3b, 0xc3, 0x39, 0xa1, 0x4a, 0xe8,
    0x6b, 0x35, 0xb0, 0x94, 0x0b, 0x9b, 0x5b, 0x9f,
    0x7b, 0x61, 0x3c, 0xef, 0xb0, 0x88, 0xb1, 0x7c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VertOffsetB12__EXPECTED_HASH = {1, {
    0xbe, 0xf5, 0xf6, 0x06, 0x26, 0xd1, 0x52, 0x6e,
    0xfc, 0x08, 0xad, 0x64, 0x43, 0xb9, 0xca, 0xca,
    0x3d, 0x7e, 0xc3, 0x81, 0xe4, 0x40, 0x40, 0x95,
    0x1d, 0xbb, 0xd0, 0x3c, 0xb4, 0xe8, 0x6d, 0x34,
  }};
#endif

static char j2735_v2x_msgs__msg__PathHistoryPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathHistoryPoint";
static char j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoarseHeading";
static char j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetLLB18";
static char j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionalAccuracy";
static char j2735_v2x_msgs__msg__Speed__TYPE_NAME[] = "j2735_v2x_msgs/msg/Speed";
static char j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeOffset";
static char j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/VertOffsetB12";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__lat_offset[] = "lat_offset";
static char j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__lon_offset[] = "lon_offset";
static char j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__elevation_offset[] = "elevation_offset";
static char j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__time_offset[] = "time_offset";
static char j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__speed[] = "speed";
static char j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__pos_accuracy[] = "pos_accuracy";
static char j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__heading[] = "heading";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PathHistoryPoint__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__lat_offset, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__lon_offset, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__elevation_offset, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__time_offset, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Speed__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__pos_accuracy, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathHistoryPoint__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__PathHistoryPoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Speed__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__PathHistoryPoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PathHistoryPoint__TYPE_NAME, 35, 35},
      {j2735_v2x_msgs__msg__PathHistoryPoint__FIELDS, 7, 7},
    },
    {j2735_v2x_msgs__msg__PathHistoryPoint__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH, j2735_v2x_msgs__msg__CoarseHeading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__CoarseHeading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetLLB18__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetLLB18__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__OffsetLLB18__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PositionalAccuracy__EXPECTED_HASH, j2735_v2x_msgs__msg__PositionalAccuracy__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__PositionalAccuracy__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Speed__EXPECTED_HASH, j2735_v2x_msgs__msg__Speed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__Speed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TimeOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__TimeOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__TimeOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VertOffsetB12__EXPECTED_HASH, j2735_v2x_msgs__msg__VertOffsetB12__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__VertOffsetB12__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# PathHistoryPoint.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PathHistoryPoint from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PathHistoryPoint ::= SEQUENCE {\n"
  "#    latOffset       OffsetLL-B18,\n"
  "#    lonOffset       OffsetLL-B18,\n"
  "#    elevationOffset VertOffset-B12,  \n"
  "#    timeOffset      TimeOffset,\n"
  "#                    -- Offset backwards in time \n"
  "#    speed           Speed                 OPTIONAL, \n"
  "#                    -- Speed over the reported period\n"
  "#    posAccuracy     PositionalAccuracy    OPTIONAL, \n"
  "#                    -- The accuracy of this value\n"
  "#    heading         CoarseHeading         OPTIONAL, \n"
  "#                    -- overall heading \n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "j2735_v2x_msgs/OffsetLLB18 lat_offset\n"
  "j2735_v2x_msgs/OffsetLLB18 lon_offset\n"
  "\n"
  "j2735_v2x_msgs/VertOffsetB12 elevation_offset\n"
  "\n"
  "j2735_v2x_msgs/TimeOffset time_offset\n"
  "\n"
  "j2735_v2x_msgs/Speed speed\n"
  "\n"
  "j2735_v2x_msgs/PositionalAccuracy pos_accuracy\n"
  "\n"
  "j2735_v2x_msgs/CoarseHeading heading";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PathHistoryPoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PathHistoryPoint__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1023, 1023},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PathHistoryPoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PathHistoryPoint__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__CoarseHeading__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__OffsetLLB18__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__PositionalAccuracy__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__Speed__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__TimeOffset__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__VertOffsetB12__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
