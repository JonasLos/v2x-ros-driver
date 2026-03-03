// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeedType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xbc, 0xdb, 0x3e, 0x13, 0xa7, 0x4e, 0x6e,
      0xe1, 0xe5, 0x3f, 0x03, 0xc5, 0x51, 0xfe, 0x3b,
      0xe2, 0xc1, 0x1f, 0xae, 0x97, 0x44, 0xdb, 0x46,
      0x2a, 0x21, 0x08, 0x06, 0x41, 0x8e, 0x0c, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeedType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AdvisorySpeedType__FIELD_NAME__advisory_speed_type[] = "advisory_speed_type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AdvisorySpeedType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AdvisorySpeedType__FIELD_NAME__advisory_speed_type, 19, 19},
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
j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__AdvisorySpeedType__FIELDS, 1, 1},
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
  "# AdvisorySpeedType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DE_AdvisorySpeedType data element relates the type of travel to which a given speed refers. This element is\n"
  "# typically used as part of an AdvisorySpeed data frame for signal phase and timing data.\n"
  "#\n"
  "# AdvisorySpeedType ::= ENUMERATED {\n"
  "# none (0),\n"
  "# greenwave (1),\n"
  "# ecoDrive (2),\n"
  "# transit (3),\n"
  "# ...\n"
  "# } -- Note: subject to further growth\n"
  "\n"
  "uint8 advisory_speed_type\n"
  "\n"
  "uint8 NONE=0\n"
  "uint8 GREENWAVE=1\n"
  "uint8 ECODRIVE=2\n"
  "uint8 TRANSIT=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AdvisorySpeedType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 536, 536},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AdvisorySpeedType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
