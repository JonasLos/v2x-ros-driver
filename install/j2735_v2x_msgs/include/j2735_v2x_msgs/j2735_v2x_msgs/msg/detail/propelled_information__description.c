// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/propelled_information__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PropelledInformation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x76, 0x17, 0xd3, 0xd7, 0xc9, 0xfd, 0xc3,
      0x46, 0xd4, 0xd1, 0x95, 0x64, 0xf6, 0xb1, 0x1e,
      0x21, 0xc3, 0xf0, 0xef, 0x79, 0xe8, 0xb8, 0x46,
      0xf3, 0x90, 0x11, 0x3d, 0x12, 0x69, 0x3e, 0x97,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/motorized_propelled_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/human_propelled_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/animal_propelled_type__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AnimalPropelledType__EXPECTED_HASH = {1, {
    0x95, 0x80, 0x0a, 0xb8, 0x8d, 0xe8, 0x6c, 0x41,
    0x4f, 0xa1, 0x35, 0x20, 0xbd, 0xff, 0x97, 0xb0,
    0x02, 0x20, 0xaa, 0xae, 0x3b, 0x6c, 0x35, 0x09,
    0x6e, 0xd3, 0xf6, 0x9e, 0x06, 0x8f, 0x46, 0x0e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__HumanPropelledType__EXPECTED_HASH = {1, {
    0x91, 0xf1, 0x81, 0x10, 0x32, 0x52, 0x3d, 0xa6,
    0xfe, 0xce, 0xfe, 0x20, 0x5b, 0x3e, 0xd9, 0x6a,
    0x42, 0xb2, 0xfa, 0xb1, 0xe6, 0x0a, 0xf2, 0x3e,
    0xfe, 0x85, 0xd5, 0x72, 0xd7, 0x83, 0x00, 0x8c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__MotorizedPropelledType__EXPECTED_HASH = {1, {
    0xea, 0xa7, 0x4d, 0x0c, 0x1e, 0xc3, 0xd1, 0x31,
    0x9f, 0x2d, 0x43, 0xfa, 0x33, 0xd1, 0xa5, 0xb8,
    0x6f, 0x6d, 0xdb, 0x29, 0x5e, 0x81, 0xc7, 0x03,
    0x69, 0x4b, 0x2d, 0x0e, 0xca, 0x2a, 0x4b, 0x50,
  }};
#endif

static char j2735_v2x_msgs__msg__PropelledInformation__TYPE_NAME[] = "j2735_v2x_msgs/msg/PropelledInformation";
static char j2735_v2x_msgs__msg__AnimalPropelledType__TYPE_NAME[] = "j2735_v2x_msgs/msg/AnimalPropelledType";
static char j2735_v2x_msgs__msg__HumanPropelledType__TYPE_NAME[] = "j2735_v2x_msgs/msg/HumanPropelledType";
static char j2735_v2x_msgs__msg__MotorizedPropelledType__TYPE_NAME[] = "j2735_v2x_msgs/msg/MotorizedPropelledType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PropelledInformation__FIELD_NAME__choice[] = "choice";
static char j2735_v2x_msgs__msg__PropelledInformation__FIELD_NAME__human[] = "human";
static char j2735_v2x_msgs__msg__PropelledInformation__FIELD_NAME__animal[] = "animal";
static char j2735_v2x_msgs__msg__PropelledInformation__FIELD_NAME__motor[] = "motor";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PropelledInformation__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PropelledInformation__FIELD_NAME__choice, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PropelledInformation__FIELD_NAME__human, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__HumanPropelledType__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PropelledInformation__FIELD_NAME__animal, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AnimalPropelledType__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PropelledInformation__FIELD_NAME__motor, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__MotorizedPropelledType__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__PropelledInformation__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AnimalPropelledType__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__HumanPropelledType__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MotorizedPropelledType__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__PropelledInformation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PropelledInformation__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__PropelledInformation__FIELDS, 4, 4},
    },
    {j2735_v2x_msgs__msg__PropelledInformation__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AnimalPropelledType__EXPECTED_HASH, j2735_v2x_msgs__msg__AnimalPropelledType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AnimalPropelledType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__HumanPropelledType__EXPECTED_HASH, j2735_v2x_msgs__msg__HumanPropelledType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__HumanPropelledType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__MotorizedPropelledType__EXPECTED_HASH, j2735_v2x_msgs__msg__MotorizedPropelledType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__MotorizedPropelledType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# PropelledInformation.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PropelledInformation from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PropelledInformation ::= CHOICE {\n"
  "#    human   HumanPropelledType, -- PersonalDeviceUserType would be a aPEDESTRIAN\n"
  "#    animal  AnimalPropelledType,\n"
  "#    motor   MotorizedPropelledType,\n"
  "#    ...\n"
  "# }    \n"
  "\n"
  "uint8 choice\n"
  "\n"
  "uint8 CHOICE_HUMAN=0\n"
  "uint8 CHOICE_ANIMAL=1\n"
  "uint8 CHOICE_MOTOR=2\n"
  "\n"
  "# Following fields selected by the choice enum\n"
  "j2735_v2x_msgs/HumanPropelledType human\n"
  "j2735_v2x_msgs/AnimalPropelledType animal\n"
  "j2735_v2x_msgs/MotorizedPropelledType motor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PropelledInformation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PropelledInformation__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 662, 662},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PropelledInformation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PropelledInformation__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AnimalPropelledType__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__HumanPropelledType__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__MotorizedPropelledType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
