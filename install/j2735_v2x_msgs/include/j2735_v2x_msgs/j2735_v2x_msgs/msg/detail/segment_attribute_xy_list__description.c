// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/SegmentAttributeXYList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__SegmentAttributeXYList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0x34, 0xc5, 0x83, 0xc9, 0x60, 0xb2, 0x06,
      0x38, 0x3d, 0x82, 0x15, 0xd4, 0xed, 0xf8, 0xa2,
      0x97, 0x8a, 0x67, 0xa2, 0xa6, 0x7f, 0xb8, 0x92,
      0x86, 0x03, 0x24, 0x5b, 0x7c, 0x57, 0x41, 0x3f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SegmentAttributeXY__EXPECTED_HASH = {1, {
    0xde, 0x72, 0xc9, 0xca, 0x8e, 0x75, 0xaa, 0xe9,
    0x7d, 0x26, 0xc1, 0x3f, 0x63, 0xba, 0x1b, 0xe6,
    0xd9, 0x61, 0xee, 0x85, 0x3a, 0xbd, 0xa5, 0x69,
    0xbc, 0x4e, 0x94, 0xb3, 0x38, 0x6e, 0x88, 0x5e,
  }};
#endif

static char j2735_v2x_msgs__msg__SegmentAttributeXYList__TYPE_NAME[] = "j2735_v2x_msgs/msg/SegmentAttributeXYList";
static char j2735_v2x_msgs__msg__SegmentAttributeXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/SegmentAttributeXY";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__SegmentAttributeXYList__FIELD_NAME__segment_attribute_xy[] = "segment_attribute_xy";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__SegmentAttributeXYList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__SegmentAttributeXYList__FIELD_NAME__segment_attribute_xy, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__SegmentAttributeXY__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__SegmentAttributeXYList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__SegmentAttributeXY__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__SegmentAttributeXYList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__SegmentAttributeXYList__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__SegmentAttributeXYList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__SegmentAttributeXYList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SegmentAttributeXY__EXPECTED_HASH, j2735_v2x_msgs__msg__SegmentAttributeXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__SegmentAttributeXY__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# NodeAttributeXYList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "#The DF_SegmentAttributeXYList data frame consists of a list of SegmentAttributeXY entries.\n"
  "\n"
  "#SegmentAttributeXYList ::= SEQUENCE (SIZE(1..8)) OF SegmentAttributeXY\n"
  "\n"
  "j2735_v2x_msgs/SegmentAttributeXY[] segment_attribute_xy\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__SegmentAttributeXYList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__SegmentAttributeXYList__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 322, 322},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__SegmentAttributeXYList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__SegmentAttributeXYList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__SegmentAttributeXY__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
