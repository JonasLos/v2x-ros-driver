// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/SpeedLimitType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/speed_limit_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__SpeedLimitType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0xa5, 0xa7, 0x71, 0x95, 0x8f, 0x1a, 0xba,
      0xa6, 0x19, 0x8a, 0xce, 0x4e, 0x77, 0x78, 0xee,
      0x70, 0x09, 0x87, 0x29, 0xaa, 0x8f, 0x14, 0x89,
      0x02, 0xab, 0xcd, 0xf8, 0x82, 0x98, 0xeb, 0x2a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__SpeedLimitType__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedLimitType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__SpeedLimitType__FIELD_NAME__speed_limit_type[] = "speed_limit_type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__SpeedLimitType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__SpeedLimitType__FIELD_NAME__speed_limit_type, 16, 16},
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
j2735_v2x_msgs__msg__SpeedLimitType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__SpeedLimitType__TYPE_NAME, 33, 33},
      {j2735_v2x_msgs__msg__SpeedLimitType__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# SpeedLimitType.msg\n"
  "#\n"
  "# The SpeedLimitType data element relates the type of speed limit to which a given speed refers.\n"
  "#\n"
  "# SpeedLimitType ::= ENUMERATED {\n"
  "#\n"
  "# unknown, -- Speed limit type not available\n"
  "# maxSpeedInSchoolZone, -- Only sent when the limit is active\n"
  "# maxSpeedInSchoolZoneWhenChildrenArePresent, -- Sent at any time\n"
  "# maxSpeedInConstructionZone, -- Used for work zones, incident zones, etc. where a reduced speed is present\n"
  "#\n"
  "# vehicleMinSpeed,\n"
  "# vehicleMaxSpeed, -- Regulatory speed limit for general traffic\n"
  "# vehicleNightMaxSpeed,\n"
  "#\n"
  "# truckMinSpeed,\n"
  "# truckMaxSpeed,\n"
  "# truckNightMaxSpeed,\n"
  "#\n"
  "# vehiclesWithTrailersMinSpeed,\n"
  "# vehiclesWithTrailersMaxSpeed,\n"
  "# vehiclesWithTrailersNightMaxSpeed,\n"
  "# ...\n"
  "# }\n"
  "\n"
  "uint8 speed_limit_type\n"
  "\n"
  "uint8 UNKNOWN=0\n"
  "uint8 MAXSPEEDINSCHOOLZONE=1\n"
  "uint8 MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT=2\n"
  "uint8 MAXSPEEDINCONSTRUCTIONZONE=3\n"
  "uint8 VEHICLEMINSPEED=4\n"
  "uint8 VEHICLEMAXSPEED=5\n"
  "uint8 VEHICLENIGHTMAXSPEED=6\n"
  "uint8 TRUCKMINSPEED=7\n"
  "uint8 TRUCKMAXSPEED=8\n"
  "uint8 TRUCKNIGHTMAXSPEED=9\n"
  "uint8 VEHICLESWITHTRAILERSMINSPEED=10\n"
  "uint8 VEHICLESWITHTRAILERSMAXSPEED=11\n"
  "uint8 VEHICLESWITHTRAILERSNIGHTMAXSPEED=12";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__SpeedLimitType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__SpeedLimitType__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1142, 1142},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__SpeedLimitType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__SpeedLimitType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
