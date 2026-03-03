// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/weather_probe__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__WeatherProbe__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0xc2, 0x0c, 0xd2, 0x66, 0xba, 0xbc, 0xa8,
      0xf5, 0xc0, 0xfb, 0x54, 0xdb, 0xcf, 0xb6, 0x0c,
      0x8a, 0xd0, 0x1a, 0x2f, 0xcd, 0xae, 0x7b, 0x32,
      0xa1, 0x97, 0x0f, 0x7e, 0x88, 0x62, 0xa2, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__functions.h"
#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__functions.h"
#include "j2735_v2x_msgs/msg/detail/wiper_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/wiper_rate__functions.h"
#include "j2735_v2x_msgs/msg/detail/wiper_set__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AmbientAirPressure__EXPECTED_HASH = {1, {
    0xc3, 0xe8, 0x92, 0x8c, 0x64, 0x96, 0x77, 0xa0,
    0xa8, 0xea, 0x7a, 0x14, 0x4d, 0x28, 0x7b, 0xb5,
    0x87, 0x25, 0x77, 0x5d, 0x1d, 0x2d, 0x4e, 0x6b,
    0x5c, 0xea, 0x64, 0x76, 0x1d, 0xa6, 0x09, 0xae,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AmbientAirTemperature__EXPECTED_HASH = {1, {
    0x78, 0xc6, 0x97, 0xb3, 0x30, 0x99, 0x5d, 0xc4,
    0x98, 0x3f, 0x9f, 0xb3, 0x0d, 0xff, 0x44, 0x15,
    0x79, 0x62, 0x7b, 0xc7, 0x41, 0xf1, 0xa2, 0xe6,
    0xed, 0x57, 0x8b, 0x6b, 0xb3, 0x20, 0x81, 0x69,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__WiperRate__EXPECTED_HASH = {1, {
    0x7a, 0x92, 0x19, 0x8c, 0x1d, 0x75, 0x12, 0xd3,
    0x12, 0xfb, 0x93, 0x2b, 0x07, 0xc0, 0x9e, 0x5f,
    0x58, 0x03, 0xb3, 0x3e, 0x0e, 0x99, 0xe1, 0x60,
    0xcd, 0x8d, 0x7f, 0x53, 0x1d, 0x1a, 0x9f, 0xfa,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__WiperSet__EXPECTED_HASH = {1, {
    0x83, 0x95, 0x31, 0xe9, 0xad, 0x33, 0xa9, 0x04,
    0xa0, 0x4e, 0x1d, 0x23, 0x34, 0xfd, 0xa8, 0xb5,
    0xba, 0x9b, 0xe4, 0xf1, 0xd5, 0xcd, 0x81, 0xd2,
    0x53, 0x7a, 0x57, 0x1d, 0xf5, 0x92, 0xa7, 0x3b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__WiperStatus__EXPECTED_HASH = {1, {
    0xd1, 0xa2, 0x76, 0xb7, 0x40, 0xaa, 0x00, 0x2a,
    0xaa, 0x4b, 0x1d, 0xba, 0xdf, 0xb6, 0x69, 0xab,
    0x27, 0x1d, 0xf9, 0x1c, 0x91, 0xc2, 0xe4, 0xb4,
    0xa5, 0xcb, 0xee, 0x45, 0xee, 0x64, 0x0a, 0x0b,
  }};
#endif

static char j2735_v2x_msgs__msg__WeatherProbe__TYPE_NAME[] = "j2735_v2x_msgs/msg/WeatherProbe";
static char j2735_v2x_msgs__msg__AmbientAirPressure__TYPE_NAME[] = "j2735_v2x_msgs/msg/AmbientAirPressure";
static char j2735_v2x_msgs__msg__AmbientAirTemperature__TYPE_NAME[] = "j2735_v2x_msgs/msg/AmbientAirTemperature";
static char j2735_v2x_msgs__msg__WiperRate__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperRate";
static char j2735_v2x_msgs__msg__WiperSet__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperSet";
static char j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__WeatherProbe__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__WeatherProbe__FIELD_NAME__air_temp[] = "air_temp";
static char j2735_v2x_msgs__msg__WeatherProbe__FIELD_NAME__air_pressure[] = "air_pressure";
static char j2735_v2x_msgs__msg__WeatherProbe__FIELD_NAME__rain_rates[] = "rain_rates";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__WeatherProbe__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__WeatherProbe__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherProbe__FIELD_NAME__air_temp, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AmbientAirTemperature__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherProbe__FIELD_NAME__air_pressure, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AmbientAirPressure__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherProbe__FIELD_NAME__rain_rates, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__WiperSet__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__WeatherProbe__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AmbientAirPressure__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AmbientAirTemperature__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperRate__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperSet__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__WeatherProbe__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__WeatherProbe__TYPE_NAME, 31, 31},
      {j2735_v2x_msgs__msg__WeatherProbe__FIELDS, 4, 4},
    },
    {j2735_v2x_msgs__msg__WeatherProbe__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AmbientAirPressure__EXPECTED_HASH, j2735_v2x_msgs__msg__AmbientAirPressure__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AmbientAirPressure__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AmbientAirTemperature__EXPECTED_HASH, j2735_v2x_msgs__msg__AmbientAirTemperature__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__AmbientAirTemperature__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperRate__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperRate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__WiperRate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperSet__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperSet__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__WiperSet__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__WiperStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# WeatherProbe.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# WeatherProbe ::= SEQUENCE {\n"
  "#    airTemp      AmbientAirTemperature  OPTIONAL,\n"
  "#    airPressure  AmbientAirPressure     OPTIONAL,\n"
  "#    rainRates    WiperSet               OPTIONAL,\n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "# A BIT STRING defining the presence of optional feilds.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_AIR_TEMP) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_AIR_TEMP\n"
  "uint32 presence_vector\n"
  "\n"
  "uint32 HAS_AIR_TEMP = 1\n"
  "uint16 HAS_AIR_PRESSURE = 2\n"
  "uint16 HAS_RAIN_RATES = 4\n"
  "\n"
  "j2735_v2x_msgs/AmbientAirTemperature air_temp\n"
  "\n"
  "j2735_v2x_msgs/AmbientAirPressure air_pressure\n"
  "\n"
  "j2735_v2x_msgs/WiperSet rain_rates";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__WeatherProbe__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__WeatherProbe__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 690, 690},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__WeatherProbe__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__WeatherProbe__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AmbientAirPressure__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__AmbientAirTemperature__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__WiperRate__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__WiperSet__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__WiperStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
