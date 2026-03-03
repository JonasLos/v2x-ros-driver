// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ITISResponderGroupAffected.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0x24, 0x8c, 0xa0, 0xcc, 0xcc, 0x96, 0xe5,
      0xef, 0x4f, 0xd7, 0xed, 0x92, 0x82, 0x00, 0xc4,
      0x18, 0x08, 0xa6, 0xea, 0xad, 0x37, 0x60, 0x18,
      0x12, 0x43, 0xe2, 0x11, 0x87, 0x9a, 0xac, 0xfe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ITISResponderGroupAffected__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISResponderGroupAffected";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ITISResponderGroupAffected__FIELD_NAME__responder_group_affected[] = "responder_group_affected";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ITISResponderGroupAffected__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ITISResponderGroupAffected__FIELD_NAME__responder_group_affected, 24, 24},
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
j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ITISResponderGroupAffected__TYPE_NAME, 45, 45},
      {j2735_v2x_msgs__msg__ITISResponderGroupAffected__FIELDS, 1, 1},
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
  "# ITISResponderGroupAffected.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# ResponderGroupAffected ::= ENUMERATED { \n"
  "#    emergency-vehicle-units           (9729),  -- Default, to be used when one of\n"
  "#                                               -- the below does not fit better\n"
  "#    federal-law-enforcement-units     (9730),  \n"
  "#    state-police-units                (9731),  \n"
  "#    county-police-units               (9732),  -- Hint: also sheriff response units\n"
  "#    local-police-units                (9733),  \n"
  "#    ambulance-units                   (9734),  \n"
  "#    rescue-units                      (9735),  \n"
  "#    fire-units                        (9736),  \n"
  "#    hAZMAT-units                      (9737),  \n"
  "#    light-tow-unit                    (9738),  \n"
  "#    heavy-tow-unit                    (9739),  \n"
  "#    freeway-service-patrols           (9740),  \n"
  "#    transportation-response-units     (9741),  \n"
  "#    private-contractor-response-units (9742),  \n"
  "#    ... -- # LOCAL_CONTENT_ITIS \n"
  "#    }\n"
  "#    -- These groups are used in coordinated response and staging area information\n"
  "#    -- (rather than typically consumer related)\n"
  "\n"
  "uint16 responder_group_affected\n"
  "\n"
  "# Enumeration values for responder_group_affected\n"
  "uint16 EMERGENCY_VEHICLE_UNITS=9729\n"
  "uint16 FEDERAL_LAW_ENFORCEMENT_UNITS=9730\n"
  "uint16 STATE_POLICE_UNITS=9731\n"
  "uint16 LOCAL_POLICE_UNITS=9732\n"
  "uint16 AMBULANCE_UNITS=9734\n"
  "uint16 RESCUE_UNITS=9735\n"
  "uint16 FIRE_UNITS=9736\n"
  "uint16 HAZMAT_UNITS=9737\n"
  "uint16 LIGHT_TOW_UNIT=9738\n"
  "uint16 HEAVY_TOW_UNIT=9739\n"
  "uint16 FREEWAY_SERVICE_PATROLS=9740\n"
  "uint16 TRANSPORTATION_RESPONSE_UNITS=9741\n"
  "uint16 PRIVATE_CONTRACTOR_RESPONSE_UNITS=9742";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ITISResponderGroupAffected__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1624, 1624},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
