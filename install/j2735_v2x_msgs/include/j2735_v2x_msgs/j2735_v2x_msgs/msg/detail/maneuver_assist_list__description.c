// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ManeuverAssistList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ManeuverAssistList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0x06, 0x3e, 0x11, 0x45, 0x5a, 0x63, 0xb1,
      0x37, 0x07, 0x0c, 0x10, 0xef, 0x9e, 0xa3, 0x27,
      0xe6, 0x1b, 0x0b, 0x7f, 0x5a, 0x9c, 0x7b, 0xfa,
      0xb4, 0xa6, 0x6d, 0x41, 0xbb, 0x20, 0x53, 0xf6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ConnectionManeuverAssist__EXPECTED_HASH = {1, {
    0x7a, 0x9b, 0x9b, 0x0d, 0x12, 0x22, 0xa9, 0x55,
    0xb3, 0x30, 0x1b, 0xf9, 0x9a, 0xaf, 0x1d, 0xfd,
    0x85, 0xf2, 0x3d, 0x55, 0x4c, 0xe4, 0xd5, 0x41,
    0xaf, 0xe5, 0xe9, 0x80, 0xd2, 0x4a, 0x57, 0x2b,
  }};
#endif

static char j2735_v2x_msgs__msg__ManeuverAssistList__TYPE_NAME[] = "j2735_v2x_msgs/msg/ManeuverAssistList";
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__TYPE_NAME[] = "j2735_v2x_msgs/msg/ConnectionManeuverAssist";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ManeuverAssistList__FIELD_NAME__connection_maneuver_assist_list[] = "connection_maneuver_assist_list";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ManeuverAssistList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ManeuverAssistList__FIELD_NAME__connection_maneuver_assist_list, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__ConnectionManeuverAssist__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__ManeuverAssistList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__ManeuverAssistList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ManeuverAssistList__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__ManeuverAssistList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__ManeuverAssistList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ConnectionManeuverAssist__EXPECTED_HASH, j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This entry is used directly by one other data structure in this standard, a DF called DF_LaneAttributes <ASN>.\n"
  "#  In addition, this item may be used by data structures in other ITS standards.\n"
  "# ManeuverAssistList ::= SEQUENCE (SIZE(1..16)) OF ConnectionManeuverAssist\n"
  "\n"
  "j2735_v2x_msgs/ConnectionManeuverAssist[] connection_maneuver_assist_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ManeuverAssistList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ManeuverAssistList__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 345, 345},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ManeuverAssistList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ManeuverAssistList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
