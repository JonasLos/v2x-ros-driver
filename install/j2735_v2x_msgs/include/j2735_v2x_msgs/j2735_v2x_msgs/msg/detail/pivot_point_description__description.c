// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PivotPointDescription.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/pivot_point_description__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PivotPointDescription__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0xdf, 0xb8, 0x7a, 0x91, 0xd9, 0x27, 0x1d,
      0x2a, 0x8c, 0x00, 0x6b, 0x7f, 0x41, 0xf1, 0x72,
      0x0d, 0xb8, 0x25, 0x3b, 0xc2, 0x2d, 0x1c, 0xbc,
      0x8f, 0xcb, 0x04, 0x2c, 0x6c, 0x7e, 0x0b, 0xb6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/offset_b11__functions.h"
#include "j2735_v2x_msgs/msg/detail/angle__functions.h"
#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Angle__EXPECTED_HASH = {1, {
    0xd3, 0x71, 0x4d, 0x57, 0xd2, 0xda, 0x35, 0x97,
    0x4c, 0xd1, 0x0c, 0xcf, 0xca, 0xd6, 0x95, 0xb9,
    0x3f, 0xec, 0x8d, 0x61, 0x31, 0xa6, 0x53, 0x16,
    0x25, 0xda, 0x6a, 0x32, 0xc2, 0x83, 0x0c, 0x6d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB11__EXPECTED_HASH = {1, {
    0xfb, 0xde, 0x82, 0x51, 0xf0, 0xc5, 0x34, 0xf2,
    0xa0, 0x8a, 0x3e, 0x64, 0x1d, 0xb4, 0xb1, 0xc3,
    0x20, 0x29, 0x51, 0xf7, 0x00, 0x73, 0x4a, 0xde,
    0x14, 0xab, 0xdb, 0xe6, 0x71, 0x6d, 0xf8, 0x70,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PivotingAllowed__EXPECTED_HASH = {1, {
    0x0c, 0xfc, 0xca, 0xda, 0x20, 0x61, 0x89, 0x9a,
    0x96, 0xb9, 0x0c, 0xd9, 0x33, 0x78, 0x22, 0x4e,
    0xb7, 0x67, 0x9d, 0xfb, 0xe4, 0xca, 0x71, 0x2e,
    0xd3, 0x5a, 0x3a, 0x24, 0x4f, 0x51, 0x6d, 0xed,
  }};
#endif

static char j2735_v2x_msgs__msg__PivotPointDescription__TYPE_NAME[] = "j2735_v2x_msgs/msg/PivotPointDescription";
static char j2735_v2x_msgs__msg__Angle__TYPE_NAME[] = "j2735_v2x_msgs/msg/Angle";
static char j2735_v2x_msgs__msg__OffsetB11__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB11";
static char j2735_v2x_msgs__msg__PivotingAllowed__TYPE_NAME[] = "j2735_v2x_msgs/msg/PivotingAllowed";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PivotPointDescription__FIELD_NAME__pivot_offset[] = "pivot_offset";
static char j2735_v2x_msgs__msg__PivotPointDescription__FIELD_NAME__pivot_angle[] = "pivot_angle";
static char j2735_v2x_msgs__msg__PivotPointDescription__FIELD_NAME__pivots[] = "pivots";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PivotPointDescription__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PivotPointDescription__FIELD_NAME__pivot_offset, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__OffsetB11__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PivotPointDescription__FIELD_NAME__pivot_angle, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PivotPointDescription__FIELD_NAME__pivots, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PivotingAllowed__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__PivotPointDescription__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB11__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PivotingAllowed__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__PivotPointDescription__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PivotPointDescription__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__PivotPointDescription__FIELDS, 3, 3},
    },
    {j2735_v2x_msgs__msg__PivotPointDescription__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Angle__EXPECTED_HASH, j2735_v2x_msgs__msg__Angle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__Angle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB11__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB11__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__OffsetB11__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PivotingAllowed__EXPECTED_HASH, j2735_v2x_msgs__msg__PivotingAllowed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__PivotingAllowed__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# PivotPointDescription.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "#    pivotOffset  Offset-B11,   \n"
  "#                 -- This gives a +- 10m range from the edge of the outline\n"
  "#                 -- measured from the edge of the length of this unit\n"
  "#                 -- a negative value is offset to inside the units\n"
  "#                 -- a positive value is offset beyond the unit\n"
  "j2735_v2x_msgs/OffsetB11 pivot_offset\n"
  "\n"
  "#    pivotAngle   Angle,\n"
  "#                 -- Measured between the center-line of this unit \n"
  "#                 -- and the unit ahead which is pulling it.\n"
  "#                 -- This value is required to project the units relative position\n"
  "j2735_v2x_msgs/Angle pivot_angle\n"
  "\n"
  "#    pivots       PivotingAllowed,\n"
  "#                 -- true if this unit can rotate about the pivot connection point\n"
  "j2735_v2x_msgs/PivotingAllowed pivots";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PivotPointDescription__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PivotPointDescription__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 841, 841},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PivotPointDescription__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PivotPointDescription__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__Angle__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__OffsetB11__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__PivotingAllowed__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
