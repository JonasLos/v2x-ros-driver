// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PSM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/psm.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PSM__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PSM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_ACCEL_SET'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_ACCEL_SET = 1ul
};

/// Constant 'HAS_PATH_HISTORY'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_PATH_HISTORY = 2ul
};

/// Constant 'HAS_PATH_PREDICTION'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_PATH_PREDICTION = 4ul
};

/// Constant 'HAS_PROPULSION'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_PROPULSION = 8ul
};

/// Constant 'HAS_USE_STATE'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_USE_STATE = 16ul
};

/// Constant 'HAS_CROSS_REQUEST'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_CROSS_REQUEST = 32ul
};

/// Constant 'HAS_CROSS_STATE'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_CROSS_STATE = 64ul
};

/// Constant 'HAS_CLUSTER_SIZE'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_CLUSTER_SIZE = 128ul
};

/// Constant 'HAS_CLUSTER_RADIUS'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_CLUSTER_RADIUS = 256ul
};

/// Constant 'HAS_EVENT_RESPONDER_TYPE'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_EVENT_RESPONDER_TYPE = 512ul
};

/// Constant 'HAS_ACTIVITY_TYPE'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_ACTIVITY_TYPE = 1024ul
};

/// Constant 'HAS_ACTIVITY_SUB_TYPE'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_ACTIVITY_SUB_TYPE = 2048ul
};

/// Constant 'HAS_ASSIST_TYPE'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_ASSIST_TYPE = 4096ul
};

/// Constant 'HAS_SIZING'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_SIZING = 8192ul
};

/// Constant 'HAS_ATTACHMENT'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_ATTACHMENT = 16384ul
};

/// Constant 'HAS_ATTACHMENT_RADIUS'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_ATTACHMENT_RADIUS = 32768ul
};

/// Constant 'HAS_ANIMAL_TYPE'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_ANIMAL_TYPE = 65536ul
};

/// Constant 'HAS_REGIONAL_EXTENSION'.
enum
{
  j2735_v2x_msgs__msg__PSM__HAS_REGIONAL_EXTENSION = 131072ul
};

// Include directives for member types
// Member 'basic_type'
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__struct.h"
// Member 'sec_mark'
#include "j2735_v2x_msgs/msg/detail/d_second__struct.h"
// Member 'msg_cnt'
#include "j2735_v2x_msgs/msg/detail/msg_count__struct.h"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/temporary_id__struct.h"
// Member 'position'
#include "j2735_v2x_msgs/msg/detail/position3_d__struct.h"
// Member 'accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__struct.h"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/velocity__struct.h"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading__struct.h"
// Member 'accel_set'
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__struct.h"
// Member 'path_history'
#include "j2735_v2x_msgs/msg/detail/path_history__struct.h"
// Member 'path_prediction'
#include "j2735_v2x_msgs/msg/detail/path_prediction__struct.h"
// Member 'propulsion'
#include "j2735_v2x_msgs/msg/detail/propelled_information__struct.h"
// Member 'use_state'
#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__struct.h"
// Member 'cross_request'
#include "j2735_v2x_msgs/msg/detail/personal_crossing_request__struct.h"
// Member 'cross_state'
#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__struct.h"
// Member 'cluster_size'
#include "j2735_v2x_msgs/msg/detail/number_of_participants_in_cluster__struct.h"
// Member 'cluster_radius'
#include "j2735_v2x_msgs/msg/detail/personal_cluster_radius__struct.h"
// Member 'event_responder_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_event_responder_worker_type__struct.h"
// Member 'activity_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_and_road_worker_activity__struct.h"
// Member 'activity_sub_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__struct.h"
// Member 'assist_type'
#include "j2735_v2x_msgs/msg/detail/personal_assistive__struct.h"
// Member 'sizing'
#include "j2735_v2x_msgs/msg/detail/user_size_and_behaviour__struct.h"
// Member 'attachment'
#include "j2735_v2x_msgs/msg/detail/attachment__struct.h"
// Member 'attachment_radius'
#include "j2735_v2x_msgs/msg/detail/attachment_radius__struct.h"
// Member 'animal_type'
#include "j2735_v2x_msgs/msg/detail/animal_type__struct.h"

/// Struct defined in msg/PSM in the package j2735_v2x_msgs.
/**
  * PSM.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of Personal Safety Message (PSM) from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
 */
typedef struct j2735_v2x_msgs__msg__PSM
{
  /// A BIT STRING defining the presence of optional feilds.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_PATH_HISTORY) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_PATH_HISTORY
  uint32_t presence_vector;
  j2735_v2x_msgs__msg__PersonalDeviceUserType basic_type;
  j2735_v2x_msgs__msg__DSecond sec_mark;
  j2735_v2x_msgs__msg__MsgCount msg_cnt;
  j2735_v2x_msgs__msg__TemporaryID id;
  j2735_v2x_msgs__msg__Position3D position;
  j2735_v2x_msgs__msg__PositionalAccuracy accuracy;
  j2735_v2x_msgs__msg__Velocity speed;
  j2735_v2x_msgs__msg__Heading heading;
  /// OPTIONAL FIELDS
  /// All fields below this section are optional.
  /// The presence of a given field can be idenfied by checking the precense_vector
  j2735_v2x_msgs__msg__AccelerationSet4Way accel_set;
  j2735_v2x_msgs__msg__PathHistory path_history;
  j2735_v2x_msgs__msg__PathPrediction path_prediction;
  j2735_v2x_msgs__msg__PropelledInformation propulsion;
  j2735_v2x_msgs__msg__PersonalDeviceUsageState use_state;
  j2735_v2x_msgs__msg__PersonalCrossingRequest cross_request;
  j2735_v2x_msgs__msg__PersonalCrossingInProgress cross_state;
  j2735_v2x_msgs__msg__NumberOfParticipantsInCluster cluster_size;
  j2735_v2x_msgs__msg__PersonalClusterRadius cluster_radius;
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType event_responder_type;
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity activity_type;
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType activity_sub_type;
  j2735_v2x_msgs__msg__PersonalAssistive assist_type;
  j2735_v2x_msgs__msg__UserSizeAndBehaviour sizing;
  j2735_v2x_msgs__msg__Attachment attachment;
  j2735_v2x_msgs__msg__AttachmentRadius attachment_radius;
  j2735_v2x_msgs__msg__AnimalType animal_type;
} j2735_v2x_msgs__msg__PSM;

// Struct for a sequence of j2735_v2x_msgs__msg__PSM.
typedef struct j2735_v2x_msgs__msg__PSM__Sequence
{
  j2735_v2x_msgs__msg__PSM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PSM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PSM__STRUCT_H_
