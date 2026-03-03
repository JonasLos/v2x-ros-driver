// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_type_attributes.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneTypeAttributes_parking
{
public:
  explicit Init_LaneTypeAttributes_parking(::j2735_v2x_msgs::msg::LaneTypeAttributes & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::LaneTypeAttributes parking(::j2735_v2x_msgs::msg::LaneTypeAttributes::_parking_type arg)
  {
    msg_.parking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneTypeAttributes msg_;
};

class Init_LaneTypeAttributes_tracked_vehicle
{
public:
  explicit Init_LaneTypeAttributes_tracked_vehicle(::j2735_v2x_msgs::msg::LaneTypeAttributes & msg)
  : msg_(msg)
  {}
  Init_LaneTypeAttributes_parking tracked_vehicle(::j2735_v2x_msgs::msg::LaneTypeAttributes::_tracked_vehicle_type arg)
  {
    msg_.tracked_vehicle = std::move(arg);
    return Init_LaneTypeAttributes_parking(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneTypeAttributes msg_;
};

class Init_LaneTypeAttributes_striping
{
public:
  explicit Init_LaneTypeAttributes_striping(::j2735_v2x_msgs::msg::LaneTypeAttributes & msg)
  : msg_(msg)
  {}
  Init_LaneTypeAttributes_tracked_vehicle striping(::j2735_v2x_msgs::msg::LaneTypeAttributes::_striping_type arg)
  {
    msg_.striping = std::move(arg);
    return Init_LaneTypeAttributes_tracked_vehicle(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneTypeAttributes msg_;
};

class Init_LaneTypeAttributes_median
{
public:
  explicit Init_LaneTypeAttributes_median(::j2735_v2x_msgs::msg::LaneTypeAttributes & msg)
  : msg_(msg)
  {}
  Init_LaneTypeAttributes_striping median(::j2735_v2x_msgs::msg::LaneTypeAttributes::_median_type arg)
  {
    msg_.median = std::move(arg);
    return Init_LaneTypeAttributes_striping(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneTypeAttributes msg_;
};

class Init_LaneTypeAttributes_sidewalk
{
public:
  explicit Init_LaneTypeAttributes_sidewalk(::j2735_v2x_msgs::msg::LaneTypeAttributes & msg)
  : msg_(msg)
  {}
  Init_LaneTypeAttributes_median sidewalk(::j2735_v2x_msgs::msg::LaneTypeAttributes::_sidewalk_type arg)
  {
    msg_.sidewalk = std::move(arg);
    return Init_LaneTypeAttributes_median(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneTypeAttributes msg_;
};

class Init_LaneTypeAttributes_bike_lane
{
public:
  explicit Init_LaneTypeAttributes_bike_lane(::j2735_v2x_msgs::msg::LaneTypeAttributes & msg)
  : msg_(msg)
  {}
  Init_LaneTypeAttributes_sidewalk bike_lane(::j2735_v2x_msgs::msg::LaneTypeAttributes::_bike_lane_type arg)
  {
    msg_.bike_lane = std::move(arg);
    return Init_LaneTypeAttributes_sidewalk(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneTypeAttributes msg_;
};

class Init_LaneTypeAttributes_crosswalk
{
public:
  explicit Init_LaneTypeAttributes_crosswalk(::j2735_v2x_msgs::msg::LaneTypeAttributes & msg)
  : msg_(msg)
  {}
  Init_LaneTypeAttributes_bike_lane crosswalk(::j2735_v2x_msgs::msg::LaneTypeAttributes::_crosswalk_type arg)
  {
    msg_.crosswalk = std::move(arg);
    return Init_LaneTypeAttributes_bike_lane(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneTypeAttributes msg_;
};

class Init_LaneTypeAttributes_vehicle
{
public:
  explicit Init_LaneTypeAttributes_vehicle(::j2735_v2x_msgs::msg::LaneTypeAttributes & msg)
  : msg_(msg)
  {}
  Init_LaneTypeAttributes_crosswalk vehicle(::j2735_v2x_msgs::msg::LaneTypeAttributes::_vehicle_type arg)
  {
    msg_.vehicle = std::move(arg);
    return Init_LaneTypeAttributes_crosswalk(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneTypeAttributes msg_;
};

class Init_LaneTypeAttributes_choice
{
public:
  Init_LaneTypeAttributes_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneTypeAttributes_vehicle choice(::j2735_v2x_msgs::msg::LaneTypeAttributes::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_LaneTypeAttributes_vehicle(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneTypeAttributes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::LaneTypeAttributes>()
{
  return j2735_v2x_msgs::msg::builder::Init_LaneTypeAttributes_choice();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__BUILDER_HPP_
