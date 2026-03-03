// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NodeAttributeXYList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NodeAttributeXYList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0x5f, 0x82, 0x14, 0x45, 0x92, 0xef, 0xdc,
      0xca, 0x4d, 0xb1, 0x47, 0xba, 0x70, 0xd5, 0xbb,
      0xd3, 0x91, 0x11, 0x6f, 0xf6, 0xd6, 0x04, 0x20,
      0x38, 0x6a, 0x46, 0x51, 0x78, 0x60, 0x81, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeAttributeXY__EXPECTED_HASH = {1, {
    0xb1, 0xfa, 0x33, 0x8f, 0x27, 0x8e, 0x54, 0xa9,
    0x2c, 0x2f, 0x45, 0x89, 0xb2, 0x56, 0x29, 0x88,
    0x35, 0x5a, 0x1c, 0x4f, 0x8e, 0x79, 0xc5, 0x19,
    0xc1, 0x56, 0xbc, 0x3e, 0x7e, 0x75, 0xa7, 0x52,
  }};
#endif

static char j2735_v2x_msgs__msg__NodeAttributeXYList__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeAttributeXYList";
static char j2735_v2x_msgs__msg__NodeAttributeXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeAttributeXY";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NodeAttributeXYList__FIELD_NAME__node_attribute_xy_list[] = "node_attribute_xy_list";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NodeAttributeXYList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NodeAttributeXYList__FIELD_NAME__node_attribute_xy_list, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__NodeAttributeXY__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__NodeAttributeXYList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__NodeAttributeXY__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__NodeAttributeXYList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NodeAttributeXYList__TYPE_NAME, 38, 38},
      {j2735_v2x_msgs__msg__NodeAttributeXYList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__NodeAttributeXYList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeAttributeXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeAttributeXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__NodeAttributeXY__get_type_description(NULL)->type_description.fields;
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
  "# The NodeAttributeXYList data frame consists of a list of NodeAttributeXY entries.\n"
  "#\n"
  "# NodeAttributeXYList ::= SEQUENCE (SIZE(1..8)) OF NodeAttributeXY\n"
  "\n"
  "j2735_v2x_msgs/NodeAttributeXY[] node_attribute_xy_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NodeAttributeXYList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NodeAttributeXYList__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 308, 308},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NodeAttributeXYList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NodeAttributeXYList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__NodeAttributeXY__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
