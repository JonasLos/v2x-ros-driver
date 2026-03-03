// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_driver_msgs:msg/DriverStatus.idl
// generated code does not contain a copyright notice

#include "carma_driver_msgs/msg/detail/driver_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__msg__DriverStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0x4f, 0x59, 0x73, 0x5c, 0x52, 0x9f, 0x90,
      0xd4, 0xbc, 0xb9, 0xf0, 0xf0, 0x67, 0x1b, 0x50,
      0xb5, 0x86, 0xc6, 0xb6, 0xa1, 0x9a, 0x83, 0xef,
      0xb1, 0x6c, 0x42, 0xab, 0xa1, 0xa6, 0xa9, 0xeb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char carma_driver_msgs__msg__DriverStatus__TYPE_NAME[] = "carma_driver_msgs/msg/DriverStatus";

// Define type names, field names, and default values
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__name[] = "name";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__status[] = "status";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__can[] = "can";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__radar[] = "radar";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__gnss[] = "gnss";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__lidar[] = "lidar";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__roadway_sensor[] = "roadway_sensor";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__comms[] = "comms";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__controller[] = "controller";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__camera[] = "camera";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__imu[] = "imu";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__trailer_angle_sensor[] = "trailer_angle_sensor";
static char carma_driver_msgs__msg__DriverStatus__FIELD_NAME__lightbar[] = "lightbar";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__msg__DriverStatus__FIELDS[] = {
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__can, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__radar, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__gnss, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__lidar, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__roadway_sensor, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__comms, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__controller, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__camera, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__imu, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__trailer_angle_sensor, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__DriverStatus__FIELD_NAME__lightbar, 8, 8},
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
carma_driver_msgs__msg__DriverStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__msg__DriverStatus__TYPE_NAME, 34, 34},
      {carma_driver_msgs__msg__DriverStatus__FIELDS, 13, 13},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# DriverStatus.msg\n"
  "#\n"
  "# Announces the status and category of software driver publishing this message.\n"
  "# Some drivers may cover multiple categories because the hardware they\n"
  "# represent has multiple capabilities.  \n"
  "#\n"
  "\n"
  "# driver_name is the ROS name of the driver node\n"
  "string  name\n"
  "\n"
  "# status indicates the operational state of the underlying hardware device,\n"
  "# and is an enumerated value.\n"
  "uint8  status\n"
  "# enumeration values for status:\n"
  "uint8  OFF=0\n"
  "uint8  OPERATIONAL=1\n"
  "uint8  DEGRADED=2\n"
  "uint8  FAULT=3\n"
  "#\\t\\t\\t\\t\\t<other values reserved for future expansion>\n"
  "\n"
  "# These are the possible categories - at least one must be true\n"
  "bool    can\n"
  "bool    radar\n"
  "bool    gnss\n"
  "bool    lidar\n"
  "bool    roadway_sensor\n"
  "bool    comms\n"
  "bool    controller\n"
  "bool    camera\n"
  "bool    imu\n"
  "bool    trailer_angle_sensor\n"
  "bool    lightbar\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__msg__DriverStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__msg__DriverStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 798, 798},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__msg__DriverStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__msg__DriverStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
