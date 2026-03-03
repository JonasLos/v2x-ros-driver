// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/RestrictionAppliesTo.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/restriction_applies_to__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__RestrictionAppliesTo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0xa1, 0x7c, 0xc3, 0x6a, 0x90, 0x07, 0xbc,
      0x61, 0x96, 0x83, 0x27, 0xf2, 0x03, 0xfb, 0x2c,
      0x91, 0x76, 0x87, 0xac, 0x43, 0xdc, 0xe2, 0xf8,
      0x76, 0x66, 0x64, 0x87, 0xf0, 0x5f, 0x66, 0xd7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__RestrictionAppliesTo__TYPE_NAME[] = "j2735_v2x_msgs/msg/RestrictionAppliesTo";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__RestrictionAppliesTo__FIELD_NAME__restriction_applies_to[] = "restriction_applies_to";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__RestrictionAppliesTo__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__RestrictionAppliesTo__FIELD_NAME__restriction_applies_to, 22, 22},
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
j2735_v2x_msgs__msg__RestrictionAppliesTo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__RestrictionAppliesTo__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__RestrictionAppliesTo__FIELDS, 1, 1},
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
  "# RestrictionAppliesTo.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The RestrictionAppliesTo data element provides a short list of common vehicle\n"
  "# types which may have one or more special movements at an intersection. I\n"
  "#\n"
  "# RestrictionAppliesTo ::= ENUMERATED {\n"
  "# none, -- applies to nothing\n"
  "# equippedTransit, -- buses etc.\n"
  "# equippedTaxis,\n"
  "# equippedOther, -- other vehicle types with\n"
  "# \\t\\t-- necessary signal phase state\n"
  "# \\t\\t-- reception equipment\n"
  "# emissionCompliant, -- regional variants with more\n"
  "# \\t\\t-- definitive items also exist\n"
  "# equippedBicycle,\n"
  "# weightCompliant,\n"
  "# heightCompliant,\n"
  "# -- Items dealing with traveler needs serviced by the infrastructure\n"
  "# -- These end users (which are not vehicles) are presumed to be suitably equipped\n"
  "# pedestrians,\n"
  "# slowMovingPersons,\n"
  "# wheelchairUsers,\n"
  "# visualDisabilities,\n"
  "# audioDisabilities, -- hearing\n"
  "# otherUnknownDisabilities,\n"
  "# ...\n"
  "# }\n"
  "\n"
  "uint8 NONE=0\n"
  "uint8 EQUIPPEDTRANSIT=1\n"
  "uint8 EQUIPPEDTAXIS=2\n"
  "uint8 EQUIPPEDOTHER=3\n"
  "uint8 EMISSIONCOMPLIANT=4\n"
  "uint8 EQUIPPEDBICYCLE=5\n"
  "uint8 WEIGHTCOMPLIANT=6\n"
  "uint8 HEIGHTCOMPLIANT=7\n"
  "uint8 PEDESTRIANS=8\n"
  "uint8 SLOWMOVINGPERSONS=9\n"
  "uint8 WHEELCHAIRUSERS=10\n"
  "uint8 VISUALDISABILITIES=11\n"
  "uint8 AUDIODISABILITIES=12\n"
  "uint8 OTHERUNKNOWNDISABILITIES=13\n"
  "\n"
  "# Variable which can be used to store a type enum value.\n"
  "uint8 restriction_applies_to\n"
  "\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__RestrictionAppliesTo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__RestrictionAppliesTo__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1358, 1358},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__RestrictionAppliesTo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__RestrictionAppliesTo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
