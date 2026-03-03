// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_driver_msgs:srv/SetLights.idl
// generated code does not contain a copyright notice

#include "carma_driver_msgs/srv/detail/set_lights__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetLights__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0xbd, 0x88, 0x64, 0xdf, 0x90, 0x6c, 0x77,
      0x16, 0xa3, 0xf4, 0x35, 0x32, 0x4f, 0x14, 0xd2,
      0x1a, 0x6e, 0xe9, 0xb4, 0x28, 0xb0, 0x2b, 0x42,
      0xa8, 0x54, 0xa0, 0xf6, 0xad, 0x30, 0x4e, 0xfb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetLights_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0xc3, 0xa7, 0xbe, 0x52, 0x2a, 0x76, 0x5f,
      0xcc, 0x93, 0x28, 0xb0, 0x21, 0x07, 0xad, 0x86,
      0x80, 0x56, 0xb0, 0xbc, 0x3b, 0x77, 0x56, 0x66,
      0xd2, 0x3e, 0xab, 0x9d, 0xe7, 0xc3, 0xf1, 0x82,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetLights_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0x02, 0x4e, 0x61, 0xfb, 0x2e, 0x67, 0x4e,
      0x6b, 0x08, 0xc0, 0x22, 0xfd, 0xe7, 0xc2, 0x61,
      0x2d, 0xc1, 0x52, 0xf7, 0xdb, 0xfd, 0x19, 0x00,
      0x55, 0xae, 0x57, 0xe4, 0xa0, 0xf1, 0x2b, 0xce,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetLights_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x67, 0xe6, 0xce, 0xe7, 0x20, 0x62, 0x8a,
      0xf0, 0x3a, 0x52, 0x31, 0x9e, 0xcb, 0x65, 0x1e,
      0x6d, 0x37, 0x98, 0x79, 0xef, 0xdc, 0x94, 0x9a,
      0x7f, 0x5e, 0xcf, 0x78, 0x66, 0x94, 0x64, 0xa2,
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

static char carma_driver_msgs__srv__SetLights__TYPE_NAME[] = "carma_driver_msgs/srv/SetLights";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char carma_driver_msgs__msg__LightBarStatus__TYPE_NAME[] = "carma_driver_msgs/msg/LightBarStatus";
static char carma_driver_msgs__srv__SetLights_Event__TYPE_NAME[] = "carma_driver_msgs/srv/SetLights_Event";
static char carma_driver_msgs__srv__SetLights_Request__TYPE_NAME[] = "carma_driver_msgs/srv/SetLights_Request";
static char carma_driver_msgs__srv__SetLights_Response__TYPE_NAME[] = "carma_driver_msgs/srv/SetLights_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char carma_driver_msgs__srv__SetLights__FIELD_NAME__request_message[] = "request_message";
static char carma_driver_msgs__srv__SetLights__FIELD_NAME__response_message[] = "response_message";
static char carma_driver_msgs__srv__SetLights__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__SetLights__FIELDS[] = {
  {
    {carma_driver_msgs__srv__SetLights__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__SetLights_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetLights__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__SetLights_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetLights__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__SetLights_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__SetLights__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetLights_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetLights_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetLights_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__SetLights__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__SetLights__TYPE_NAME, 31, 31},
      {carma_driver_msgs__srv__SetLights__FIELDS, 3, 3},
    },
    {carma_driver_msgs__srv__SetLights__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&carma_driver_msgs__msg__LightBarStatus__EXPECTED_HASH, carma_driver_msgs__msg__LightBarStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = carma_driver_msgs__msg__LightBarStatus__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_driver_msgs__srv__SetLights_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = carma_driver_msgs__srv__SetLights_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = carma_driver_msgs__srv__SetLights_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__SetLights_Request__FIELD_NAME__set_state[] = "set_state";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__SetLights_Request__FIELDS[] = {
  {
    {carma_driver_msgs__srv__SetLights_Request__FIELD_NAME__set_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__msg__LightBarStatus__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__SetLights_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {carma_driver_msgs__msg__LightBarStatus__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__SetLights_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__SetLights_Request__TYPE_NAME, 39, 39},
      {carma_driver_msgs__srv__SetLights_Request__FIELDS, 1, 1},
    },
    {carma_driver_msgs__srv__SetLights_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&carma_driver_msgs__msg__LightBarStatus__EXPECTED_HASH, carma_driver_msgs__msg__LightBarStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = carma_driver_msgs__msg__LightBarStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__SetLights_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__SetLights_Response__FIELDS[] = {
  {
    {carma_driver_msgs__srv__SetLights_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
carma_driver_msgs__srv__SetLights_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__SetLights_Response__TYPE_NAME, 40, 40},
      {carma_driver_msgs__srv__SetLights_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__SetLights_Event__FIELD_NAME__info[] = "info";
static char carma_driver_msgs__srv__SetLights_Event__FIELD_NAME__request[] = "request";
static char carma_driver_msgs__srv__SetLights_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__SetLights_Event__FIELDS[] = {
  {
    {carma_driver_msgs__srv__SetLights_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetLights_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_driver_msgs__srv__SetLights_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetLights_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_driver_msgs__srv__SetLights_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__SetLights_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetLights_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetLights_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__SetLights_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__SetLights_Event__TYPE_NAME, 37, 37},
      {carma_driver_msgs__srv__SetLights_Event__FIELDS, 3, 3},
    },
    {carma_driver_msgs__srv__SetLights_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&carma_driver_msgs__msg__LightBarStatus__EXPECTED_HASH, carma_driver_msgs__msg__LightBarStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = carma_driver_msgs__msg__LightBarStatus__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_driver_msgs__srv__SetLights_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = carma_driver_msgs__srv__SetLights_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# SetLights.srv\n"
  "\n"
  "# Request - set the light values\n"
  "\n"
  "# Used by lighbar driver\n"
  "# This should contain the desired state of all lights, not just the ones\n"
  "# intended to be changed\n"
  "carma_driver_msgs/LightBarStatus set_state\n"
  "\n"
  "---\n"
  "\n"
  "# Response - no Response";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetLights__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__SetLights__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 247, 247},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetLights_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__SetLights_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetLights_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__SetLights_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetLights_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__SetLights_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetLights__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__SetLights__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_driver_msgs__msg__LightBarStatus__get_individual_type_description_source(NULL);
    sources[3] = *carma_driver_msgs__srv__SetLights_Event__get_individual_type_description_source(NULL);
    sources[4] = *carma_driver_msgs__srv__SetLights_Request__get_individual_type_description_source(NULL);
    sources[5] = *carma_driver_msgs__srv__SetLights_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetLights_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__SetLights_Request__get_individual_type_description_source(NULL),
    sources[1] = *carma_driver_msgs__msg__LightBarStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetLights_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__SetLights_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetLights_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__SetLights_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_driver_msgs__msg__LightBarStatus__get_individual_type_description_source(NULL);
    sources[3] = *carma_driver_msgs__srv__SetLights_Request__get_individual_type_description_source(NULL);
    sources[4] = *carma_driver_msgs__srv__SetLights_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
