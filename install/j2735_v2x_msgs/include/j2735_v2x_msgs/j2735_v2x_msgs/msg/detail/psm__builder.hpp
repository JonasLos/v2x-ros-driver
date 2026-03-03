// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PSM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/psm.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PSM__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PSM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/psm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PSM_animal_type
{
public:
  explicit Init_PSM_animal_type(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::PSM animal_type(::j2735_v2x_msgs::msg::PSM::_animal_type_type arg)
  {
    msg_.animal_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_attachment_radius
{
public:
  explicit Init_PSM_attachment_radius(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_animal_type attachment_radius(::j2735_v2x_msgs::msg::PSM::_attachment_radius_type arg)
  {
    msg_.attachment_radius = std::move(arg);
    return Init_PSM_animal_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_attachment
{
public:
  explicit Init_PSM_attachment(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_attachment_radius attachment(::j2735_v2x_msgs::msg::PSM::_attachment_type arg)
  {
    msg_.attachment = std::move(arg);
    return Init_PSM_attachment_radius(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_sizing
{
public:
  explicit Init_PSM_sizing(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_attachment sizing(::j2735_v2x_msgs::msg::PSM::_sizing_type arg)
  {
    msg_.sizing = std::move(arg);
    return Init_PSM_attachment(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_assist_type
{
public:
  explicit Init_PSM_assist_type(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_sizing assist_type(::j2735_v2x_msgs::msg::PSM::_assist_type_type arg)
  {
    msg_.assist_type = std::move(arg);
    return Init_PSM_sizing(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_activity_sub_type
{
public:
  explicit Init_PSM_activity_sub_type(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_assist_type activity_sub_type(::j2735_v2x_msgs::msg::PSM::_activity_sub_type_type arg)
  {
    msg_.activity_sub_type = std::move(arg);
    return Init_PSM_assist_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_activity_type
{
public:
  explicit Init_PSM_activity_type(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_activity_sub_type activity_type(::j2735_v2x_msgs::msg::PSM::_activity_type_type arg)
  {
    msg_.activity_type = std::move(arg);
    return Init_PSM_activity_sub_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_event_responder_type
{
public:
  explicit Init_PSM_event_responder_type(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_activity_type event_responder_type(::j2735_v2x_msgs::msg::PSM::_event_responder_type_type arg)
  {
    msg_.event_responder_type = std::move(arg);
    return Init_PSM_activity_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_cluster_radius
{
public:
  explicit Init_PSM_cluster_radius(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_event_responder_type cluster_radius(::j2735_v2x_msgs::msg::PSM::_cluster_radius_type arg)
  {
    msg_.cluster_radius = std::move(arg);
    return Init_PSM_event_responder_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_cluster_size
{
public:
  explicit Init_PSM_cluster_size(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_cluster_radius cluster_size(::j2735_v2x_msgs::msg::PSM::_cluster_size_type arg)
  {
    msg_.cluster_size = std::move(arg);
    return Init_PSM_cluster_radius(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_cross_state
{
public:
  explicit Init_PSM_cross_state(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_cluster_size cross_state(::j2735_v2x_msgs::msg::PSM::_cross_state_type arg)
  {
    msg_.cross_state = std::move(arg);
    return Init_PSM_cluster_size(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_cross_request
{
public:
  explicit Init_PSM_cross_request(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_cross_state cross_request(::j2735_v2x_msgs::msg::PSM::_cross_request_type arg)
  {
    msg_.cross_request = std::move(arg);
    return Init_PSM_cross_state(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_use_state
{
public:
  explicit Init_PSM_use_state(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_cross_request use_state(::j2735_v2x_msgs::msg::PSM::_use_state_type arg)
  {
    msg_.use_state = std::move(arg);
    return Init_PSM_cross_request(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_propulsion
{
public:
  explicit Init_PSM_propulsion(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_use_state propulsion(::j2735_v2x_msgs::msg::PSM::_propulsion_type arg)
  {
    msg_.propulsion = std::move(arg);
    return Init_PSM_use_state(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_path_prediction
{
public:
  explicit Init_PSM_path_prediction(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_propulsion path_prediction(::j2735_v2x_msgs::msg::PSM::_path_prediction_type arg)
  {
    msg_.path_prediction = std::move(arg);
    return Init_PSM_propulsion(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_path_history
{
public:
  explicit Init_PSM_path_history(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_path_prediction path_history(::j2735_v2x_msgs::msg::PSM::_path_history_type arg)
  {
    msg_.path_history = std::move(arg);
    return Init_PSM_path_prediction(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_accel_set
{
public:
  explicit Init_PSM_accel_set(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_path_history accel_set(::j2735_v2x_msgs::msg::PSM::_accel_set_type arg)
  {
    msg_.accel_set = std::move(arg);
    return Init_PSM_path_history(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_heading
{
public:
  explicit Init_PSM_heading(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_accel_set heading(::j2735_v2x_msgs::msg::PSM::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_PSM_accel_set(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_speed
{
public:
  explicit Init_PSM_speed(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_heading speed(::j2735_v2x_msgs::msg::PSM::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_PSM_heading(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_accuracy
{
public:
  explicit Init_PSM_accuracy(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_speed accuracy(::j2735_v2x_msgs::msg::PSM::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_PSM_speed(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_position
{
public:
  explicit Init_PSM_position(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_accuracy position(::j2735_v2x_msgs::msg::PSM::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PSM_accuracy(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_id
{
public:
  explicit Init_PSM_id(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_position id(::j2735_v2x_msgs::msg::PSM::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PSM_position(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_msg_cnt
{
public:
  explicit Init_PSM_msg_cnt(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_id msg_cnt(::j2735_v2x_msgs::msg::PSM::_msg_cnt_type arg)
  {
    msg_.msg_cnt = std::move(arg);
    return Init_PSM_id(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_sec_mark
{
public:
  explicit Init_PSM_sec_mark(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_msg_cnt sec_mark(::j2735_v2x_msgs::msg::PSM::_sec_mark_type arg)
  {
    msg_.sec_mark = std::move(arg);
    return Init_PSM_msg_cnt(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_basic_type
{
public:
  explicit Init_PSM_basic_type(::j2735_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_sec_mark basic_type(::j2735_v2x_msgs::msg::PSM::_basic_type_type arg)
  {
    msg_.basic_type = std::move(arg);
    return Init_PSM_sec_mark(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_presence_vector
{
public:
  Init_PSM_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PSM_basic_type presence_vector(::j2735_v2x_msgs::msg::PSM::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_PSM_basic_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PSM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PSM>()
{
  return j2735_v2x_msgs::msg::builder::Init_PSM_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PSM__BUILDER_HPP_
