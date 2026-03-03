// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ResponseType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/response_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ResponseType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x51, 0xdb, 0xc0, 0x9d, 0x1f, 0xb6, 0x69,
      0xf4, 0xc2, 0x64, 0xe2, 0x51, 0x7e, 0xb3, 0x66,
      0xe4, 0x5e, 0x34, 0x5b, 0xcf, 0x12, 0x8d, 0x86,
      0x19, 0xa7, 0xd4, 0xff, 0xee, 0xc1, 0x78, 0x68,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ResponseType__TYPE_NAME[] = "j2735_v2x_msgs/msg/ResponseType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ResponseType__FIELD_NAME__response_type[] = "response_type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ResponseType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ResponseType__FIELD_NAME__response_type, 13, 13},
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
j2735_v2x_msgs__msg__ResponseType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ResponseType__TYPE_NAME, 31, 31},
      {j2735_v2x_msgs__msg__ResponseType__FIELDS, 1, 1},
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
  "# ResponseType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "#  ResponseType ::= ENUMERATED {\n"
  "#  notInUseOrNotEquipped (0),\n"
  "#  emergency (1), -- active service call at emergency level\n"
  "#  nonEmergency (2), -- also used when returning from service call\n"
  "#  pursuit (3), -- sender driving may be erratic\n"
  "#  stationary (4), -- sender is not moving, stopped along roadside\n"
  "#  slowMoving (5), -- such a mowers, litter trucks, etc.\n"
  "#  stopAndGoMovement (6), -- such as school bus or garbage truck\n"
  "#  ...\n"
  "#  }\n"
  "\n"
  "uint8  response_type\n"
  "\n"
  "# enumeration values for response_type:\n"
  "uint8 NOT_IN_USE_OR_NOT_EQUIPPED=0\n"
  "uint8 EMERGENCY=1\n"
  "uint8 NON_EMERGENCY=2\n"
  "uint8 PURSUIT=3\n"
  "uint8 STATIONARY=4\n"
  "uint8 SLOW_MOVING=5\n"
  "uint8 STOP_AND_GO_MOVEMENT=6";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ResponseType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ResponseType__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 716, 716},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ResponseType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ResponseType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
