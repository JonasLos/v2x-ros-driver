// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/GNSSStatus.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/gnss_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__GNSSStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0xa6, 0x63, 0xdd, 0x67, 0x4c, 0x15, 0x9d,
      0xb1, 0x67, 0xf4, 0xdd, 0xf6, 0x36, 0xb8, 0x24,
      0x6a, 0xde, 0x50, 0xe9, 0xd3, 0x2f, 0x9c, 0x55,
      0xe8, 0x2a, 0x13, 0xf3, 0x8d, 0xd9, 0xf1, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/GNSSStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__GNSSStatus__FIELD_NAME__statuses[] = "statuses";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__GNSSStatus__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__GNSSStatus__FIELD_NAME__statuses, 8, 8},
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
j2735_v2x_msgs__msg__GNSSStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME, 29, 29},
      {j2735_v2x_msgs__msg__GNSSStatus__FIELDS, 1, 1},
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
  "# GNSSStatus.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of GNSSstatus from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# GNSSstatus ::= BIT STRING {\n"
  "#    unavailable               (0), -- Not Equipped or unavailable\n"
  "#    isHealthy                 (1),\n"
  "#    isMonitored               (2),\n"
  "#    baseStationType           (3), -- Set to zero if a moving base station,\n"
  "#                                   -- or if a rover device (an OBU),\n"
  "#                                   -- set to one if it is a fixed base station \n"
  "#    aPDOPofUnder5             (4), -- A dilution of precision greater than 5\n"
  "#    inViewOfUnder5            (5), -- Less than 5 satellites in view\n"
  "#    localCorrectionsPresent   (6), -- DGPS type corrections used\n"
  "#    networkCorrectionsPresent (7)  -- RTK type corrections used\n"
  "#    } (SIZE(8))\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (statuses & BASE_STATION_TYPE) etc.\n"
  "# Create with bitwise-or\n"
  "# statuses = statuses | BASE_STATION_TYPE\n"
  "uint8 statuses\n"
  "\n"
  "uint8 UNAVAILABLE = 0\n"
  "uint8 IS_HEALTHY = 1\n"
  "uint8 IS_MONITORED = 2\n"
  "uint8 BASE_STATION_TYPE = 4\n"
  "uint8 APDOP_OF_UNDER_5 = 8\n"
  "uint8 IN_VIEW_OF_UNDER_5 = 16\n"
  "uint8 LOCAL_CORRECTIONS_PRESENT = 32\n"
  "uint8 NETWORK_CORRECTIONS_PRESENT = 64";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__GNSSStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1311, 1311},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__GNSSStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__GNSSStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
