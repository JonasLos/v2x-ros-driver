// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPointList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrailerHistoryPointList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x89, 0xb0, 0x88, 0x09, 0xd7, 0xd8, 0xcc,
      0x36, 0xf3, 0xfa, 0x26, 0xda, 0xd3, 0xce, 0x34,
      0x20, 0xad, 0x2a, 0x27, 0xec, 0xee, 0x3a, 0xe9,
      0x38, 0x8d, 0xd6, 0x07, 0x01, 0x38, 0x3e, 0x52,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/angle__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_history_point__functions.h"
#include "j2735_v2x_msgs/msg/detail/coarse_heading__functions.h"
#include "j2735_v2x_msgs/msg/detail/time_offset__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Angle__EXPECTED_HASH = {1, {
    0xd3, 0x71, 0x4d, 0x57, 0xd2, 0xda, 0x35, 0x97,
    0x4c, 0xd1, 0x0c, 0xcf, 0xca, 0xd6, 0x95, 0xb9,
    0x3f, 0xec, 0x8d, 0x61, 0x31, 0xa6, 0x53, 0x16,
    0x25, 0xda, 0x6a, 0x32, 0xc2, 0x83, 0x0c, 0x6d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH = {1, {
    0x1f, 0x65, 0xfa, 0x36, 0x68, 0x7f, 0xac, 0x8e,
    0xcb, 0x56, 0x01, 0xff, 0x00, 0x6c, 0x22, 0x72,
    0xab, 0xbc, 0x40, 0xe8, 0x13, 0xef, 0xf1, 0x58,
    0xfb, 0x43, 0xd1, 0x0e, 0x99, 0x3d, 0xb9, 0xc8,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH = {1, {
    0xe7, 0xb7, 0x0d, 0x99, 0x15, 0xcd, 0x02, 0xbf,
    0x77, 0xde, 0xd9, 0x29, 0x4f, 0xf0, 0xa5, 0x12,
    0x03, 0xac, 0x3d, 0xa5, 0xb5, 0x93, 0x93, 0xaf,
    0x8a, 0x00, 0x6c, 0x47, 0x60, 0xc6, 0x23, 0x2c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TimeOffset__EXPECTED_HASH = {1, {
    0x9c, 0x0d, 0x74, 0xc8, 0xb3, 0xce, 0x4f, 0xa5,
    0x46, 0x07, 0x3b, 0xc3, 0x39, 0xa1, 0x4a, 0xe8,
    0x6b, 0x35, 0xb0, 0x94, 0x0b, 0x9b, 0x5b, 0x9f,
    0x7b, 0x61, 0x3c, 0xef, 0xb0, 0x88, 0xb1, 0x7c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerHistoryPoint__EXPECTED_HASH = {1, {
    0xa5, 0xfb, 0xdb, 0xa4, 0x9f, 0x08, 0xbb, 0x04,
    0x00, 0x82, 0xe7, 0x2a, 0x5c, 0x8e, 0xa4, 0x6c,
    0x9d, 0x74, 0xa1, 0xdb, 0x53, 0x01, 0x4b, 0xfb,
    0x8c, 0x3c, 0xc7, 0x69, 0xe3, 0xd8, 0x9b, 0x2e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VertOffsetB07__EXPECTED_HASH = {1, {
    0x0d, 0x59, 0x6e, 0xf1, 0x2d, 0xae, 0x7b, 0x4e,
    0xb9, 0x88, 0x8c, 0x0e, 0xc6, 0xac, 0x9c, 0xc8,
    0x2c, 0xd7, 0x1e, 0x7f, 0xd4, 0x9e, 0x58, 0xf4,
    0x86, 0x7d, 0x7e, 0xc0, 0xdf, 0x05, 0x97, 0x6b,
  }};
#endif

static char j2735_v2x_msgs__msg__TrailerHistoryPointList__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerHistoryPointList";
static char j2735_v2x_msgs__msg__Angle__TYPE_NAME[] = "j2735_v2x_msgs/msg/Angle";
static char j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoarseHeading";
static char j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY24b";
static char j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeOffset";
static char j2735_v2x_msgs__msg__TrailerHistoryPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerHistoryPoint";
static char j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME[] = "j2735_v2x_msgs/msg/VertOffsetB07";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrailerHistoryPointList__FIELD_NAME__trailer_history_points[] = "trailer_history_points";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrailerHistoryPointList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPointList__FIELD_NAME__trailer_history_points, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__TrailerHistoryPoint__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__TrailerHistoryPointList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TrailerHistoryPointList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrailerHistoryPointList__TYPE_NAME, 42, 42},
      {j2735_v2x_msgs__msg__TrailerHistoryPointList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__TrailerHistoryPointList__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Angle__EXPECTED_HASH, j2735_v2x_msgs__msg__Angle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__Angle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH, j2735_v2x_msgs__msg__CoarseHeading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__CoarseHeading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY24b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__NodeXY24b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TimeOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__TimeOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__TimeOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerHistoryPoint__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VertOffsetB07__EXPECTED_HASH, j2735_v2x_msgs__msg__VertOffsetB07__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__VertOffsetB07__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# TrailerHistoryPointList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# TrailerHistoryPointList ::= SEQUENCE (SIZE(1..23)) OF TrailerHistoryPoint\n"
  "j2735_v2x_msgs/TrailerHistoryPoint[] trailer_history_points\n"
  "\n"
  "uint8 MIN_SIZE = 1\n"
  "uint8 MAX_SIZE = 23";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrailerHistoryPointList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrailerHistoryPointList__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 241, 241},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrailerHistoryPointList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrailerHistoryPointList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__Angle__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__CoarseHeading__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__NodeXY24b__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__TimeOffset__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__TrailerHistoryPoint__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__VertOffsetB07__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
