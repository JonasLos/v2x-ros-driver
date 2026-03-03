// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ObstacleDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/obstacle_detection.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/obstacle_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleDetection_vert_event
{
public:
  explicit Init_ObstacleDetection_vert_event(::j2735_v2x_msgs::msg::ObstacleDetection & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::ObstacleDetection vert_event(::j2735_v2x_msgs::msg::ObstacleDetection::_vert_event_type arg)
  {
    msg_.vert_event = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ObstacleDetection msg_;
};

class Init_ObstacleDetection_location_details
{
public:
  explicit Init_ObstacleDetection_location_details(::j2735_v2x_msgs::msg::ObstacleDetection & msg)
  : msg_(msg)
  {}
  Init_ObstacleDetection_vert_event location_details(::j2735_v2x_msgs::msg::ObstacleDetection::_location_details_type arg)
  {
    msg_.location_details = std::move(arg);
    return Init_ObstacleDetection_vert_event(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ObstacleDetection msg_;
};

class Init_ObstacleDetection_description
{
public:
  explicit Init_ObstacleDetection_description(::j2735_v2x_msgs::msg::ObstacleDetection & msg)
  : msg_(msg)
  {}
  Init_ObstacleDetection_location_details description(::j2735_v2x_msgs::msg::ObstacleDetection::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_ObstacleDetection_location_details(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ObstacleDetection msg_;
};

class Init_ObstacleDetection_date_time
{
public:
  explicit Init_ObstacleDetection_date_time(::j2735_v2x_msgs::msg::ObstacleDetection & msg)
  : msg_(msg)
  {}
  Init_ObstacleDetection_description date_time(::j2735_v2x_msgs::msg::ObstacleDetection::_date_time_type arg)
  {
    msg_.date_time = std::move(arg);
    return Init_ObstacleDetection_description(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ObstacleDetection msg_;
};

class Init_ObstacleDetection_ob_direct
{
public:
  explicit Init_ObstacleDetection_ob_direct(::j2735_v2x_msgs::msg::ObstacleDetection & msg)
  : msg_(msg)
  {}
  Init_ObstacleDetection_date_time ob_direct(::j2735_v2x_msgs::msg::ObstacleDetection::_ob_direct_type arg)
  {
    msg_.ob_direct = std::move(arg);
    return Init_ObstacleDetection_date_time(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ObstacleDetection msg_;
};

class Init_ObstacleDetection_ob_dist
{
public:
  explicit Init_ObstacleDetection_ob_dist(::j2735_v2x_msgs::msg::ObstacleDetection & msg)
  : msg_(msg)
  {}
  Init_ObstacleDetection_ob_direct ob_dist(::j2735_v2x_msgs::msg::ObstacleDetection::_ob_dist_type arg)
  {
    msg_.ob_dist = std::move(arg);
    return Init_ObstacleDetection_ob_direct(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ObstacleDetection msg_;
};

class Init_ObstacleDetection_presence_vector
{
public:
  Init_ObstacleDetection_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleDetection_ob_dist presence_vector(::j2735_v2x_msgs::msg::ObstacleDetection::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_ObstacleDetection_ob_dist(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ObstacleDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ObstacleDetection>()
{
  return j2735_v2x_msgs::msg::builder::Init_ObstacleDetection_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__BUILDER_HPP_
