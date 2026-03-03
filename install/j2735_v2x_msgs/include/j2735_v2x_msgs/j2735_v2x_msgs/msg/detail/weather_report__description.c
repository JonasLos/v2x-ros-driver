// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/WeatherReport.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/weather_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__WeatherReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x48, 0x2b, 0x46, 0x6f, 0x76, 0x7b, 0x9c,
      0xbd, 0xdf, 0x4f, 0xea, 0x46, 0xa4, 0x8a, 0xf1,
      0xd9, 0xb0, 0x10, 0x6d, 0xf0, 0x86, 0x4e, 0x97,
      0x16, 0x23, 0xad, 0x78, 0x10, 0x86, 0x9f, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_rate__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__CoefficientOfFriction__EXPECTED_HASH = {1, {
    0x17, 0xb9, 0x03, 0x58, 0x0f, 0x27, 0x4b, 0xb4,
    0xc0, 0xde, 0x44, 0xf7, 0x0f, 0x12, 0x8b, 0x55,
    0xb7, 0xf8, 0x93, 0x74, 0xe2, 0x31, 0x51, 0x61,
    0x4e, 0xf5, 0xf7, 0x54, 0xe3, 0x7c, 0x81, 0xc6,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NTCIPEssMobileFriction__EXPECTED_HASH = {1, {
    0x96, 0x05, 0x73, 0x8c, 0x22, 0x28, 0x3b, 0x54,
    0x06, 0x1e, 0x20, 0xfa, 0x2c, 0x2d, 0x3c, 0x17,
    0x50, 0xfb, 0x08, 0x8b, 0x1c, 0x03, 0x91, 0x00,
    0x9b, 0x2d, 0x15, 0x5b, 0x5a, 0x8c, 0x7e, 0x9a,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NTCIPEssPrecipRate__EXPECTED_HASH = {1, {
    0x32, 0xeb, 0x57, 0x6e, 0xc3, 0x7d, 0x47, 0x25,
    0x30, 0xa5, 0x11, 0xd5, 0x6f, 0x32, 0xe9, 0xb6,
    0x03, 0xe0, 0x2e, 0x51, 0xd4, 0xd8, 0xf4, 0x23,
    0x38, 0xd0, 0x0d, 0x04, 0xd7, 0x86, 0xde, 0xd4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__EXPECTED_HASH = {1, {
    0x8d, 0xed, 0xd9, 0xea, 0x73, 0x6f, 0x3b, 0x37,
    0xbb, 0x84, 0x8f, 0x42, 0x58, 0x7b, 0xa4, 0x64,
    0x28, 0xae, 0x48, 0x30, 0xaf, 0x58, 0xfe, 0xb6,
    0x37, 0xb2, 0x38, 0x8a, 0x92, 0x30, 0xb6, 0x26,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__EXPECTED_HASH = {1, {
    0x64, 0xab, 0x29, 0x69, 0x23, 0x0c, 0x88, 0xff,
    0x5f, 0x1d, 0xf5, 0x7f, 0x42, 0x2d, 0xc6, 0x9f,
    0x67, 0x4b, 0x0e, 0x83, 0x0c, 0xcb, 0xf0, 0x71,
    0xec, 0xad, 0x8a, 0x67, 0xb3, 0x44, 0xc9, 0xb4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__EXPECTED_HASH = {1, {
    0x96, 0x2a, 0x39, 0x79, 0x91, 0x45, 0x79, 0x85,
    0x67, 0x09, 0x8f, 0x55, 0xdc, 0xa6, 0x62, 0x13,
    0xd8, 0x91, 0x0c, 0xc0, 0x02, 0xce, 0xc6, 0x75,
    0xee, 0x1c, 0x0e, 0x82, 0xc8, 0x4d, 0x6d, 0xfa,
  }};
#endif

static char j2735_v2x_msgs__msg__WeatherReport__TYPE_NAME[] = "j2735_v2x_msgs/msg/WeatherReport";
static char j2735_v2x_msgs__msg__CoefficientOfFriction__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoefficientOfFriction";
static char j2735_v2x_msgs__msg__NTCIPEssMobileFriction__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssMobileFriction";
static char j2735_v2x_msgs__msg__NTCIPEssPrecipRate__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipRate";
static char j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipSituation";
static char j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipYesNo";
static char j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssSolarRadiation";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__is_raining[] = "is_raining";
static char j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__rain_rate[] = "rain_rate";
static char j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__precip_situation[] = "precip_situation";
static char j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__solar_radiation[] = "solar_radiation";
static char j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__friction[] = "friction";
static char j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__road_friction[] = "road_friction";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__WeatherReport__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__is_raining, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__rain_rate, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NTCIPEssPrecipRate__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__precip_situation, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__solar_radiation, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__friction, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NTCIPEssMobileFriction__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherReport__FIELD_NAME__road_friction, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__CoefficientOfFriction__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__WeatherReport__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__CoefficientOfFriction__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NTCIPEssMobileFriction__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipRate__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__WeatherReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__WeatherReport__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__WeatherReport__FIELDS, 7, 7},
    },
    {j2735_v2x_msgs__msg__WeatherReport__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__CoefficientOfFriction__EXPECTED_HASH, j2735_v2x_msgs__msg__CoefficientOfFriction__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__CoefficientOfFriction__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssMobileFriction__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssPrecipRate__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# WeatherReport.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# WeatherReport ::= SEQUENCE {    \n"
  "#    isRaining        NTCIP.EssPrecipYesNo,\n"
  "#    rainRate         NTCIP.EssPrecipRate       OPTIONAL,\n"
  "#    precipSituation  NTCIP.EssPrecipSituation  OPTIONAL,\n"
  "#    solarRadiation   NTCIP.EssSolarRadiation   OPTIONAL,\n"
  "#    friction         NTCIP.EssMobileFriction   OPTIONAL,\n"
  "#    roadFriction     CoefficientOfFriction     OPTIONAL,   \n"
  "#    ... \n"
  "#    }\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_RAIN_RATE) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_RAIN_RATE\n"
  "uint16 presence_vector\n"
  "\n"
  "uint16 HAS_RAIN_RATE = 1\n"
  "uint16 HAS_PRECIP_SITUATION = 2\n"
  "uint16 HAS_SOLAR_RADIATION = 4\n"
  "uint16 HAS_FRICTION = 8\n"
  "uint16 HAS_ROAD_FRICTION = 16\n"
  "\n"
  "j2735_v2x_msgs/NTCIPEssPrecipYesNo is_raining\n"
  "\n"
  "####\n"
  "# OPTIONAL FIELDS\n"
  "# All fields below this section are optional.\n"
  "# The presence of a given field can be idenfied by checking the presence_vector\n"
  "####\n"
  "\n"
  "j2735_v2x_msgs/NTCIPEssPrecipRate rain_rate\n"
  "\n"
  "j2735_v2x_msgs/NTCIPEssPrecipSituation precip_situation\n"
  "\n"
  "j2735_v2x_msgs/NTCIPEssSolarRadiation solar_radiation\n"
  "\n"
  "j2735_v2x_msgs/NTCIPEssMobileFriction friction\n"
  "\n"
  "j2735_v2x_msgs/CoefficientOfFriction road_friction";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__WeatherReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__WeatherReport__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1275, 1275},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__WeatherReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__WeatherReport__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__CoefficientOfFriction__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
