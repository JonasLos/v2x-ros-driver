// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/SpecialVehicleExtensions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/special_vehicle_extensions.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SpecialVehicleExtensions_trailers
{
public:
  explicit Init_SpecialVehicleExtensions_trailers(::j2735_v2x_msgs::msg::SpecialVehicleExtensions & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::SpecialVehicleExtensions trailers(::j2735_v2x_msgs::msg::SpecialVehicleExtensions::_trailers_type arg)
  {
    msg_.trailers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SpecialVehicleExtensions msg_;
};

class Init_SpecialVehicleExtensions_description
{
public:
  explicit Init_SpecialVehicleExtensions_description(::j2735_v2x_msgs::msg::SpecialVehicleExtensions & msg)
  : msg_(msg)
  {}
  Init_SpecialVehicleExtensions_trailers description(::j2735_v2x_msgs::msg::SpecialVehicleExtensions::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_SpecialVehicleExtensions_trailers(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SpecialVehicleExtensions msg_;
};

class Init_SpecialVehicleExtensions_vehicle_alerts
{
public:
  explicit Init_SpecialVehicleExtensions_vehicle_alerts(::j2735_v2x_msgs::msg::SpecialVehicleExtensions & msg)
  : msg_(msg)
  {}
  Init_SpecialVehicleExtensions_description vehicle_alerts(::j2735_v2x_msgs::msg::SpecialVehicleExtensions::_vehicle_alerts_type arg)
  {
    msg_.vehicle_alerts = std::move(arg);
    return Init_SpecialVehicleExtensions_description(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SpecialVehicleExtensions msg_;
};

class Init_SpecialVehicleExtensions_presence_vector
{
public:
  Init_SpecialVehicleExtensions_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpecialVehicleExtensions_vehicle_alerts presence_vector(::j2735_v2x_msgs::msg::SpecialVehicleExtensions::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_SpecialVehicleExtensions_vehicle_alerts(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SpecialVehicleExtensions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::SpecialVehicleExtensions>()
{
  return j2735_v2x_msgs::msg::builder::Init_SpecialVehicleExtensions_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__BUILDER_HPP_
