// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPoint.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/trailer_history_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0xfb, 0xdb, 0xa4, 0x9f, 0x08, 0xbb, 0x04,
      0x00, 0x82, 0xe7, 0x2a, 0x5c, 0x8e, 0xa4, 0x6c,
      0x9d, 0x74, 0xa1, 0xdb, 0x53, 0x01, 0x4b, 0xfb,
      0x8c, 0x3c, 0xc7, 0x69, 0xe3, 0xd8, 0x9b, 0x2e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/angle__functions.h"
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VertOffsetB07__EXPECTED_HASH = {1, {
    0x0d, 0x59, 0x6e, 0xf1, 0x2d, 0xae, 0x7b, 0x4e,
    0xb9, 0x88, 0x8c, 0x0e, 0xc6, 0xac, 0x9c, 0xc8,
    0x2c, 0xd7, 0x1e, 0x7f, 0xd4, 0x9e, 0x58, 0xf4,
    0x86, 0x7d, 0x7e, 0xc0, 0xdf, 0x05, 0x97, 0x6b,
  }};
#endif

static char j2735_v2x_msgs__msg__TrailerHistoryPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerHistoryPoint";
static char j2735_v2x_msgs__msg__Angle__TYPE_NAME[] = "j2735_v2x_msgs/msg/Angle";
static char j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoarseHeading";
static char j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY24b";
static char j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeOffset";
static char j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME[] = "j2735_v2x_msgs/msg/VertOffsetB07";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__pivot_angle[] = "pivot_angle";
static char j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__time_offset[] = "time_offset";
static char j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__position_offset[] = "position_offset";
static char j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__elevation_offset[] = "elevation_offset";
static char j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__heading[] = "heading";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__pivot_angle, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__time_offset, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__position_offset, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__elevation_offset, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__TrailerHistoryPoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrailerHistoryPoint__TYPE_NAME, 38, 38},
      {j2735_v2x_msgs__msg__TrailerHistoryPoint__FIELDS, 6, 6},
    },
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
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
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VertOffsetB07__EXPECTED_HASH, j2735_v2x_msgs__msg__VertOffsetB07__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__VertOffsetB07__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# TrailerHistoryPoint.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# TrailerHistoryPoint ::= SEQUENCE {\n"
  "#    pivotAngle       Angle,\n"
  "#                     -- angle with respect to the lead unit\n"
  "#    timeOffset       TimeOffset,\n"
  "#                     -- offset backwards in time \n"
  "#    -- Position relative to the hauling Vehicle\n"
  "#    positionOffset   Node-XY-24b, \n"
  "#    elevationOffset  VertOffset-B07 OPTIONAL,   \n"
  "#    heading          CoarseHeading OPTIONAL, \n"
  "#                     -- overall heading \n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_ELEVATION_OFFSET) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_ELEVATION_OFFSET\n"
  "uint16 presence_vector\n"
  "\n"
  "uint16 HAS_ELEVATION_OFFSET = 1\n"
  "uint16 HAS_HEADING = 2\n"
  "\n"
  "j2735_v2x_msgs/Angle pivot_angle\n"
  "\n"
  "j2735_v2x_msgs/TimeOffset time_offset\n"
  "\n"
  "j2735_v2x_msgs/NodeXY24b position_offset\n"
  "\n"
  "####\n"
  "# OPTIONAL FIELDS\n"
  "# All fields below this section are optional.\n"
  "# The presence of a given field can be idenfied by checking the presence_vector\n"
  "####\n"
  "\n"
  "j2735_v2x_msgs/VertOffsetB07 elevation_offset\n"
  "\n"
  "j2735_v2x_msgs/CoarseHeading heading";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrailerHistoryPoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1167, 1167},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrailerHistoryPoint__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__Angle__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__CoarseHeading__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__NodeXY24b__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__TimeOffset__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__VertOffsetB07__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
