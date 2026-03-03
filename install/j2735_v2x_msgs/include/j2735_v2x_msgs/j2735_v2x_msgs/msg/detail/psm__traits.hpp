// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PSM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/psm.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PSM__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PSM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/psm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'basic_type'
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__traits.hpp"
// Member 'sec_mark'
#include "j2735_v2x_msgs/msg/detail/d_second__traits.hpp"
// Member 'msg_cnt'
#include "j2735_v2x_msgs/msg/detail/msg_count__traits.hpp"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/temporary_id__traits.hpp"
// Member 'position'
#include "j2735_v2x_msgs/msg/detail/position3_d__traits.hpp"
// Member 'accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__traits.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/velocity__traits.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading__traits.hpp"
// Member 'accel_set'
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__traits.hpp"
// Member 'path_history'
#include "j2735_v2x_msgs/msg/detail/path_history__traits.hpp"
// Member 'path_prediction'
#include "j2735_v2x_msgs/msg/detail/path_prediction__traits.hpp"
// Member 'propulsion'
#include "j2735_v2x_msgs/msg/detail/propelled_information__traits.hpp"
// Member 'use_state'
#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__traits.hpp"
// Member 'cross_request'
#include "j2735_v2x_msgs/msg/detail/personal_crossing_request__traits.hpp"
// Member 'cross_state'
#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__traits.hpp"
// Member 'cluster_size'
#include "j2735_v2x_msgs/msg/detail/number_of_participants_in_cluster__traits.hpp"
// Member 'cluster_radius'
#include "j2735_v2x_msgs/msg/detail/personal_cluster_radius__traits.hpp"
// Member 'event_responder_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_event_responder_worker_type__traits.hpp"
// Member 'activity_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_and_road_worker_activity__traits.hpp"
// Member 'activity_sub_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__traits.hpp"
// Member 'assist_type'
#include "j2735_v2x_msgs/msg/detail/personal_assistive__traits.hpp"
// Member 'sizing'
#include "j2735_v2x_msgs/msg/detail/user_size_and_behaviour__traits.hpp"
// Member 'attachment'
#include "j2735_v2x_msgs/msg/detail/attachment__traits.hpp"
// Member 'attachment_radius'
#include "j2735_v2x_msgs/msg/detail/attachment_radius__traits.hpp"
// Member 'animal_type'
#include "j2735_v2x_msgs/msg/detail/animal_type__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PSM & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: basic_type
  {
    out << "basic_type: ";
    to_flow_style_yaml(msg.basic_type, out);
    out << ", ";
  }

  // member: sec_mark
  {
    out << "sec_mark: ";
    to_flow_style_yaml(msg.sec_mark, out);
    out << ", ";
  }

  // member: msg_cnt
  {
    out << "msg_cnt: ";
    to_flow_style_yaml(msg.msg_cnt, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: accuracy
  {
    out << "accuracy: ";
    to_flow_style_yaml(msg.accuracy, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    to_flow_style_yaml(msg.speed, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    to_flow_style_yaml(msg.heading, out);
    out << ", ";
  }

  // member: accel_set
  {
    out << "accel_set: ";
    to_flow_style_yaml(msg.accel_set, out);
    out << ", ";
  }

  // member: path_history
  {
    out << "path_history: ";
    to_flow_style_yaml(msg.path_history, out);
    out << ", ";
  }

  // member: path_prediction
  {
    out << "path_prediction: ";
    to_flow_style_yaml(msg.path_prediction, out);
    out << ", ";
  }

  // member: propulsion
  {
    out << "propulsion: ";
    to_flow_style_yaml(msg.propulsion, out);
    out << ", ";
  }

  // member: use_state
  {
    out << "use_state: ";
    to_flow_style_yaml(msg.use_state, out);
    out << ", ";
  }

  // member: cross_request
  {
    out << "cross_request: ";
    to_flow_style_yaml(msg.cross_request, out);
    out << ", ";
  }

  // member: cross_state
  {
    out << "cross_state: ";
    to_flow_style_yaml(msg.cross_state, out);
    out << ", ";
  }

  // member: cluster_size
  {
    out << "cluster_size: ";
    to_flow_style_yaml(msg.cluster_size, out);
    out << ", ";
  }

  // member: cluster_radius
  {
    out << "cluster_radius: ";
    to_flow_style_yaml(msg.cluster_radius, out);
    out << ", ";
  }

  // member: event_responder_type
  {
    out << "event_responder_type: ";
    to_flow_style_yaml(msg.event_responder_type, out);
    out << ", ";
  }

  // member: activity_type
  {
    out << "activity_type: ";
    to_flow_style_yaml(msg.activity_type, out);
    out << ", ";
  }

  // member: activity_sub_type
  {
    out << "activity_sub_type: ";
    to_flow_style_yaml(msg.activity_sub_type, out);
    out << ", ";
  }

  // member: assist_type
  {
    out << "assist_type: ";
    to_flow_style_yaml(msg.assist_type, out);
    out << ", ";
  }

  // member: sizing
  {
    out << "sizing: ";
    to_flow_style_yaml(msg.sizing, out);
    out << ", ";
  }

  // member: attachment
  {
    out << "attachment: ";
    to_flow_style_yaml(msg.attachment, out);
    out << ", ";
  }

  // member: attachment_radius
  {
    out << "attachment_radius: ";
    to_flow_style_yaml(msg.attachment_radius, out);
    out << ", ";
  }

  // member: animal_type
  {
    out << "animal_type: ";
    to_flow_style_yaml(msg.animal_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PSM & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: presence_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << "\n";
  }

  // member: basic_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basic_type:\n";
    to_block_style_yaml(msg.basic_type, out, indentation + 2);
  }

  // member: sec_mark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sec_mark:\n";
    to_block_style_yaml(msg.sec_mark, out, indentation + 2);
  }

  // member: msg_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_cnt:\n";
    to_block_style_yaml(msg.msg_cnt, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy:\n";
    to_block_style_yaml(msg.accuracy, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed:\n";
    to_block_style_yaml(msg.speed, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading:\n";
    to_block_style_yaml(msg.heading, out, indentation + 2);
  }

  // member: accel_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_set:\n";
    to_block_style_yaml(msg.accel_set, out, indentation + 2);
  }

  // member: path_history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_history:\n";
    to_block_style_yaml(msg.path_history, out, indentation + 2);
  }

  // member: path_prediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_prediction:\n";
    to_block_style_yaml(msg.path_prediction, out, indentation + 2);
  }

  // member: propulsion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "propulsion:\n";
    to_block_style_yaml(msg.propulsion, out, indentation + 2);
  }

  // member: use_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_state:\n";
    to_block_style_yaml(msg.use_state, out, indentation + 2);
  }

  // member: cross_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross_request:\n";
    to_block_style_yaml(msg.cross_request, out, indentation + 2);
  }

  // member: cross_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross_state:\n";
    to_block_style_yaml(msg.cross_state, out, indentation + 2);
  }

  // member: cluster_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_size:\n";
    to_block_style_yaml(msg.cluster_size, out, indentation + 2);
  }

  // member: cluster_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_radius:\n";
    to_block_style_yaml(msg.cluster_radius, out, indentation + 2);
  }

  // member: event_responder_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_responder_type:\n";
    to_block_style_yaml(msg.event_responder_type, out, indentation + 2);
  }

  // member: activity_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activity_type:\n";
    to_block_style_yaml(msg.activity_type, out, indentation + 2);
  }

  // member: activity_sub_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activity_sub_type:\n";
    to_block_style_yaml(msg.activity_sub_type, out, indentation + 2);
  }

  // member: assist_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assist_type:\n";
    to_block_style_yaml(msg.assist_type, out, indentation + 2);
  }

  // member: sizing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sizing:\n";
    to_block_style_yaml(msg.sizing, out, indentation + 2);
  }

  // member: attachment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attachment:\n";
    to_block_style_yaml(msg.attachment, out, indentation + 2);
  }

  // member: attachment_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attachment_radius:\n";
    to_block_style_yaml(msg.attachment_radius, out, indentation + 2);
  }

  // member: animal_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "animal_type:\n";
    to_block_style_yaml(msg.animal_type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PSM & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace j2735_v2x_msgs

namespace rosidl_generator_traits
{

[[deprecated("use j2735_v2x_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const j2735_v2x_msgs::msg::PSM & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::PSM & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PSM>()
{
  return "j2735_v2x_msgs::msg::PSM";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PSM>()
{
  return "j2735_v2x_msgs/msg/PSM";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PSM>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AccelerationSet4Way>::value && has_fixed_size<j2735_v2x_msgs::msg::AnimalType>::value && has_fixed_size<j2735_v2x_msgs::msg::Attachment>::value && has_fixed_size<j2735_v2x_msgs::msg::AttachmentRadius>::value && has_fixed_size<j2735_v2x_msgs::msg::DSecond>::value && has_fixed_size<j2735_v2x_msgs::msg::Heading>::value && has_fixed_size<j2735_v2x_msgs::msg::MsgCount>::value && has_fixed_size<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster>::value && has_fixed_size<j2735_v2x_msgs::msg::PathHistory>::value && has_fixed_size<j2735_v2x_msgs::msg::PathPrediction>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalAssistive>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalClusterRadius>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalCrossingInProgress>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalCrossingRequest>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalDeviceUsageState>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalDeviceUserType>::value && has_fixed_size<j2735_v2x_msgs::msg::Position3D>::value && has_fixed_size<j2735_v2x_msgs::msg::PositionalAccuracy>::value && has_fixed_size<j2735_v2x_msgs::msg::PropelledInformation>::value && has_fixed_size<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity>::value && has_fixed_size<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType>::value && has_fixed_size<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType>::value && has_fixed_size<j2735_v2x_msgs::msg::TemporaryID>::value && has_fixed_size<j2735_v2x_msgs::msg::UserSizeAndBehaviour>::value && has_fixed_size<j2735_v2x_msgs::msg::Velocity>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PSM>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AccelerationSet4Way>::value && has_bounded_size<j2735_v2x_msgs::msg::AnimalType>::value && has_bounded_size<j2735_v2x_msgs::msg::Attachment>::value && has_bounded_size<j2735_v2x_msgs::msg::AttachmentRadius>::value && has_bounded_size<j2735_v2x_msgs::msg::DSecond>::value && has_bounded_size<j2735_v2x_msgs::msg::Heading>::value && has_bounded_size<j2735_v2x_msgs::msg::MsgCount>::value && has_bounded_size<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster>::value && has_bounded_size<j2735_v2x_msgs::msg::PathHistory>::value && has_bounded_size<j2735_v2x_msgs::msg::PathPrediction>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalAssistive>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalClusterRadius>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalCrossingInProgress>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalCrossingRequest>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalDeviceUsageState>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalDeviceUserType>::value && has_bounded_size<j2735_v2x_msgs::msg::Position3D>::value && has_bounded_size<j2735_v2x_msgs::msg::PositionalAccuracy>::value && has_bounded_size<j2735_v2x_msgs::msg::PropelledInformation>::value && has_bounded_size<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity>::value && has_bounded_size<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType>::value && has_bounded_size<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType>::value && has_bounded_size<j2735_v2x_msgs::msg::TemporaryID>::value && has_bounded_size<j2735_v2x_msgs::msg::UserSizeAndBehaviour>::value && has_bounded_size<j2735_v2x_msgs::msg::Velocity>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PSM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PSM__TRAITS_HPP_
