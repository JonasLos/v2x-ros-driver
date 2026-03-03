// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
// generated code does not contain a copyright notice

#include "carma_driver_msgs/msg/detail/robot_enabled__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__msg__RobotEnabled__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0x82, 0x0d, 0x4d, 0x60, 0x3c, 0x4b, 0xd0,
      0xe8, 0xf7, 0x17, 0xaa, 0x08, 0x9b, 0xbb, 0x02,
      0xd0, 0xe9, 0xc1, 0xa6, 0xd3, 0x6c, 0x9d, 0x32,
      0x8e, 0x00, 0x62, 0xc2, 0x41, 0x4b, 0x1a, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char carma_driver_msgs__msg__RobotEnabled__TYPE_NAME[] = "carma_driver_msgs/msg/RobotEnabled";

// Define type names, field names, and default values
static char carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__robot_active[] = "robot_active";
static char carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__robot_enabled[] = "robot_enabled";
static char carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__torque[] = "torque";
static char carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__torque_validity[] = "torque_validity";
static char carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__brake_decel[] = "brake_decel";
static char carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__brake_decel_validity[] = "brake_decel_validity";
static char carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__throttle_effort[] = "throttle_effort";
static char carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__throttle_effort_validity[] = "throttle_effort_validity";
static char carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__braking_effort[] = "braking_effort";
static char carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__braking_effort_validity[] = "braking_effort_validity";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__msg__RobotEnabled__FIELDS[] = {
  {
    {carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__robot_active, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__robot_enabled, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__torque, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__torque_validity, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__brake_decel, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__brake_decel_validity, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__throttle_effort, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__throttle_effort_validity, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__braking_effort, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__RobotEnabled__FIELD_NAME__braking_effort_validity, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__msg__RobotEnabled__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__msg__RobotEnabled__TYPE_NAME, 34, 34},
      {carma_driver_msgs__msg__RobotEnabled__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RobotEnabled.msg\n"
  "\n"
  "# This message is feedback to the system to inform the ROS network that \n"
  "# the SRX controller has enabled robotic control. Also contains feedback for \n"
  "# injected torque and braking.\n"
  "\n"
  "# true if the controller is actively commanding the vehicle\n"
  "bool robot_active\n"
  "\n"
  "#Status of robot_enabled, if set the controller is listening to command topics\n"
  "bool robot_enabled\n"
  "\n"
  "# The value of Torque being commanded to the vehicle Nm\n"
  "float64 torque\n"
  "bool torque_validity\n"
  "\n"
  "# Braking deceleration - The commanded braking deceleration m/s^2\n"
  "float64 brake_decel\n"
  "bool brake_decel_validity\n"
  "\n"
  "# Throttle effort as reported by vehicle [-100,100]\n"
  "float64 throttle_effort\n"
  "bool throttle_effort_validity\n"
  "\n"
  "# Braking effort as reported by vehicle [-100,100]\n"
  "float64 braking_effort\n"
  "bool braking_effort_validity\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__msg__RobotEnabled__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__msg__RobotEnabled__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 798, 798},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__msg__RobotEnabled__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__msg__RobotEnabled__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
