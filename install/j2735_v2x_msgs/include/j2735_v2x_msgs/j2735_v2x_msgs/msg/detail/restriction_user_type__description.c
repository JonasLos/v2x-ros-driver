// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/RestrictionUserType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/restriction_user_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__RestrictionUserType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x6f, 0x54, 0x0f, 0x35, 0x51, 0xbb, 0x07,
      0x82, 0x0f, 0x5f, 0xf0, 0x5c, 0x82, 0x40, 0x61,
      0xcc, 0xf2, 0x21, 0x45, 0xa6, 0x84, 0xfe, 0x29,
      0x5f, 0xd0, 0x4a, 0xe7, 0x7f, 0x08, 0x00, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/restriction_applies_to__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RestrictionAppliesTo__EXPECTED_HASH = {1, {
    0x22, 0xa1, 0x7c, 0xc3, 0x6a, 0x90, 0x07, 0xbc,
    0x61, 0x96, 0x83, 0x27, 0xf2, 0x03, 0xfb, 0x2c,
    0x91, 0x76, 0x87, 0xac, 0x43, 0xdc, 0xe2, 0xf8,
    0x76, 0x66, 0x64, 0x87, 0xf0, 0x5f, 0x66, 0xd7,
  }};
#endif

static char j2735_v2x_msgs__msg__RestrictionUserType__TYPE_NAME[] = "j2735_v2x_msgs/msg/RestrictionUserType";
static char j2735_v2x_msgs__msg__RestrictionAppliesTo__TYPE_NAME[] = "j2735_v2x_msgs/msg/RestrictionAppliesTo";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__RestrictionUserType__FIELD_NAME__choice[] = "choice";
static char j2735_v2x_msgs__msg__RestrictionUserType__FIELD_NAME__basic_type[] = "basic_type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__RestrictionUserType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__RestrictionUserType__FIELD_NAME__choice, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RestrictionUserType__FIELD_NAME__basic_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__RestrictionAppliesTo__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__RestrictionUserType__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__RestrictionAppliesTo__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__RestrictionUserType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__RestrictionUserType__TYPE_NAME, 38, 38},
      {j2735_v2x_msgs__msg__RestrictionUserType__FIELDS, 2, 2},
    },
    {j2735_v2x_msgs__msg__RestrictionUserType__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RestrictionAppliesTo__EXPECTED_HASH, j2735_v2x_msgs__msg__RestrictionAppliesTo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__RestrictionAppliesTo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# RestrictionUserType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DF_RestrictionUserType data frame is used to provide a means to select one, and only one, user type or class\n"
  "# from a number of well-known lists. The selected entry is then used in the overall Restriction Class assignment process to\n"
  "# indicate that a given GroupID (a way of expressing a movement in the SPAT/MAP system) applies to (is restricted to) this\n"
  "# class of user.\n"
  "\n"
  "# RestrictionUserType ::= CHOICE {\n"
  "# basicType RestrictionAppliesTo,\n"
  "# -- a set of the most commonly used types\n"
  "# regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-RestrictionUserType}},\n"
  "# ...\n"
  "# }\n"
  "\n"
  "uint8 choice\n"
  "uint8 BASIC_TYPE=0\n"
  "uint8 REGIONAL=1 #TODO: cannot select at this time but we shoudl move forward with treating it as a choice.\n"
  "\n"
  "j2735_v2x_msgs/RestrictionAppliesTo basic_type\n"
  "\n"
  "#regional #TODO: RegionalExtensions are not yet implemented in asn1c";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__RestrictionUserType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__RestrictionUserType__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 949, 949},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__RestrictionUserType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__RestrictionUserType__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__RestrictionAppliesTo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
