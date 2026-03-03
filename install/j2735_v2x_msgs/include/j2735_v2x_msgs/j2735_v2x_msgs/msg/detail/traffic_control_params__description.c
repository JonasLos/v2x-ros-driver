// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/traffic_control_params__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrafficControlParams__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0x9f, 0x79, 0x5a, 0x92, 0xa9, 0x24, 0xf9,
      0x75, 0xb4, 0x9e, 0x83, 0xe3, 0x00, 0x83, 0x1d,
      0x4d, 0x52, 0xc0, 0xf4, 0x6e, 0x8e, 0xfb, 0x91,
      0xb3, 0xc1, 0x58, 0x5c, 0x0c, 0xfe, 0xf1, 0xc9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/repeat_params__functions.h"
#include "j2735_v2x_msgs/msg/detail/day_of_week__functions.h"
#include "j2735_v2x_msgs/msg/detail/daily_schedule__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_veh_class__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DailySchedule__EXPECTED_HASH = {1, {
    0x58, 0x68, 0xa0, 0x55, 0xfa, 0x85, 0xdb, 0xe5,
    0xfe, 0x17, 0x25, 0xfa, 0x02, 0x71, 0xfa, 0x87,
    0x4e, 0xeb, 0xe1, 0xa0, 0x96, 0x1b, 0xd8, 0x0c,
    0x20, 0x42, 0x10, 0xf1, 0x0e, 0xe3, 0x1a, 0xc3,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DayOfWeek__EXPECTED_HASH = {1, {
    0xe6, 0x6d, 0xfc, 0xf2, 0x53, 0xb1, 0x7a, 0x3b,
    0xbb, 0x47, 0xca, 0xb9, 0x9e, 0x2d, 0x6a, 0x89,
    0x8a, 0x23, 0x6f, 0x84, 0x90, 0xea, 0x22, 0xee,
    0x89, 0xcf, 0xb4, 0x5b, 0x39, 0x9a, 0xdc, 0xe1,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RepeatParams__EXPECTED_HASH = {1, {
    0x72, 0x99, 0x32, 0x08, 0xd3, 0xe0, 0x96, 0xd6,
    0x18, 0x1e, 0x04, 0xd0, 0x33, 0x59, 0xf6, 0x51,
    0x4b, 0x43, 0xff, 0x93, 0xe9, 0xb6, 0x78, 0xdb,
    0x3a, 0x34, 0x12, 0xe8, 0xbf, 0x54, 0x6d, 0x99,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrafficControlDetail__EXPECTED_HASH = {1, {
    0x04, 0xb7, 0xa1, 0x04, 0xaf, 0xab, 0xbc, 0x58,
    0x49, 0x25, 0xbc, 0x7c, 0x84, 0x98, 0x25, 0x40,
    0x0a, 0xaf, 0x3a, 0xb5, 0x49, 0xaa, 0x2d, 0x0a,
    0xa7, 0x71, 0xb3, 0x5d, 0xbf, 0xbd, 0x5e, 0x97,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrafficControlSchedule__EXPECTED_HASH = {1, {
    0xa5, 0x69, 0x1e, 0x21, 0xf3, 0x88, 0x3a, 0x7b,
    0x1d, 0xde, 0xe9, 0xf0, 0xf7, 0xd1, 0xd3, 0xab,
    0x99, 0x6c, 0xea, 0xeb, 0x91, 0xbc, 0x28, 0xee,
    0x36, 0xc6, 0x17, 0x19, 0xe2, 0xcc, 0xa2, 0x73,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrafficControlVehClass__EXPECTED_HASH = {1, {
    0x24, 0x3d, 0xa3, 0x9e, 0x70, 0x72, 0x66, 0xec,
    0x58, 0xb1, 0x72, 0x0c, 0xf2, 0x3a, 0x4b, 0xd9,
    0x4c, 0x10, 0xc3, 0xd0, 0x62, 0x74, 0x76, 0xae,
    0xcb, 0x9f, 0xd4, 0x8c, 0x5e, 0x07, 0x27, 0x85,
  }};
#endif

static char j2735_v2x_msgs__msg__TrafficControlParams__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlParams";
static char j2735_v2x_msgs__msg__DailySchedule__TYPE_NAME[] = "j2735_v2x_msgs/msg/DailySchedule";
static char j2735_v2x_msgs__msg__DayOfWeek__TYPE_NAME[] = "j2735_v2x_msgs/msg/DayOfWeek";
static char j2735_v2x_msgs__msg__RepeatParams__TYPE_NAME[] = "j2735_v2x_msgs/msg/RepeatParams";
static char j2735_v2x_msgs__msg__TrafficControlDetail__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlDetail";
static char j2735_v2x_msgs__msg__TrafficControlSchedule__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlSchedule";
static char j2735_v2x_msgs__msg__TrafficControlVehClass__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlVehClass";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrafficControlParams__FIELD_NAME__vclasses[] = "vclasses";
static char j2735_v2x_msgs__msg__TrafficControlParams__FIELD_NAME__schedule[] = "schedule";
static char j2735_v2x_msgs__msg__TrafficControlParams__FIELD_NAME__regulatory[] = "regulatory";
static char j2735_v2x_msgs__msg__TrafficControlParams__FIELD_NAME__detail[] = "detail";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrafficControlParams__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrafficControlParams__FIELD_NAME__vclasses, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__TrafficControlVehClass__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlParams__FIELD_NAME__schedule, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TrafficControlSchedule__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlParams__FIELD_NAME__regulatory, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlParams__FIELD_NAME__detail, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TrafficControlDetail__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__TrafficControlParams__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__DailySchedule__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DayOfWeek__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RepeatParams__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlSchedule__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlVehClass__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TrafficControlParams__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrafficControlParams__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__TrafficControlParams__FIELDS, 4, 4},
    },
    {j2735_v2x_msgs__msg__TrafficControlParams__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DailySchedule__EXPECTED_HASH, j2735_v2x_msgs__msg__DailySchedule__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__DailySchedule__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DayOfWeek__EXPECTED_HASH, j2735_v2x_msgs__msg__DayOfWeek__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__DayOfWeek__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RepeatParams__EXPECTED_HASH, j2735_v2x_msgs__msg__RepeatParams__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__RepeatParams__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrafficControlDetail__EXPECTED_HASH, j2735_v2x_msgs__msg__TrafficControlDetail__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__TrafficControlDetail__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrafficControlSchedule__EXPECTED_HASH, j2735_v2x_msgs__msg__TrafficControlSchedule__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__TrafficControlSchedule__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrafficControlVehClass__EXPECTED_HASH, j2735_v2x_msgs__msg__TrafficControlVehClass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__TrafficControlVehClass__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# TrafficControlParams.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# ...\n"
  "\n"
  "# TrafficControlParams ::= SEQUENCE\n"
  "# {\n"
  "# \\tvclasses SEQUENCE (SIZE(1..255)) OF TrafficControlVehClass,\n"
  "# \\tschedule TrafficControlSchedule,\n"
  "# \\tregulatory BOOLEAN,\n"
  "# \\tdetail TrafficControlDetail\n"
  "# }\n"
  "\n"
  "# vclasses SEQUENCE (SIZE(1..255)) OF TrafficControlVehClass,\n"
  "j2735_v2x_msgs/TrafficControlVehClass[] vclasses\n"
  "\n"
  "# schedule TrafficControlSchedule\n"
  "j2735_v2x_msgs/TrafficControlSchedule schedule\n"
  "\n"
  "# regulatory BOOLEAN\n"
  "bool regulatory\n"
  "\n"
  "# detail TrafficControlDetail\n"
  "j2735_v2x_msgs/TrafficControlDetail detail\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrafficControlParams__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrafficControlParams__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 703, 703},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrafficControlParams__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrafficControlParams__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__DailySchedule__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__DayOfWeek__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__RepeatParams__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__TrafficControlDetail__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__TrafficControlSchedule__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__TrafficControlVehClass__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
