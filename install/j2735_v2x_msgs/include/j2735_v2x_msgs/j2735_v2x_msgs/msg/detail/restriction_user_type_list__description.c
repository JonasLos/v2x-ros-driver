// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/RestrictionUserTypeList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/restriction_user_type_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__RestrictionUserTypeList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0x79, 0xeb, 0x78, 0x07, 0x18, 0x45, 0xb9,
      0x3f, 0x62, 0xfc, 0x7f, 0x19, 0x06, 0xf5, 0xf8,
      0xd4, 0x8d, 0xb6, 0x28, 0x84, 0xe9, 0x2d, 0x1a,
      0xa7, 0x61, 0x1e, 0xfc, 0x2c, 0x31, 0xee, 0x4c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/restriction_user_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/restriction_applies_to__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RestrictionAppliesTo__EXPECTED_HASH = {1, {
    0x22, 0xa1, 0x7c, 0xc3, 0x6a, 0x90, 0x07, 0xbc,
    0x61, 0x96, 0x83, 0x27, 0xf2, 0x03, 0xfb, 0x2c,
    0x91, 0x76, 0x87, 0xac, 0x43, 0xdc, 0xe2, 0xf8,
    0x76, 0x66, 0x64, 0x87, 0xf0, 0x5f, 0x66, 0xd7,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RestrictionUserType__EXPECTED_HASH = {1, {
    0x19, 0x6f, 0x54, 0x0f, 0x35, 0x51, 0xbb, 0x07,
    0x82, 0x0f, 0x5f, 0xf0, 0x5c, 0x82, 0x40, 0x61,
    0xcc, 0xf2, 0x21, 0x45, 0xa6, 0x84, 0xfe, 0x29,
    0x5f, 0xd0, 0x4a, 0xe7, 0x7f, 0x08, 0x00, 0x0d,
  }};
#endif

static char j2735_v2x_msgs__msg__RestrictionUserTypeList__TYPE_NAME[] = "j2735_v2x_msgs/msg/RestrictionUserTypeList";
static char j2735_v2x_msgs__msg__RestrictionAppliesTo__TYPE_NAME[] = "j2735_v2x_msgs/msg/RestrictionAppliesTo";
static char j2735_v2x_msgs__msg__RestrictionUserType__TYPE_NAME[] = "j2735_v2x_msgs/msg/RestrictionUserType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__RestrictionUserTypeList__FIELD_NAME__restriction_user_type_list[] = "restriction_user_type_list";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__RestrictionUserTypeList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__RestrictionUserTypeList__FIELD_NAME__restriction_user_type_list, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__RestrictionUserType__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__RestrictionUserTypeList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__RestrictionAppliesTo__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RestrictionUserType__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__RestrictionUserTypeList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__RestrictionUserTypeList__TYPE_NAME, 42, 42},
      {j2735_v2x_msgs__msg__RestrictionUserTypeList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__RestrictionUserTypeList__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RestrictionAppliesTo__EXPECTED_HASH, j2735_v2x_msgs__msg__RestrictionAppliesTo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__RestrictionAppliesTo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RestrictionUserType__EXPECTED_HASH, j2735_v2x_msgs__msg__RestrictionUserType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__RestrictionUserType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# RestrictionUserTypeList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DF_RestrictionUserTypeList data frame consists of a list of RestrictionUserType entries.\n"
  "#\n"
  "# RestrictionUserTypeList ::= SEQUENCE (SIZE(1..16)) OF RestrictionUserType\n"
  "\n"
  "j2735_v2x_msgs/RestrictionUserType[] restriction_user_type_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__RestrictionUserTypeList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__RestrictionUserTypeList__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 339, 339},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__RestrictionUserTypeList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__RestrictionUserTypeList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__RestrictionAppliesTo__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__RestrictionUserType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
