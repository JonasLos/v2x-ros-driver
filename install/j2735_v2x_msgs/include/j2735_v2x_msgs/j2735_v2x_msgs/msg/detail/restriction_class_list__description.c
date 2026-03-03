// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/RestrictionClassList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/restriction_class_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__RestrictionClassList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0xbf, 0xa3, 0x05, 0x6d, 0x71, 0x06, 0x42,
      0x72, 0x8b, 0x97, 0x8b, 0x0b, 0x0b, 0xc6, 0xca,
      0x45, 0x8e, 0xec, 0xfa, 0xf1, 0xa8, 0xd4, 0xe3,
      0x0d, 0xa3, 0xb7, 0xaa, 0x0c, 0xdf, 0xbd, 0x4c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/restriction_class_assignment__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RestrictionClassAssignment__EXPECTED_HASH = {1, {
    0xe4, 0xb6, 0xf2, 0xc3, 0x88, 0x62, 0x21, 0x88,
    0xfb, 0x2a, 0xad, 0xab, 0x4c, 0xd8, 0x0a, 0xb3,
    0xa2, 0x35, 0xb9, 0x5c, 0x03, 0x1f, 0xb2, 0x81,
    0x5c, 0xec, 0x2f, 0xd5, 0xde, 0xce, 0xc0, 0x10,
  }};
#endif

static char j2735_v2x_msgs__msg__RestrictionClassList__TYPE_NAME[] = "j2735_v2x_msgs/msg/RestrictionClassList";
static char j2735_v2x_msgs__msg__RestrictionClassAssignment__TYPE_NAME[] = "j2735_v2x_msgs/msg/RestrictionClassAssignment";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__RestrictionClassList__FIELD_NAME__restriction_class_list[] = "restriction_class_list";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__RestrictionClassList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__RestrictionClassList__FIELD_NAME__restriction_class_list, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__RestrictionClassAssignment__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__RestrictionClassList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__RestrictionClassAssignment__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__RestrictionClassList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__RestrictionClassList__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__RestrictionClassList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__RestrictionClassList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RestrictionClassAssignment__EXPECTED_HASH, j2735_v2x_msgs__msg__RestrictionClassAssignment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__RestrictionClassAssignment__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# RestrictionClassList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DF_RestrictionClassList data frame is used to enumerate a list of user classes which belong to a given\n"
  "# assigned index. The resulting collection is treated as a group by the signal controller when it issues movement data\n"
  "# (signal phase information) with the GroupID for this group. This data frame is typically static for long periods of time\n"
  "# (months) and conveyed to the user by means of the MAP message.\n"
  "\n"
  "# RestrictionClassList ::= SEQUENCE (SIZE(1..254)) OF RestrictionClassAssignment\n"
  "\n"
  "j2735_v2x_msgs/RestrictionClassAssignment[] restriction_class_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__RestrictionClassList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__RestrictionClassList__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 664, 664},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__RestrictionClassList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__RestrictionClassList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__RestrictionClassAssignment__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
