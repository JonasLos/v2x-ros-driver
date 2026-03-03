// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlDetail.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrafficControlDetail__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0xb7, 0xa1, 0x04, 0xaf, 0xab, 0xbc, 0x58,
      0x49, 0x25, 0xbc, 0x7c, 0x84, 0x98, 0x25, 0x40,
      0x0a, 0xaf, 0x3a, 0xb5, 0x49, 0xaa, 0x2d, 0x0a,
      0xa7, 0x71, 0xb3, 0x5d, 0xbf, 0xbd, 0x5e, 0x97,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__TrafficControlDetail__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlDetail";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__choice[] = "choice";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__signal[] = "signal";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__closed[] = "closed";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__chains[] = "chains";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__direction[] = "direction";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__lataffinity[] = "lataffinity";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__latperm[] = "latperm";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__parking[] = "parking";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__minspeed[] = "minspeed";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxspeed[] = "maxspeed";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__minhdwy[] = "minhdwy";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxvehmass[] = "maxvehmass";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxvehheight[] = "maxvehheight";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxvehwidth[] = "maxvehwidth";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxvehlength[] = "maxvehlength";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxvehaxles[] = "maxvehaxles";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__minvehocc[] = "minvehocc";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxplatoonsize[] = "maxplatoonsize";
static char j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__minplatoonhdwy[] = "minplatoonhdwy";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrafficControlDetail__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__choice, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__signal, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__closed, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__chains, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__direction, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__lataffinity, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__latperm, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__parking, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__minspeed, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxspeed, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__minhdwy, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxvehmass, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxvehheight, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxvehwidth, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxvehlength, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxvehaxles, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__minvehocc, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__maxplatoonsize, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__FIELD_NAME__minplatoonhdwy, 14, 14},
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
j2735_v2x_msgs__msg__TrafficControlDetail__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrafficControlDetail__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__TrafficControlDetail__FIELDS, 19, 19},
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
  "# TrafficControlDetail.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# ...\n"
  "\n"
  "#TrafficControlDetail ::= CHOICE\n"
  "#{\n"
  "#\\tsignal OCTET STRING SIZE(0..63),\n"
  "#\\tstop NULL,\n"
  "#\\tyield NULL,\n"
  "#\\tnotowing NULL,\n"
  "#\\trestricted NULL,\n"
  "#\\tclosed ENUMERATED {open, closed, taperleft, taperright, openleft, openright},\n"
  "#\\tchains ENUMERATED {no, permitted, required},\n"
  "#\\tdirection ENUMERATED {forward, reverse},\n"
  "#\\tlataffinity ENUMERATED {left, right},\n"
  "#\\tlatperm SEQUENCE (SIZE(2)) OF ENUMERATED {none, permitted, passing-only, emergency-only},\n"
  "#\\tparking ENUMERATED {no, parallel, angled},\n"
  "#\\tminspeed INTEGER (0..1023), -- tenths of m/s\n"
  "#\\tmaxspeed INTEGER (0..1023), -- tenths of m/s\n"
  "#\\tminhdwy INTEGER (0..2047), -- tenths of meters\n"
  "#\\tmaxvehmass INTEGER (0..65535), -- kg\n"
  "#\\tmaxvehheight INTEGER (0..127), -- tenths of meters\n"
  "#\\tmaxvehwidth INTEGER (0..127), -- tenths of meters\n"
  "#\\tmaxvehlength INTEGER (0..1023), -- tenths of meters\n"
  "#\\tmaxvehaxles INTEGER (2..15), -- number of axles\n"
  "#\\tminvehocc INTEGER (1..15), -- vehicle passenger count\n"
  "#   maxplatoonsize INTEGER (1..63), -- vehicle count\n"
  "#   minplatoonhdwy INTEGER (0..2047), -- tenths of meters\n"
  "#\\t...\n"
  "#}\n"
  "\n"
  "\n"
  "uint8 choice\n"
  "\n"
  "# enumeration values for choice:\n"
  "\n"
  "uint8 SIGNAL_CHOICE =0\n"
  "uint8 STOP_CHOICE =1\n"
  "uint8 YIELD_CHOICE =2\n"
  "uint8 NOTOWING_CHOICE =3\n"
  "uint8 RESTRICTED_CHOICE =4\n"
  "uint8 CLOSED_CHOICE =5\n"
  "uint8 CHAINS_CHOICE =6\n"
  "uint8 DIRECTION_CHOICE =7\n"
  "uint8 LATAFFINITY_CHOICE =8\n"
  "uint8 LATPERM_CHOICE =9\n"
  "uint8 PARKING_CHOICE =10\n"
  "uint8 MINSPEED_CHOICE =11\n"
  "uint8 MAXSPEED_CHOICE =12\n"
  "uint8 MINHDWY_CHOICE =13\n"
  "uint8 MAXVEHMASS_CHOICE =14\n"
  "uint8 MAXVEHHEIGHT_CHOICE =15\n"
  "uint8 MAXVEHWIDTH_CHOICE =16\n"
  "uint8 MAXVEHLENGTH_CHOICE =17\n"
  "uint8 MAXVEHAXLES_CHOICE =18\n"
  "uint8 MINVEHOCC_CHOICE =19\n"
  "uint8 MAXPLATOONSIZE_CHOICE =20\n"
  "uint8 MINPLATOONHDWY_CHOICE =21\n"
  "\n"
  "# signal ::= OCTET STRING SIZE(0..63)\n"
  "uint8[] signal\n"
  "\n"
  "#closed ENUMERATED {open, closed, taperleft, taperright, openleft, openright}\n"
  "\n"
  "uint8 closed\n"
  "\n"
  "# enumeration values for closed:\n"
  "\n"
  "uint8 OPEN=0\n"
  "\n"
  "uint8 CLOSED=1\n"
  "\n"
  "uint8 TAPERLEFT=2\n"
  "\n"
  "uint8 TAPERRIGHT=3\n"
  "\n"
  "uint8 OPENLEFT=4\n"
  "\n"
  "uint8 OPENRIGHT=5\n"
  "\n"
  "#chains ENUMERATED {no, permitted, required}\n"
  "\n"
  "uint8 chains\n"
  "\n"
  "# enumeration values for chains:\n"
  "\n"
  "uint8 NO=0\n"
  "\n"
  "uint8 PERMITTED=1\n"
  "\n"
  "uint8 REQUIRED=2\n"
  "\n"
  "\n"
  "#direction ENUMERATED {forward, reverse}\n"
  "\n"
  "uint8 direction\n"
  "\n"
  "# enumeration values for direction:\n"
  "\n"
  "uint8 FORWARD=0\n"
  "\n"
  "uint8 REVERSE=1\n"
  "\n"
  "#lataffinity ENUMERATED {left, right}\n"
  "\n"
  "uint8 lataffinity\n"
  "\n"
  "# enumeration values for lataffinity:\n"
  "\n"
  "uint8 LEFT=0\n"
  "\n"
  "uint8 RIGHT=1\n"
  "\n"
  "#latperm SEQUENCE (SIZE(2)) OF ENUMERATED {none, permitted, passing-only, emergency-only}\n"
  "\n"
  "uint8[2] latperm\n"
  "\n"
  "# enumeration values for latperm:\n"
  "\n"
  "uint8 NONE=0\n"
  "\n"
  "# uint8 PERMITTED=1 redeclaration\n"
  "\n"
  "uint8 PASSINGONLY=2\n"
  "\n"
  "uint8 EMERGENCYONLY=3\n"
  "\n"
  "#parking ENUMERATED {no, parallel, angled}\n"
  "\n"
  "uint8 parking\n"
  "\n"
  "# enumeration values for parking:\n"
  "\n"
  "# uint8 NO=0 redeclaration\n"
  "\n"
  "uint8 PARALLEL=1\n"
  "\n"
  "uint8 ANGLED=2\n"
  "\n"
  "#minspeed ::= INTEGER (0..1023), -- tenths of m/s\n"
  "uint16 minspeed\n"
  "\n"
  "#maxspeed ::= INTEGER (0..1023), -- tenths of m/s\n"
  "uint16 maxspeed\n"
  "\n"
  "#minhdwy ::= INTEGER (0..2047), -- tenths of meters\n"
  "uint16 minhdwy\n"
  "\n"
  "#maxvehmass ::= INTEGER (0..65535), -- kg\n"
  "uint16 maxvehmass\n"
  "\n"
  "#maxvehheight ::= INTEGER (0..127), -- tenths of meters\n"
  "uint8 maxvehheight\n"
  "\n"
  "#maxvehwidth ::= INTEGER (0..127), -- tenths of meters\n"
  "uint8 maxvehwidth\n"
  "\n"
  "#maxvehlength ::= INTEGER (0..1023), -- tenths of meters\n"
  "uint16 maxvehlength\n"
  "\n"
  "#maxvehaxles ::= INTEGER (2..15), -- number of axles\n"
  "uint8 maxvehaxles\n"
  "\n"
  "#minvehocc ::= INTEGER (1..15), -- vehicle passenger count\n"
  "uint8 minvehocc\n"
  "\n"
  "#maxplatoonsize ::= INTEGER (1..63), -- vehicle count\n"
  "uint8 maxplatoonsize\n"
  "\n"
  "#minplatoonhdwy ::= INTEGER (0..2047), -- tenths of meters\n"
  "uint16 minplatoonhdwy";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrafficControlDetail__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrafficControlDetail__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3755, 3755},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrafficControlDetail__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrafficControlDetail__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
