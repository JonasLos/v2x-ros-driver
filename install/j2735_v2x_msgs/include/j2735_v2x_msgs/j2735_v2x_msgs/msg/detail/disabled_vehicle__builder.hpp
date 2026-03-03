// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/DisabledVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/disabled_vehicle.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DisabledVehicle_location_details
{
public:
  explicit Init_DisabledVehicle_location_details(::j2735_v2x_msgs::msg::DisabledVehicle & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::DisabledVehicle location_details(::j2735_v2x_msgs::msg::DisabledVehicle::_location_details_type arg)
  {
    msg_.location_details = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DisabledVehicle msg_;
};

class Init_DisabledVehicle_status_details
{
public:
  explicit Init_DisabledVehicle_status_details(::j2735_v2x_msgs::msg::DisabledVehicle & msg)
  : msg_(msg)
  {}
  Init_DisabledVehicle_location_details status_details(::j2735_v2x_msgs::msg::DisabledVehicle::_status_details_type arg)
  {
    msg_.status_details = std::move(arg);
    return Init_DisabledVehicle_location_details(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DisabledVehicle msg_;
};

class Init_DisabledVehicle_presence_vector
{
public:
  Init_DisabledVehicle_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DisabledVehicle_status_details presence_vector(::j2735_v2x_msgs::msg::DisabledVehicle::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_DisabledVehicle_status_details(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DisabledVehicle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::DisabledVehicle>()
{
  return j2735_v2x_msgs::msg::builder::Init_DisabledVehicle_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__BUILDER_HPP_
