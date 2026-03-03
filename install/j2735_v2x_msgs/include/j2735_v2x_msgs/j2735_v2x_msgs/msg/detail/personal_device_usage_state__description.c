// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PersonalDeviceUsageState.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PersonalDeviceUsageState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x65, 0xa3, 0x65, 0xfe, 0x83, 0x77, 0x59,
      0xdd, 0xc3, 0xb9, 0x7e, 0x27, 0x13, 0xaa, 0xe9,
      0xb2, 0x90, 0x6f, 0x22, 0x25, 0x47, 0x26, 0x54,
      0x5f, 0xd3, 0xfa, 0xd8, 0xca, 0x3f, 0x7e, 0xb4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PersonalDeviceUsageState__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalDeviceUsageState";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PersonalDeviceUsageState__FIELD_NAME__states[] = "states";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PersonalDeviceUsageState__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PersonalDeviceUsageState__FIELD_NAME__states, 6, 6},
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
j2735_v2x_msgs__msg__PersonalDeviceUsageState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PersonalDeviceUsageState__TYPE_NAME, 43, 43},
      {j2735_v2x_msgs__msg__PersonalDeviceUsageState__FIELDS, 1, 1},
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
  "# PersonalDeviceUsageState.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PersonalDeviceUsageState from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PersonalDeviceUsageState ::= BIT STRING {  \n"
  "#    unavailable      (0), -- Not specified\n"
  "#    other            (1), -- Used for states not defined below\n"
  "#    idle             (2), -- Human is not interacting with device  \n"
  "#    listeningToAudio (3), -- Any audio source other then calling \n"
  "#    typing           (4), -- Including texting, entering addresses \n"
  "#                          -- and other manual input activity \n"
  "#    calling          (5),   \n"
  "#    playingGames     (6),   \n"
  "#    reading          (7),   \n"
  "#    viewing          (8)  -- Watching dynamic content, including following \n"
  "#                          -- navigation prompts, viewing videos or other \n"
  "#                          -- visual contents that are not static\n"
  "#    } (SIZE (9, ...))\n"
  "#    -- All bits shall be set to zero when unknown state\n"
  "\n"
  "# A BIT STRING defining the presence of optional flags.\n"
  "# Compare with bitwise-and\n"
  "# if (states & IDLE) etc.\n"
  "# Create with bitwise-or\n"
  "# states = states | IDLE\n"
  "uint16 states\n"
  "\n"
  "uint16 UNAVAILABLE=0\n"
  "uint16 OTHER=1\n"
  "uint16 IDLE=2\n"
  "uint16 LISTENING_TO_AUDIO=4\n"
  "uint16 TYPING=8\n"
  "uint16 CALLING=16\n"
  "uint16 PLAYING_GAMES=32\n"
  "uint16 READING=64\n"
  "uint16 VIEWING=128";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PersonalDeviceUsageState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PersonalDeviceUsageState__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1369, 1369},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PersonalDeviceUsageState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PersonalDeviceUsageState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
