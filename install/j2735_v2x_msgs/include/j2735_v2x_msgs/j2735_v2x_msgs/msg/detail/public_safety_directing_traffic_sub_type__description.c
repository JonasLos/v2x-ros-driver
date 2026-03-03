// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PublicSafetyDirectingTrafficSubType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0x2e, 0x06, 0x60, 0x0e, 0x8c, 0x78, 0xcc,
      0xd0, 0xdd, 0x96, 0xaf, 0xdb, 0xd2, 0xa3, 0xb9,
      0x62, 0x61, 0x70, 0xe8, 0xbc, 0x68, 0x92, 0x61,
      0x4e, 0xf7, 0x4e, 0x22, 0x47, 0xd6, 0x32, 0x1e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__TYPE_NAME[] = "j2735_v2x_msgs/msg/PublicSafetyDirectingTrafficSubType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__FIELD_NAME__sub_types[] = "sub_types";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__FIELD_NAME__sub_types, 9, 9},
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
j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__TYPE_NAME, 54, 54},
      {j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__FIELDS, 1, 1},
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
  "# PublicSafetyDirectingTrafficSubType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PublicSafetyDirectingTrafficSubType from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PublicSafetyDirectingTrafficSubType ::= BIT STRING {\n"
  "#    unavailable                        (0),\n"
  "#       -- Default.  \n"
  "#       -- to be used if unknown or if the worker type is not otherwise identified\n"
  "#    policeAndTrafficOfficers           (1), \n"
  "#       -- Law enforcement officers, including traffic control officers,\n"
  "#       -- and adult school crossing guards.\n"
  "#    trafficControlPersons              (2), \n"
  "#      -- Road workers with special equipment for directing traffic.\n"
  "#    railroadCrossingGuards             (3), \n"
  "#      -- Railroad crossing guards who notify motorists of approaching trains \n"
  "#      -- at locations like private roads or driveways crossing train tracks \n"
  "#      -- and where automated equipment is disabled or not present. \n"
  "#    civilDefenseNationalGuardMilitaryPolice (4),\n"
  "#         -- while performing their regular duties or during National\n"
  "#      -- or local emergencies\n"
  "#    emergencyOrganizationPersonnel     (5),\n"
  "#       -- Personnel belonging to emergency response organizations such as\n"
  "#       -- fire departments, hospitals, river rescue, or associated with\n"
  "#       -- emergency vehicles including ambulances as designated by the \n"
  "#       -- regional authority (relating to designation of emergency vehicles)\n"
  "#       -- while performing their duties.\n"
  "#    highwayServiceVehiclePersonnel     (6)\n"
  "#       -- Associated with tow trucks and road service vehicles.\n"
  "#    } (SIZE (7, ...))\n"
  "\n"
  "# A BIT STRING defining the presence of optional flags.\n"
  "# Compare with bitwise-and\n"
  "# if (sub_types & POLICE_AND_TRAFFIC_OFFICERS) etc.\n"
  "# Create with bitwise-or\n"
  "# sub_types = sub_types | POLICE_AND_TRAFFIC_OFFICERS\n"
  "uint8 sub_types\n"
  "\n"
  "uint8 UNAVAILABLE = 0\n"
  "uint8 POLICE_AND_TRAFFIC_OFFICERS = 1\n"
  "uint8 TRAFFIC_CONTROL_PERSONS = 2\n"
  "uint8 RAILROAD_CROSSING_GURADS = 4\n"
  "uint8 CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE = 8\n"
  "uint8 EMERGENCY_ORGANIZATION_PERSONNEL = 16\n"
  "uint8 HIGHWAY_SERVICE_VEHICLE_PERSONNEL = 32";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__TYPE_NAME, 54, 54},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2162, 2162},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
