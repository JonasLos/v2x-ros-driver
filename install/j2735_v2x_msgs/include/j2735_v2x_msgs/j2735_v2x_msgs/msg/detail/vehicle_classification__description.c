// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vehicle_classification__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VehicleClassification__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x59, 0xbf, 0x59, 0xac, 0x78, 0xe3, 0xae, 0x51,
      0xfe, 0xa9, 0x1a, 0x2c, 0x23, 0x73, 0x82, 0x85,
      0x31, 0xd1, 0xc5, 0x65, 0x58, 0x0b, 0x58, 0xc6,
      0x1c, 0x82, 0xe8, 0x2d, 0xcd, 0xea, 0xa6, 0x91,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__functions.h"
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__functions.h"
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__functions.h"
#include "j2735_v2x_msgs/msg/detail/fuel_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BasicVehicleClass__EXPECTED_HASH = {1, {
    0xce, 0xed, 0x04, 0x0c, 0x41, 0xec, 0xac, 0xae,
    0xce, 0xcc, 0x52, 0x28, 0xa6, 0xcd, 0x1f, 0xc3,
    0xd8, 0x09, 0x68, 0x39, 0x35, 0x26, 0xfb, 0x44,
    0xeb, 0x61, 0xde, 0x4a, 0xd0, 0xaa, 0x6f, 0x8c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BasicVehicleRole__EXPECTED_HASH = {1, {
    0x16, 0x71, 0x57, 0x8a, 0xd7, 0x2b, 0x8d, 0x0c,
    0x7e, 0x4e, 0xd2, 0x5e, 0xd0, 0x00, 0xef, 0x9a,
    0x12, 0x52, 0xe7, 0x29, 0x6b, 0xb6, 0xb2, 0x53,
    0xab, 0x7c, 0xa0, 0x54, 0xf9, 0xbb, 0xf2, 0xe0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__FuelType__EXPECTED_HASH = {1, {
    0x9f, 0xc4, 0xb6, 0x33, 0xca, 0xf4, 0x85, 0xaa,
    0x73, 0x27, 0x8d, 0x18, 0xb6, 0x2f, 0xbe, 0x36,
    0x95, 0xc1, 0xb1, 0x72, 0x66, 0x88, 0xa4, 0x12,
    0x5d, 0x55, 0x9d, 0x79, 0x7a, 0x5d, 0x6a, 0x16,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__EXPECTED_HASH = {1, {
    0x1c, 0x06, 0xe2, 0x25, 0x9c, 0x95, 0x3a, 0x05,
    0x39, 0xa9, 0x00, 0x89, 0xbf, 0xff, 0x7f, 0x10,
    0x88, 0x27, 0xfc, 0x3c, 0x28, 0x24, 0x5a, 0x25,
    0x2f, 0x6f, 0x02, 0xde, 0x3b, 0x59, 0x0e, 0x44,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITISResponderGroupAffected__EXPECTED_HASH = {1, {
    0x05, 0x24, 0x8c, 0xa0, 0xcc, 0xcc, 0x96, 0xe5,
    0xef, 0x4f, 0xd7, 0xed, 0x92, 0x82, 0x00, 0xc4,
    0x18, 0x08, 0xa6, 0xea, 0xad, 0x37, 0x60, 0x18,
    0x12, 0x43, 0xe2, 0x11, 0x87, 0x9a, 0xac, 0xfe,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITISVehicleGroupAffected__EXPECTED_HASH = {1, {
    0x1e, 0x14, 0x2b, 0x50, 0x15, 0xee, 0x94, 0xb0,
    0x7f, 0x61, 0x1b, 0xfb, 0xed, 0x2b, 0x91, 0xdc,
    0xd5, 0x16, 0xb5, 0x0d, 0x66, 0x6e, 0x3f, 0xe1,
    0xd7, 0xd4, 0xd6, 0xbd, 0xdd, 0x5f, 0x7b, 0x0d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleType__EXPECTED_HASH = {1, {
    0xd9, 0x06, 0x05, 0x41, 0x21, 0x2a, 0x3e, 0xa9,
    0x81, 0xb9, 0x86, 0x57, 0xb3, 0xb9, 0xee, 0xa3,
    0x43, 0x3d, 0xc6, 0x64, 0x5a, 0x44, 0x2d, 0xe6,
    0x86, 0x03, 0xce, 0x78, 0xf4, 0x7b, 0xc2, 0xfb,
  }};
#endif

static char j2735_v2x_msgs__msg__VehicleClassification__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleClassification";
static char j2735_v2x_msgs__msg__BasicVehicleClass__TYPE_NAME[] = "j2735_v2x_msgs/msg/BasicVehicleClass";
static char j2735_v2x_msgs__msg__BasicVehicleRole__TYPE_NAME[] = "j2735_v2x_msgs/msg/BasicVehicleRole";
static char j2735_v2x_msgs__msg__FuelType__TYPE_NAME[] = "j2735_v2x_msgs/msg/FuelType";
static char j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISIncidentResponseEquipment";
static char j2735_v2x_msgs__msg__ITISResponderGroupAffected__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISResponderGroupAffected";
static char j2735_v2x_msgs__msg__ITISVehicleGroupAffected__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISVehicleGroupAffected";
static char j2735_v2x_msgs__msg__VehicleType__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__key_type[] = "key_type";
static char j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__role[] = "role";
static char j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__iso3833[] = "iso3833";
static char j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__hpms_type[] = "hpms_type";
static char j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__vehicle_type[] = "vehicle_type";
static char j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__response_equip[] = "response_equip";
static char j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__responder_type[] = "responder_type";
static char j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__fuel_type[] = "fuel_type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VehicleClassification__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__key_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__BasicVehicleClass__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__role, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__BasicVehicleRole__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__iso3833, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__hpms_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__VehicleType__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__vehicle_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ITISVehicleGroupAffected__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__response_equip, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__responder_type, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ITISResponderGroupAffected__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleClassification__FIELD_NAME__fuel_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__FuelType__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__VehicleClassification__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__BasicVehicleClass__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BasicVehicleRole__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__FuelType__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITISResponderGroupAffected__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITISVehicleGroupAffected__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleType__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__VehicleClassification__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VehicleClassification__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__VehicleClassification__FIELDS, 9, 9},
    },
    {j2735_v2x_msgs__msg__VehicleClassification__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BasicVehicleClass__EXPECTED_HASH, j2735_v2x_msgs__msg__BasicVehicleClass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__BasicVehicleClass__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BasicVehicleRole__EXPECTED_HASH, j2735_v2x_msgs__msg__BasicVehicleRole__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__BasicVehicleRole__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__FuelType__EXPECTED_HASH, j2735_v2x_msgs__msg__FuelType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__FuelType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISResponderGroupAffected__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISVehicleGroupAffected__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleType__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__VehicleType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# VehicleClassification.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# VehicleClassification ::= SEQUENCE {\n"
  "#    -- Composed of the following elements:\n"
  "\n"
  "#    -- The 'master' DSRC list used when space is limited\n"
  "#    keyType         BasicVehicleClass OPTIONAL,\n"
  "\n"
  "#    -- Types used in the MAP/SPAT/SSR/SRM exchanges \n"
  "#    role            BasicVehicleRole OPTIONAL, -- Basic CERT role at a given time\n"
  "#    iso3883         Iso3833VehicleType OPTIONAL,\n"
  "#    hpmsType        VehicleType OPTIONAL,  -- HPMS classification types\n"
  "   \n"
  "#    -- ITIS types for classes of vehicle and agency\n"
  "#    vehicleType     ITIS.VehicleGroupAffected OPTIONAL,      \n"
  "#    responseEquip   ITIS.IncidentResponseEquipment OPTIONAL, \n"
  "#    responderType   ITIS.ResponderGroupAffected OPTIONAL,    \n"
  "\n"
  "#    -- Fuel types for vehicles\n"
  "#    fuelType        FuelType OPTIONAL,      \n"
  "\n"
  "#    regional        SEQUENCE (SIZE(1..4)) OF \n"
  "#                    RegionalExtension {{REGION.Reg-VehicleClassification}} OPTIONAL,\n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_KEY_TYPE) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_KEY_TYPE\n"
  "uint16 presence_vector\n"
  "\n"
  "uint16 HAS_KEY_TYPE = 1\n"
  "uint16 HAS_ROLE = 2\n"
  "uint16 HAS_ISO = 4\n"
  "uint16 HAS_HPMS_TYPE = 8\n"
  "uint16 HAS_VEHICLE_TYPE = 16\n"
  "uint16 HAS_RESPONSE_EQUIP = 32\n"
  "uint16 HAS_RESPONDER_TYPE = 64\n"
  "uint16 HAS_FUEL_TYPE = 128\n"
  "\n"
  "j2735_v2x_msgs/BasicVehicleClass key_type\n"
  "\n"
  "j2735_v2x_msgs/BasicVehicleRole role\n"
  "\n"
  "# Iso3833VehicleType ::= INTEGER (0..100) \n"
  "# Refer to ISO3833 for valid values\n"
  "uint8 iso3833\n"
  "uint8 ISO3833_MIN=0\n"
  "uint8 ISO3833_MAX=100\n"
  "\n"
  "j2735_v2x_msgs/VehicleType hpms_type\n"
  "\n"
  "j2735_v2x_msgs/ITISVehicleGroupAffected vehicle_type \n"
  "\n"
  "j2735_v2x_msgs/ITISIncidentResponseEquipment response_equip\n"
  "\n"
  "j2735_v2x_msgs/ITISResponderGroupAffected responder_type\n"
  "\n"
  "j2735_v2x_msgs/FuelType fuel_type\n"
  "\n"
  "# regional #TODO: RegionalExtensions are not yet supported for this message type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VehicleClassification__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VehicleClassification__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1970, 1970},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VehicleClassification__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VehicleClassification__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__BasicVehicleClass__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__BasicVehicleRole__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__FuelType__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__VehicleType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
