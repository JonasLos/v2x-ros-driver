// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/FuelType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/fuel_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__FuelType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9f, 0xc4, 0xb6, 0x33, 0xca, 0xf4, 0x85, 0xaa,
      0x73, 0x27, 0x8d, 0x18, 0xb6, 0x2f, 0xbe, 0x36,
      0x95, 0xc1, 0xb1, 0x72, 0x66, 0x88, 0xa4, 0x12,
      0x5d, 0x55, 0x9d, 0x79, 0x7a, 0x5d, 0x6a, 0x16,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__FuelType__TYPE_NAME[] = "j2735_v2x_msgs/msg/FuelType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__FuelType__FIELD_NAME__fuel_type[] = "fuel_type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__FuelType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__FuelType__FIELD_NAME__fuel_type, 9, 9},
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
j2735_v2x_msgs__msg__FuelType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__FuelType__TYPE_NAME, 27, 27},
      {j2735_v2x_msgs__msg__FuelType__FIELDS, 1, 1},
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
  "# FuelType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# FuelType ::= INTEGER (0..15)\n"
  "#    unknownFuel   FuelType::=  0 -- Gasoline Powered\n"
  "#    gasoline      FuelType::=  1 \n"
  "#    ethanol       FuelType::=  2 -- Including blends\n"
  "#    diesel        FuelType::=  3 -- All types\n"
  "#    electric      FuelType::=  4  \n"
  "#    hybrid        FuelType::=  5 -- All types \n"
  "#    hydrogen      FuelType::=  6  \n"
  "#    natGasLiquid  FuelType::=  7 -- Liquefied\n"
  "#    natGasComp    FuelType::=  8 -- Compressed\n"
  "#    propane       FuelType::=  9  \n"
  "\n"
  "uint8 fuel_type\n"
  "\n"
  "# Enumeration values for fuel_type\n"
  "uint8 UNKNOWN_FUEL=0\n"
  "uint8 GASOLINE=1\n"
  "uint8 ETHANOL=2\n"
  "uint8 DIESEL=3\n"
  "uint8 ELECTRIC=4\n"
  "uint8 HYBRID=5\n"
  "uint8 HYDROGEN=6\n"
  "uint8 NAT_GAS_LIQUID=7\n"
  "uint8 NAT_GAS_COMP=8\n"
  "uint8 PROPANE=9";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__FuelType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__FuelType__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 753, 753},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__FuelType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__FuelType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
