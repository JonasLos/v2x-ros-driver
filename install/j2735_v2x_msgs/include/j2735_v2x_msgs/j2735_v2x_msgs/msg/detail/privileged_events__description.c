// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PrivilegedEvents.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/privileged_events__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PrivilegedEvents__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0xc1, 0xab, 0x8a, 0xf1, 0x89, 0xc7, 0xda,
      0xcb, 0x70, 0x20, 0x71, 0xa3, 0xf5, 0x32, 0x2a,
      0x1f, 0x7d, 0x25, 0xbd, 0xe0, 0xa9, 0x87, 0x39,
      0xab, 0xce, 0x70, 0xad, 0x87, 0xe0, 0xdd, 0x27,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PrivilegedEventFlags__EXPECTED_HASH = {1, {
    0x92, 0xcb, 0x49, 0x88, 0x6a, 0xef, 0x29, 0xc6,
    0xf1, 0x82, 0xe9, 0x09, 0xac, 0xb9, 0xe0, 0x13,
    0xa7, 0xa3, 0xea, 0x4a, 0xd7, 0x9e, 0xed, 0xb9,
    0xc5, 0xeb, 0x8d, 0x8f, 0x6e, 0x1b, 0x34, 0x60,
  }};
#endif

static char j2735_v2x_msgs__msg__PrivilegedEvents__TYPE_NAME[] = "j2735_v2x_msgs/msg/PrivilegedEvents";
static char j2735_v2x_msgs__msg__PrivilegedEventFlags__TYPE_NAME[] = "j2735_v2x_msgs/msg/PrivilegedEventFlags";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PrivilegedEvents__FIELD_NAME__ssp_index[] = "ssp_index";
static char j2735_v2x_msgs__msg__PrivilegedEvents__FIELD_NAME__event[] = "event";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PrivilegedEvents__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PrivilegedEvents__FIELD_NAME__ssp_index, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PrivilegedEvents__FIELD_NAME__event, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PrivilegedEventFlags__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__PrivilegedEvents__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__PrivilegedEventFlags__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__PrivilegedEvents__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PrivilegedEvents__TYPE_NAME, 35, 35},
      {j2735_v2x_msgs__msg__PrivilegedEvents__FIELDS, 2, 2},
    },
    {j2735_v2x_msgs__msg__PrivilegedEvents__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PrivilegedEventFlags__EXPECTED_HASH, j2735_v2x_msgs__msg__PrivilegedEventFlags__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__PrivilegedEventFlags__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# PrivilegedEvents.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "#  PrivilegedEvents ::= SEQUENCE {\n"
  "#  notUsed SSPindex,\n"
  "#  -- always set to 0 and carries no meaning;\n"
  "#  -- legacy field maintained for backward compatibility\n"
  "#  -- The active event list\n"
  "#  event PrivilegedEventFlags,\n"
  "#  ...\n"
  "#  }\n"
  "uint8 ssp_index\n"
  "\n"
  "j2735_v2x_msgs/PrivilegedEventFlags event";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PrivilegedEvents__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PrivilegedEvents__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 347, 347},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PrivilegedEvents__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PrivilegedEvents__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__PrivilegedEventFlags__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
