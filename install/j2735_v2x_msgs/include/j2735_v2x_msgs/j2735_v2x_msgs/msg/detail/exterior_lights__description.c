// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ExteriorLights.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/exterior_lights__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ExteriorLights__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x4a, 0xba, 0xa6, 0x97, 0xa5, 0xae, 0x50,
      0x3f, 0xdc, 0xac, 0x19, 0x10, 0x08, 0xe0, 0xf9,
      0x3c, 0xe6, 0x10, 0x3c, 0x6b, 0xca, 0xe4, 0x56,
      0x62, 0x30, 0x07, 0x7c, 0x02, 0x1d, 0x47, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ExteriorLights__TYPE_NAME[] = "j2735_v2x_msgs/msg/ExteriorLights";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ExteriorLights__FIELD_NAME__exterior_lights[] = "exterior_lights";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ExteriorLights__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ExteriorLights__FIELD_NAME__exterior_lights, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__ExteriorLights__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ExteriorLights__TYPE_NAME, 33, 33},
      {j2735_v2x_msgs__msg__ExteriorLights__FIELDS, 1, 1},
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
  "# ExteriorLights.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# ExteriorLights ::= BIT STRING { \n"
  "#    -- All lights off is indicated by no bits set\n"
  "#    lowBeamHeadlightsOn       (0), \n"
  "#    highBeamHeadlightsOn      (1), \n"
  "#    leftTurnSignalOn          (2), \n"
  "#    rightTurnSignalOn         (3), \n"
  "#    hazardSignalOn            (4), \n"
  "#    automaticLightControlOn   (5),\n"
  "#    daytimeRunningLightsOn    (6), \n"
  "#    fogLightOn                (7), \n"
  "#    parkingLightsOn           (8) \n"
  "#    } (SIZE (9, ...))\n"
  "uint16 exterior_lights\n"
  "\n"
  "uint16 ALL_LIGHTS_OFF=0\n"
  "uint16 LOW_BEAM_HEADLIGHTS_ON=1\n"
  "uint16 HIGH_BEAM_HEADLIGHTS_ON=2\n"
  "uint16 LEFT_TURN_SIGNAL_ON=4\n"
  "uint16 RIGHT_TURN_SIGNAL_ON=8\n"
  "uint16 HAZARD_SIGNAL_ON=16\n"
  "uint16 AUTOMATIC_LIGHT_CONTROL_ON=32\n"
  "uint16 DAYTIME_RUNNING_LIGHTS_ON=64\n"
  "uint16 FOG_LIGHT_ON=128\n"
  "uint16 PARKING_LIGHTS_ON=256";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ExteriorLights__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ExteriorLights__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 822, 822},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ExteriorLights__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ExteriorLights__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
