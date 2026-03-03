// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_msgs:srv/SetTrafficEvent.idl
// generated code does not contain a copyright notice

#include "carma_msgs/srv/detail/set_traffic_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__srv__SetTrafficEvent__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6d, 0x82, 0x06, 0x66, 0x7e, 0xbb, 0x6c, 0xf2,
      0x4f, 0x39, 0x4f, 0x7f, 0x38, 0x15, 0x44, 0xed,
      0x0a, 0x01, 0x43, 0x61, 0x5b, 0x5e, 0xca, 0xc7,
      0xf1, 0xfa, 0x4b, 0xc6, 0xf4, 0xeb, 0xa7, 0xf0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__srv__SetTrafficEvent_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0x90, 0xaf, 0xf5, 0xd2, 0xa4, 0xd5, 0x4d,
      0x1f, 0x9e, 0x66, 0xff, 0xf4, 0x06, 0x7d, 0x93,
      0xb2, 0x10, 0x05, 0x59, 0xbd, 0xa2, 0x41, 0xaf,
      0x0e, 0x53, 0x17, 0x84, 0xfe, 0x2c, 0x4b, 0xce,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__srv__SetTrafficEvent_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0xbd, 0x02, 0x07, 0x62, 0x57, 0x63, 0xad,
      0x36, 0x47, 0xac, 0x53, 0x57, 0x2e, 0xa3, 0xa8,
      0x24, 0xa7, 0x6e, 0xd8, 0xac, 0xad, 0xab, 0x8d,
      0x04, 0x15, 0x97, 0xff, 0xa4, 0x27, 0xcb, 0xd8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__srv__SetTrafficEvent_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x60, 0xf4, 0xcf, 0x51, 0x09, 0x52, 0x6b,
      0x84, 0xc1, 0x2b, 0x75, 0x02, 0x67, 0xcb, 0x24,
      0x5f, 0x50, 0xc1, 0x11, 0x7f, 0x53, 0xde, 0x8d,
      0xd8, 0x9c, 0xd5, 0x8c, 0x66, 0x8e, 0xda, 0xd4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char carma_msgs__srv__SetTrafficEvent__TYPE_NAME[] = "carma_msgs/srv/SetTrafficEvent";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char carma_msgs__srv__SetTrafficEvent_Event__TYPE_NAME[] = "carma_msgs/srv/SetTrafficEvent_Event";
static char carma_msgs__srv__SetTrafficEvent_Request__TYPE_NAME[] = "carma_msgs/srv/SetTrafficEvent_Request";
static char carma_msgs__srv__SetTrafficEvent_Response__TYPE_NAME[] = "carma_msgs/srv/SetTrafficEvent_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char carma_msgs__srv__SetTrafficEvent__FIELD_NAME__request_message[] = "request_message";
static char carma_msgs__srv__SetTrafficEvent__FIELD_NAME__response_message[] = "response_message";
static char carma_msgs__srv__SetTrafficEvent__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field carma_msgs__srv__SetTrafficEvent__FIELDS[] = {
  {
    {carma_msgs__srv__SetTrafficEvent__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_msgs__srv__SetTrafficEvent_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_msgs__srv__SetTrafficEvent_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_msgs__srv__SetTrafficEvent_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_msgs__srv__SetTrafficEvent__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__srv__SetTrafficEvent__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__srv__SetTrafficEvent__TYPE_NAME, 30, 30},
      {carma_msgs__srv__SetTrafficEvent__FIELDS, 3, 3},
    },
    {carma_msgs__srv__SetTrafficEvent__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = carma_msgs__srv__SetTrafficEvent_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_msgs__srv__SetTrafficEvent_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = carma_msgs__srv__SetTrafficEvent_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_msgs__srv__SetTrafficEvent_Request__FIELD_NAME__up_track[] = "up_track";
static char carma_msgs__srv__SetTrafficEvent_Request__FIELD_NAME__down_track[] = "down_track";
static char carma_msgs__srv__SetTrafficEvent_Request__FIELD_NAME__minimum_gap[] = "minimum_gap";
static char carma_msgs__srv__SetTrafficEvent_Request__FIELD_NAME__advisory_speed[] = "advisory_speed";

static rosidl_runtime_c__type_description__Field carma_msgs__srv__SetTrafficEvent_Request__FIELDS[] = {
  {
    {carma_msgs__srv__SetTrafficEvent_Request__FIELD_NAME__up_track, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent_Request__FIELD_NAME__down_track, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent_Request__FIELD_NAME__minimum_gap, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent_Request__FIELD_NAME__advisory_speed, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__srv__SetTrafficEvent_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__srv__SetTrafficEvent_Request__TYPE_NAME, 38, 38},
      {carma_msgs__srv__SetTrafficEvent_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_msgs__srv__SetTrafficEvent_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field carma_msgs__srv__SetTrafficEvent_Response__FIELDS[] = {
  {
    {carma_msgs__srv__SetTrafficEvent_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__srv__SetTrafficEvent_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__srv__SetTrafficEvent_Response__TYPE_NAME, 39, 39},
      {carma_msgs__srv__SetTrafficEvent_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_msgs__srv__SetTrafficEvent_Event__FIELD_NAME__info[] = "info";
static char carma_msgs__srv__SetTrafficEvent_Event__FIELD_NAME__request[] = "request";
static char carma_msgs__srv__SetTrafficEvent_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field carma_msgs__srv__SetTrafficEvent_Event__FIELDS[] = {
  {
    {carma_msgs__srv__SetTrafficEvent_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_msgs__srv__SetTrafficEvent_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_msgs__srv__SetTrafficEvent_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_msgs__srv__SetTrafficEvent_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__SetTrafficEvent_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__srv__SetTrafficEvent_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__srv__SetTrafficEvent_Event__TYPE_NAME, 36, 36},
      {carma_msgs__srv__SetTrafficEvent_Event__FIELDS, 3, 3},
    },
    {carma_msgs__srv__SetTrafficEvent_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = carma_msgs__srv__SetTrafficEvent_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_msgs__srv__SetTrafficEvent_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# SetTrafficEvent.srv\n"
  "\n"
  "# Request - set the traffic event values\n"
  "\n"
  "# Used by Traffic Incident Node\n"
  "# This should contain the desired parameters of traffic event, not just the ones\n"
  "# intended to be changed\n"
  "\n"
  "# Distance (meters) from the center of the vehicle to the beginning of geofence\n"
  "float64 up_track\n"
  "\n"
  "# Distance (meters) between center of the vehicle to the end of the geofence\n"
  "float64 down_track\n"
  "\n"
  "# Road vehicles minimum following distance (meters)\n"
  "float64 minimum_gap\n"
  "\n"
  "# Recommended speed within geofence (MPH)\n"
  "float64 advisory_speed\n"
  "\n"
  "---\n"
  "\n"
  "# Response\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__srv__SetTrafficEvent__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__srv__SetTrafficEvent__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 566, 566},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__srv__SetTrafficEvent_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__srv__SetTrafficEvent_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__srv__SetTrafficEvent_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__srv__SetTrafficEvent_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__srv__SetTrafficEvent_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__srv__SetTrafficEvent_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__srv__SetTrafficEvent__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__srv__SetTrafficEvent__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_msgs__srv__SetTrafficEvent_Event__get_individual_type_description_source(NULL);
    sources[3] = *carma_msgs__srv__SetTrafficEvent_Request__get_individual_type_description_source(NULL);
    sources[4] = *carma_msgs__srv__SetTrafficEvent_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__srv__SetTrafficEvent_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__srv__SetTrafficEvent_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__srv__SetTrafficEvent_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__srv__SetTrafficEvent_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__srv__SetTrafficEvent_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__srv__SetTrafficEvent_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_msgs__srv__SetTrafficEvent_Request__get_individual_type_description_source(NULL);
    sources[3] = *carma_msgs__srv__SetTrafficEvent_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
