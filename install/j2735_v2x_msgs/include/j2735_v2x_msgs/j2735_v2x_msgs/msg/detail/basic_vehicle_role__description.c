// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/BasicVehicleRole.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__BasicVehicleRole__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0x71, 0x57, 0x8a, 0xd7, 0x2b, 0x8d, 0x0c,
      0x7e, 0x4e, 0xd2, 0x5e, 0xd0, 0x00, 0xef, 0x9a,
      0x12, 0x52, 0xe7, 0x29, 0x6b, 0xb6, 0xb2, 0x53,
      0xab, 0x7c, 0xa0, 0x54, 0xf9, 0xbb, 0xf2, 0xe0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__BasicVehicleRole__TYPE_NAME[] = "j2735_v2x_msgs/msg/BasicVehicleRole";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__BasicVehicleRole__FIELD_NAME__basic_vehicle_role[] = "basic_vehicle_role";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__BasicVehicleRole__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__BasicVehicleRole__FIELD_NAME__basic_vehicle_role, 18, 18},
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
j2735_v2x_msgs__msg__BasicVehicleRole__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__BasicVehicleRole__TYPE_NAME, 35, 35},
      {j2735_v2x_msgs__msg__BasicVehicleRole__FIELDS, 1, 1},
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
  "# BasicVehicleRole.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# BasicVehicleRole ::= ENUMERATED {\n"
  "#     -- Values used in the EU and in the US\n"
  "#     basicVehicle     (0), -- Light duty passenger vehicle type\n"
  "#     publicTransport  (1), -- Used in EU for Transit us\n"
  "#     specialTransport (2), -- Used in EU (e.g. heavy load)\n"
  "#     dangerousGoods   (3), -- Used in EU for any HAZMAT\n"
  "#     roadWork         (4), -- Used in EU for State and Local DOT uses\n"
  "#     roadRescue       (5), -- Used in EU and in the US to include tow trucks.\n"
  "#     emergency        (6), -- Used in EU for Police, Fire and Ambulance units\n"
  "#     safetyCar        (7), -- Used in EU for Escort vehicles\n"
  "#     -- Begin US unique numbering\n"
  "#     none-unknown     (8), -- added to follow current SAE style guidelines\n"
  "#     truck            (9), -- Heavy trucks with additional BSM rights and obligations\n"
  "#     motorcycle      (10), --\n"
  "#     roadSideSource  (11), -- For infrastructure generated calls such as\n"
  "#                           -- fire house, rail infrastructure, roadwork site, etc.\n"
  "#     police          (12), --\n"
  "#     fire            (13), --\n"
  "#     ambulance       (14), -- (does not include private para-transit etc.)\n"
  "#     dot             (15), -- all roadwork vehicles\n"
  "#     transit         (16), -- all transit vehicles \n"
  "#     slowMoving      (17), -- to also include oversize etc.\n"
  "#     stopNgo         (18), -- to include trash trucks, school buses and others\n"
  "#                           -- that routinely disturb the free flow of traffic\n"
  "#     cyclist         (19), --\n"
  "#     pedestrian      (20), -- also includes those with mobility limitations\n"
  "#     nonMotorized    (21), -- other, horse drawn, etc.\n"
  "#     military        (22), --\n"
  "#     ...   \n"
  "#     }  \n"
  "\n"
  "uint8 basic_vehicle_role\n"
  "\n"
  "# Enumeration values for basic_vehicle_role\n"
  "uint8 BASIC_VEHICLE=0\n"
  "uint8 PUBLIC_TRANSPORT=1\n"
  "uint8 SPECIAL_TRANSPORT=2\n"
  "uint8 DANGEROUS_GOODS=3\n"
  "uint8 ROAD_WORK=4\n"
  "uint8 ROAD_RESCUE=5\n"
  "uint8 EMERGENCY=6\n"
  "uint8 SAFETY_CAR=7\n"
  "uint8 NONE_UNKNOWN=8\n"
  "uint8 TRUCK=9\n"
  "uint8 MOTORCYCLE=10\n"
  "uint8 ROAD_SIDE_SOURCE=11\n"
  "uint8 POLICE=12\n"
  "uint8 FIRE=13\n"
  "uint8 AMBULANCE=14\n"
  "uint8 DOT=15\n"
  "uint8 TRANSIT=16\n"
  "uint8 SLOW_MOVING=17\n"
  "uint8 STOP_N_GO=18\n"
  "uint8 CYCLIST=19\n"
  "uint8 PEDESTRIAN=20\n"
  "uint8 NON_MOTORIZED=21\n"
  "uint8 MILITARY=22";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__BasicVehicleRole__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__BasicVehicleRole__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2259, 2259},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__BasicVehicleRole__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__BasicVehicleRole__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
