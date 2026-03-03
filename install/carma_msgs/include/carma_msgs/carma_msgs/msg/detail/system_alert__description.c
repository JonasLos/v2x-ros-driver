// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_msgs:msg/SystemAlert.idl
// generated code does not contain a copyright notice

#include "carma_msgs/msg/detail/system_alert__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__msg__SystemAlert__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x56, 0x16, 0x7b, 0xd9, 0x91, 0x86, 0x32,
      0x8b, 0x33, 0xbb, 0xc7, 0x19, 0x8b, 0x6a, 0xac,
      0x8c, 0xfc, 0x87, 0x3c, 0x73, 0xd1, 0x8f, 0xe9,
      0x94, 0x15, 0x25, 0xe0, 0x5b, 0xcc, 0x63, 0xb4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char carma_msgs__msg__SystemAlert__TYPE_NAME[] = "carma_msgs/msg/SystemAlert";

// Define type names, field names, and default values
static char carma_msgs__msg__SystemAlert__FIELD_NAME__type[] = "type";
static char carma_msgs__msg__SystemAlert__FIELD_NAME__description[] = "description";
static char carma_msgs__msg__SystemAlert__FIELD_NAME__source_node[] = "source_node";

static rosidl_runtime_c__type_description__Field carma_msgs__msg__SystemAlert__FIELDS[] = {
  {
    {carma_msgs__msg__SystemAlert__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__SystemAlert__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__SystemAlert__FIELD_NAME__source_node, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__msg__SystemAlert__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__msg__SystemAlert__TYPE_NAME, 26, 26},
      {carma_msgs__msg__SystemAlert__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# SystemAlert.msg\n"
  "# \n"
  "# Broadcasts important alerts related to system health.\n"
  "#\n"
  "\n"
  "# the enumerated alert type\n"
  "uint8   type\n"
  "\n"
  "# enumeration values for type. \n"
  "# NOT_READY indicates that system is starting up\n"
  "# DRIVERS_READY is a one-time indicator that the startup sequence is complete.\n"
  "uint8   CAUTION = 1\n"
  "uint8   WARNING = 2\n"
  "uint8   FATAL = 3\n"
  "uint8   NOT_READY = 4\n"
  "uint8   DRIVERS_READY = 5\n"
  "uint8   SHUTDOWN = 6\n"
  "\n"
  "# the specific alert message in human readable form\n"
  "string  description\n"
  "\n"
  "# The fully specified name of the node which generated this message\n"
  "string source_node";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__msg__SystemAlert__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__msg__SystemAlert__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 570, 570},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__msg__SystemAlert__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__msg__SystemAlert__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
