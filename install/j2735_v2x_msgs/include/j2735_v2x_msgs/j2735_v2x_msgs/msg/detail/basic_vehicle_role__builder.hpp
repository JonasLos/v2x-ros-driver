// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/BasicVehicleRole.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/basic_vehicle_role.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BasicVehicleRole_basic_vehicle_role
{
public:
  Init_BasicVehicleRole_basic_vehicle_role()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::BasicVehicleRole basic_vehicle_role(::j2735_v2x_msgs::msg::BasicVehicleRole::_basic_vehicle_role_type arg)
  {
    msg_.basic_vehicle_role = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BasicVehicleRole msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::BasicVehicleRole>()
{
  return j2735_v2x_msgs::msg::builder::Init_BasicVehicleRole_basic_vehicle_role();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__BUILDER_HPP_
