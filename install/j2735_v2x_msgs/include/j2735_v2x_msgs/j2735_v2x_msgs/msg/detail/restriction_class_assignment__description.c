// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/restriction_class_assignment__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__RestrictionClassAssignment__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0xb6, 0xf2, 0xc3, 0x88, 0x62, 0x21, 0x88,
      0xfb, 0x2a, 0xad, 0xab, 0x4c, 0xd8, 0x0a, 0xb3,
      0xa2, 0x35, 0xb9, 0x5c, 0x03, 0x1f, 0xb2, 0x81,
      0x5c, 0xec, 0x2f, 0xd5, 0xde, 0xce, 0xc0, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__RestrictionClassAssignment__TYPE_NAME[] = "j2735_v2x_msgs/msg/RestrictionClassAssignment";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__RestrictionClassAssignment__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__RestrictionClassAssignment__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__RestrictionClassAssignment__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__RestrictionClassAssignment__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__RestrictionClassAssignment__TYPE_NAME, 45, 45},
      {j2735_v2x_msgs__msg__RestrictionClassAssignment__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# RestrictionClassAssignment.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DF_RestrictionClassAssignment data frame is used to assign (or bind) a single RestrictionClassID data\n"
  "# element to a list of all user classes to which it applies. A collection of these bindings is conveyed in the\n"
  "# RestrictionClassList data frame in the MAP message to travelers.\n"
  "#\n"
  "# RestrictionClassAssignment ::= SEQUENCE {\n"
  "# id RestrictionClassID,\n"
  "# -- the unique value (within an intersection or local region)\n"
  "# -- that is assigned to this group of users\n"
  "# users RestrictionUserTypeList\n"
  "# -- The list of user types/classes\n"
  "# -- to which this restriction ID applies\n"
  "# }\n"
  "\n"
  "# RestrictionClassID ::= INTEGER (0..255)\n"
  "uint8 id\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__RestrictionClassAssignment__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__RestrictionClassAssignment__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 738, 738},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__RestrictionClassAssignment__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__RestrictionClassAssignment__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
