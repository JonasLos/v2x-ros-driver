// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PublicSafetyEventResponderWorkerType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/public_safety_event_responder_worker_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_EVENT_RESPONDER_WORKER_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_EVENT_RESPONDER_WORKER_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__UNAVAILABLE = 0
};

/// Constant 'TOW_OPERATOR'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__TOW_OPERATOR = 1
};

/// Constant 'FIRE_EMS_WORKER'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__FIRE_EMS_WORKER = 2
};

/// Constant 'ADOT_WORKER'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__ADOT_WORKER = 3
};

/// Constant 'LAW_ENFORCEMENT'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__LAW_ENFORCEMENT = 4
};

/// Constant 'HAZMAT_RESPONDER'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__HAZMAT_RESPONDER = 5
};

/// Constant 'ANIMAL_CONTROL_WORKER'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__ANIMAL_CONTROL_WORKER = 6
};

/// Constant 'OTHER_PERSONNEL'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__OTHER_PERSONNEL = 7
};

/// Struct defined in msg/PublicSafetyEventResponderWorkerType in the package j2735_v2x_msgs.
/**
  * PublicSafetyEventResponderWorkerType.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PublicSafetyDirectingTrafficSubType from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PublicSafetyEventResponderWorkerType ::= ENUMERATED { 
  *    unavailable               (0),
  *    towOperater               (1),
  *    fireAndEMSWorker          (2),
  *    aDOTWorker                (3),
  *    lawEnforcement            (4),
  *    hazmatResponder           (5), -- also any toxicSubstanceCleanupCrew
  *    animalControlWorker       (6),
  *    otherPersonnel            (7),
  *    ...
  *    }
 */
typedef struct j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType
{
  uint8_t type;
} j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType;

// Struct for a sequence of j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType.
typedef struct j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__Sequence
{
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_EVENT_RESPONDER_WORKER_TYPE__STRUCT_H_
