// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/RepeatParams.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/repeat_params__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__RepeatParams__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x99, 0x32, 0x08, 0xd3, 0xe0, 0x96, 0xd6,
      0x18, 0x1e, 0x04, 0xd0, 0x33, 0x59, 0xf6, 0x51,
      0x4b, 0x43, 0xff, 0x93, 0xe9, 0xb6, 0x78, 0xdb,
      0x3a, 0x34, 0x12, 0xe8, 0xbf, 0x54, 0x6d, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__RepeatParams__TYPE_NAME[] = "j2735_v2x_msgs/msg/RepeatParams";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__RepeatParams__FIELD_NAME__offset[] = "offset";
static char j2735_v2x_msgs__msg__RepeatParams__FIELD_NAME__period[] = "period";
static char j2735_v2x_msgs__msg__RepeatParams__FIELD_NAME__span[] = "span";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__RepeatParams__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__RepeatParams__FIELD_NAME__offset, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RepeatParams__FIELD_NAME__period, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RepeatParams__FIELD_NAME__span, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__RepeatParams__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__RepeatParams__TYPE_NAME, 31, 31},
      {j2735_v2x_msgs__msg__RepeatParams__FIELDS, 3, 3},
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
  "# RepeatParams.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification for vehicle internal use.\n"
  "#\n"
  "# @author Misheel Bayartsengel \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# ...\n"
  "\n"
  "# RepeatParams ::= SEQUENCE\n"
  "# {\n"
  "# \\toffset INTEGER (0..1439), -- shift repetition start relative to midnight local time\n"
  "# \\tperiod INTEGER (0..1439), -- minutes between successive time spans\n"
  "# \\tspan INTEGER (0..1439) -- number of minutes schedule is active, must be less than the period\n"
  "# }\n"
  "\n"
  "# Offset \n"
  "# shift repetition start relative to midnight local time\n"
  "uint16 offset\n"
  "\n"
  "# Period\n"
  "# minutes between successive time spans\n"
  "uint16 period\n"
  "\n"
  "# Span\n"
  "# number of minutes schedule is active, must be less than the period\n"
  "uint16 span";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__RepeatParams__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__RepeatParams__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 695, 695},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__RepeatParams__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__RepeatParams__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
