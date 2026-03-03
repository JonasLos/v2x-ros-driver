// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PathHistoryPointList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/path_history_point_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PathHistoryPointList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0xe5, 0xbf, 0x42, 0x05, 0x5a, 0x3c, 0x1c,
      0x69, 0x42, 0xbc, 0xb4, 0x24, 0x1f, 0x04, 0xc6,
      0xad, 0x8f, 0xd7, 0x3a, 0xd2, 0xaa, 0x21, 0x70,
      0x3e, 0x31, 0xa9, 0x0a, 0xc5, 0xe2, 0x66, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/path_history_point__functions.h"
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PathHistoryPoint__EXPECTED_HASH = {1, {
    0xf9, 0x3f, 0x10, 0x96, 0xcc, 0x16, 0x63, 0x2c,
    0x87, 0xd4, 0xbe, 0xae, 0x0e, 0x40, 0xbe, 0xd1,
    0xc5, 0xdf, 0x69, 0x69, 0x84, 0x73, 0x30, 0x49,
    0x0f, 0x9d, 0x00, 0xa1, 0xa0, 0x54, 0x15, 0x74,
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

static char j2735_v2x_msgs__msg__PathHistoryPointList__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathHistoryPointList";
static char j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoarseHeading";
static char j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetLLB18";
static char j2735_v2x_msgs__msg__PathHistoryPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathHistoryPoint";
static char j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionalAccuracy";
static char j2735_v2x_msgs__msg__Speed__TYPE_NAME[] = "j2735_v2x_msgs/msg/Speed";
static char j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeOffset";
static char j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/VertOffsetB12";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PathHistoryPointList__FIELD_NAME__points[] = "points";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PathHistoryPointList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PathHistoryPointList__FIELD_NAME__points, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__PathHistoryPoint__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__PathHistoryPointList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathHistoryPoint__TYPE_NAME, 35, 35},
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
j2735_v2x_msgs__msg__PathHistoryPointList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PathHistoryPointList__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__PathHistoryPointList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__PathHistoryPointList__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH, j2735_v2x_msgs__msg__CoarseHeading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__CoarseHeading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetLLB18__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetLLB18__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__OffsetLLB18__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathHistoryPoint__EXPECTED_HASH, j2735_v2x_msgs__msg__PathHistoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__PathHistoryPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PositionalAccuracy__EXPECTED_HASH, j2735_v2x_msgs__msg__PositionalAccuracy__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__PositionalAccuracy__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Speed__EXPECTED_HASH, j2735_v2x_msgs__msg__Speed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__Speed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TimeOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__TimeOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__TimeOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VertOffsetB12__EXPECTED_HASH, j2735_v2x_msgs__msg__VertOffsetB12__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__VertOffsetB12__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# PathHistoryPointList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PathHistoryPointList from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PathHistoryPointList ::= SEQUENCE (SIZE(1..23)) OF PathHistoryPoint\n"
  "\n"
  "j2735_v2x_msgs/PathHistoryPoint[] points\n"
  "\n"
  "uint8 MIN_SIZE=1\n"
  "uint8 MAX_SIZE=23";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PathHistoryPointList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PathHistoryPointList__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 350, 350},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PathHistoryPointList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PathHistoryPointList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__CoarseHeading__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__OffsetLLB18__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__PathHistoryPoint__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__PositionalAccuracy__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__Speed__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__TimeOffset__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__VertOffsetB12__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
