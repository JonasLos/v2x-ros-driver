// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VerticalAccelerationThreshold.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0xd9, 0x9d, 0xa5, 0x58, 0x03, 0xc5, 0xb8,
      0x59, 0x21, 0x7e, 0xce, 0xc8, 0xf5, 0x5a, 0x3d,
      0xec, 0xc6, 0xca, 0xbb, 0x50, 0x00, 0x41, 0xf8,
      0xd3, 0x3a, 0x2e, 0xd2, 0x05, 0x24, 0x5f, 0xbc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__VerticalAccelerationThreshold__TYPE_NAME[] = "j2735_v2x_msgs/msg/VerticalAccelerationThreshold";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VerticalAccelerationThreshold__FIELD_NAME__exceeded_wheels[] = "exceeded_wheels";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VerticalAccelerationThreshold__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VerticalAccelerationThreshold__FIELD_NAME__exceeded_wheels, 15, 15},
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
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VerticalAccelerationThreshold__TYPE_NAME, 48, 48},
      {j2735_v2x_msgs__msg__VerticalAccelerationThreshold__FIELDS, 1, 1},
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
  "# VerticalAccelerationThreshold.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# VerticalAccelerationThreshold ::= BIT STRING {\n"
  "#    notEquipped (0), -- Not equipped or off\n"
  "#    leftFront   (1), -- Left Front Event\n"
  "#    leftRear    (2), -- Left Rear Event\n"
  "#    rightFront  (3), -- Right Front Event\n"
  "#    rightRear   (4)  -- Right Rear Event\n"
  "#    } (SIZE(5))\n"
  "# A bit string enumerating when a preset threshold for vertical acceleration is exceeded at each wheel\n"
  "uint8 exceeded_wheels\n"
  "\n"
  "uint8 NOT_EQUIPPED=0\n"
  "uint8 LEFT_FRONT=1\n"
  "uint8 LEFT_REAR=2\n"
  "uint8 RIGHT_FRONT=4\n"
  "uint8 RIGHT_REAR=8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VerticalAccelerationThreshold__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 573, 573},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
