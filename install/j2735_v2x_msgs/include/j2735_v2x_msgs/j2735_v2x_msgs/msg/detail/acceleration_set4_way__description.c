// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AccelerationSet4Way__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x74, 0xcc, 0xee, 0x1d, 0xc1, 0x15, 0x2e,
      0xd6, 0xb9, 0x8f, 0xec, 0x0c, 0x7f, 0xb0, 0x70,
      0x43, 0x36, 0x0f, 0xb5, 0x15, 0xd9, 0xa3, 0xdf,
      0xf5, 0x11, 0xb9, 0x2f, 0x43, 0x84, 0x3b, 0xc4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME[] = "j2735_v2x_msgs/msg/AccelerationSet4Way";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AccelerationSet4Way__FIELD_NAME__longitudinal[] = "longitudinal";
static char j2735_v2x_msgs__msg__AccelerationSet4Way__FIELD_NAME__lateral[] = "lateral";
static char j2735_v2x_msgs__msg__AccelerationSet4Way__FIELD_NAME__vert[] = "vert";
static char j2735_v2x_msgs__msg__AccelerationSet4Way__FIELD_NAME__yaw_rate[] = "yaw_rate";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AccelerationSet4Way__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AccelerationSet4Way__FIELD_NAME__longitudinal, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AccelerationSet4Way__FIELD_NAME__lateral, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AccelerationSet4Way__FIELD_NAME__vert, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AccelerationSet4Way__FIELD_NAME__yaw_rate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__AccelerationSet4Way__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME, 38, 38},
      {j2735_v2x_msgs__msg__AccelerationSet4Way__FIELDS, 4, 4},
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
  "# AccelerationSet4Way.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# Set of acceleration values in 3 orthogonal directions of the vehicle and with yaw rotation rates expressed as a structure. \n"
  "# The positive longitudinal axis is to the front of the vehicle. \n"
  "# The positive lateral axis is to the right side of the vehicle (facing forward)\n"
  "# Positive yaw is to the right (clockwise)\n"
  "# The positive vertical \"z\" axis is downward with the zero point at the bottom of the vehicle\\'s tires. \n"
  "\n"
  "#AccelerationSet4Way ::= SEQUENCE {\n"
  "#   long Acceleration,          -- Along the Vehicle Longitudinal axis\n"
  "#   lat  Acceleration,          -- Along the Vehicle Lateral axis\n"
  "#   vert VerticalAcceleration,  -- Along the Vehicle Vertical axis\n"
  "#   yaw  YawRate\n"
  "#}\n"
  "\n"
  "#Acceleration ::= INTEGER (-2000..2001) \n"
  "#   -- LSB units are 0.01 m/s^2\n"
  "#   -- the value 2000 shall be used for values greater than 2000     \n"
  "#   -- the value -2000 shall be used for values less than -2000  \n"
  "#   -- a value of 2001 shall be used for Unavailable\n"
  "#   -- Convert to m/s^2 with factor 0.01 when this field is used\n"
  "int16 longitudinal\n"
  "int16 lateral\n"
  "\n"
  "int16 ACCELERATION_UNAVAILABLE = 2001\n"
  "int16 ACCELERATION_MAX = 2000\n"
  "int16 ACCELERATION_MIN = -2000\n"
  "\n"
  "#VerticalAcceleration ::= INTEGER (-127..127) \n"
  "#   -- LSB units of 0.02 G steps over -2.52 to +2.54 G\n"
  "#   -- The value +127 shall be used for ranges >= 2.54 G\n"
  "#   -- The value -126 shall be used for ranges <= 2.52 G\n"
  "#   -- The value -127 shall be used for unavailable\n"
  "#   -- Convert to m/s^2 with factor 0.196 when this field is used\n"
  "int8 vert\n"
  "\n"
  "int8 ACCELERATION_VERTICAL_UNAVAILABLE = -127\n"
  "int8 ACCELERATION_VERTICAL_MAX = 127\n"
  "int8 ACCELERATION_VERTICAL_MIN = -126\n"
  "\n"
  "#YawRate ::= INTEGER (-32767..32767)\n"
  "#   -- LSB units of 0.01 degrees per second (signed)\n"
  "#   -- Convert to degree with factor 0.01 when this field is used\n"
  "int16 yaw_rate\n"
  "\n"
  "int16 YAWRATE_UNAVAILABLE = 0\n"
  "int16 YAWRATE_MAX = 32767\n"
  "int16 YAWRATE_MIN = -32767";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AccelerationSet4Way__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1963, 1963},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AccelerationSet4Way__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AccelerationSet4Way__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
