// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_driver_msgs:srv/GetLights.idl
// generated code does not contain a copyright notice

#include "carma_driver_msgs/srv/detail/get_lights__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetLights__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7f, 0x81, 0x3d, 0x96, 0x2a, 0x39, 0xfe, 0xf5,
      0x80, 0xd4, 0xd6, 0x3e, 0xad, 0xaf, 0x6e, 0x6a,
      0xb1, 0xce, 0xc0, 0x9a, 0x1a, 0x4a, 0xda, 0xc3,
      0xc7, 0xea, 0xef, 0xbd, 0x6a, 0xe9, 0xe6, 0x27,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetLights_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0xdc, 0xfc, 0xf8, 0x0d, 0xa0, 0x17, 0x61,
      0x78, 0x4b, 0x56, 0xf0, 0x12, 0xd9, 0xe5, 0x01,
      0x9b, 0xce, 0x67, 0x0c, 0x9f, 0x76, 0x3a, 0xad,
      0x9c, 0x2c, 0xe6, 0xcb, 0xdf, 0x2f, 0x58, 0x46,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetLights_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x5d, 0x59, 0xf1, 0xe4, 0xcb, 0xbe, 0x77,
      0xef, 0x41, 0xc6, 0xb4, 0x40, 0xff, 0x16, 0xbf,
      0x5e, 0xb0, 0x2a, 0x8c, 0x97, 0x7f, 0xdf, 0x15,
      0x0b, 0x00, 0xe9, 0xd4, 0x7a, 0x51, 0xf3, 0x05,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetLights_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0xb0, 0x88, 0xb9, 0xfe, 0x98, 0x07, 0x5e,
      0xd8, 0x66, 0xaa, 0x69, 0x03, 0x7d, 0x0e, 0xef,
      0x9f, 0xb2, 0xc7, 0xcf, 0x5f, 0x99, 0xcc, 0xb5,
      0x58, 0xde, 0x87, 0x59, 0x60, 0x43, 0x50, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "carma_driver_msgs/msg/detail/light_bar_status__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t carma_driver_msgs__msg__LightBarStatus__EXPECTED_HASH = {1, {
    0xfe, 0x73, 0x38, 0x11, 0x0a, 0xb1, 0xb2, 0x7b,
    0x7d, 0x6e, 0xf3, 0xea, 0xb2, 0x3d, 0x95, 0x70,
    0x13, 0xf3, 0x20, 0xd7, 0xbe, 0x6e, 0xd7, 0xce,
    0x3d, 0x66, 0xb1, 0xd9, 0x8d, 0xdd, 0x90, 0xfd,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char carma_driver_msgs__srv__GetLights__TYPE_NAME[] = "carma_driver_msgs/srv/GetLights";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char carma_driver_msgs__msg__LightBarStatus__TYPE_NAME[] = "carma_driver_msgs/msg/LightBarStatus";
static char carma_driver_msgs__srv__GetLights_Event__TYPE_NAME[] = "carma_driver_msgs/srv/GetLights_Event";
static char carma_driver_msgs__srv__GetLights_Request__TYPE_NAME[] = "carma_driver_msgs/srv/GetLights_Request";
static char carma_driver_msgs__srv__GetLights_Response__TYPE_NAME[] = "carma_driver_msgs/srv/GetLights_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetLights__FIELD_NAME__request_message[] = "request_message";
static char carma_driver_msgs__srv__GetLights__FIELD_NAME__response_message[] = "response_message";
static char carma_driver_msgs__srv__GetLights__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetLights__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetLights__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__GetLights_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetLights__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__GetLights_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetLights__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__GetLights_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__GetLights__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetLights_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetLights_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetLights_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__GetLights__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetLights__TYPE_NAME, 31, 31},
      {carma_driver_msgs__srv__GetLights__FIELDS, 3, 3},
    },
    {carma_driver_msgs__srv__GetLights__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&carma_driver_msgs__msg__LightBarStatus__EXPECTED_HASH, carma_driver_msgs__msg__LightBarStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = carma_driver_msgs__msg__LightBarStatus__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_driver_msgs__srv__GetLights_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = carma_driver_msgs__srv__GetLights_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = carma_driver_msgs__srv__GetLights_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetLights_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetLights_Request__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetLights_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
carma_driver_msgs__srv__GetLights_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetLights_Request__TYPE_NAME, 39, 39},
      {carma_driver_msgs__srv__GetLights_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetLights_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetLights_Response__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetLights_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__msg__LightBarStatus__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__GetLights_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {carma_driver_msgs__msg__LightBarStatus__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__GetLights_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetLights_Response__TYPE_NAME, 40, 40},
      {carma_driver_msgs__srv__GetLights_Response__FIELDS, 1, 1},
    },
    {carma_driver_msgs__srv__GetLights_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&carma_driver_msgs__msg__LightBarStatus__EXPECTED_HASH, carma_driver_msgs__msg__LightBarStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = carma_driver_msgs__msg__LightBarStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetLights_Event__FIELD_NAME__info[] = "info";
static char carma_driver_msgs__srv__GetLights_Event__FIELD_NAME__request[] = "request";
static char carma_driver_msgs__srv__GetLights_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetLights_Event__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetLights_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetLights_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_driver_msgs__srv__GetLights_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetLights_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_driver_msgs__srv__GetLights_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__GetLights_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetLights_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetLights_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__GetLights_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetLights_Event__TYPE_NAME, 37, 37},
      {carma_driver_msgs__srv__GetLights_Event__FIELDS, 3, 3},
    },
    {carma_driver_msgs__srv__GetLights_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&carma_driver_msgs__msg__LightBarStatus__EXPECTED_HASH, carma_driver_msgs__msg__LightBarStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = carma_driver_msgs__msg__LightBarStatus__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_driver_msgs__srv__GetLights_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = carma_driver_msgs__srv__GetLights_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# GetLights.srv\n"
  "\n"
  "# Request - no arguments\n"
  "\n"
  "---\n"
  "\n"
  "carma_driver_msgs/LightBarStatus status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetLights__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetLights__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 87, 87},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetLights_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetLights_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetLights_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetLights_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetLights_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetLights_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetLights__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetLights__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_driver_msgs__msg__LightBarStatus__get_individual_type_description_source(NULL);
    sources[3] = *carma_driver_msgs__srv__GetLights_Event__get_individual_type_description_source(NULL);
    sources[4] = *carma_driver_msgs__srv__GetLights_Request__get_individual_type_description_source(NULL);
    sources[5] = *carma_driver_msgs__srv__GetLights_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetLights_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetLights_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetLights_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetLights_Response__get_individual_type_description_source(NULL),
    sources[1] = *carma_driver_msgs__msg__LightBarStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetLights_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetLights_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_driver_msgs__msg__LightBarStatus__get_individual_type_description_source(NULL);
    sources[3] = *carma_driver_msgs__srv__GetLights_Request__get_individual_type_description_source(NULL);
    sources[4] = *carma_driver_msgs__srv__GetLights_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
