// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PreemptPriorityList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PreemptPriorityList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0x65, 0xec, 0x18, 0xd2, 0x91, 0x60, 0x21,
      0x0b, 0x94, 0xb2, 0xb4, 0x3f, 0xba, 0x23, 0x2b,
      0xbc, 0x63, 0x43, 0x37, 0x0a, 0x82, 0xf2, 0xd2,
      0x77, 0x11, 0xbb, 0x04, 0x3a, 0x5d, 0xb2, 0xb8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/signal_control_zone__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SignalControlZone__EXPECTED_HASH = {1, {
    0x23, 0xe1, 0x19, 0x73, 0xba, 0xaf, 0xc5, 0x2a,
    0xf0, 0xa7, 0x10, 0x7d, 0x3e, 0x9d, 0x87, 0xe7,
    0x99, 0x03, 0x79, 0x65, 0x20, 0xfd, 0x3c, 0xd0,
    0x5c, 0x6e, 0xdb, 0x51, 0xdf, 0x2e, 0x5c, 0xf5,
  }};
#endif

static char j2735_v2x_msgs__msg__PreemptPriorityList__TYPE_NAME[] = "j2735_v2x_msgs/msg/PreemptPriorityList";
static char j2735_v2x_msgs__msg__SignalControlZone__TYPE_NAME[] = "j2735_v2x_msgs/msg/SignalControlZone";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PreemptPriorityList__FIELD_NAME__preempt_priority_list[] = "preempt_priority_list";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PreemptPriorityList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PreemptPriorityList__FIELD_NAME__preempt_priority_list, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__SignalControlZone__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__PreemptPriorityList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__SignalControlZone__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__PreemptPriorityList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PreemptPriorityList__TYPE_NAME, 38, 38},
      {j2735_v2x_msgs__msg__PreemptPriorityList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__PreemptPriorityList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SignalControlZone__EXPECTED_HASH, j2735_v2x_msgs__msg__SignalControlZone__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__SignalControlZone__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# PreemptPriorityList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DF_PreemptPriorityList data frame consists of a list of RegionalSignalControlZone entries.\n"
  "#\n"
  "# PreemptPriorityList ::= SEQUENCE (SIZE(1..32)) OF SignalControlZone\n"
  "#\n"
  "#\n"
  "\n"
  "j2735_v2x_msgs/SignalControlZone[] preempt_priority_list\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PreemptPriorityList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PreemptPriorityList__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 330, 330},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PreemptPriorityList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PreemptPriorityList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__SignalControlZone__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
