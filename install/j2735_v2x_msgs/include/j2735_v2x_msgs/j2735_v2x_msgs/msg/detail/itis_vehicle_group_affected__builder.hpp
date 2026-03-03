// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ITISVehicleGroupAffected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/itis_vehicle_group_affected.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_VEHICLE_GROUP_AFFECTED__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_VEHICLE_GROUP_AFFECTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ITISVehicleGroupAffected_vehicle_group_affected
{
public:
  Init_ITISVehicleGroupAffected_vehicle_group_affected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::ITISVehicleGroupAffected vehicle_group_affected(::j2735_v2x_msgs::msg::ITISVehicleGroupAffected::_vehicle_group_affected_type arg)
  {
    msg_.vehicle_group_affected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ITISVehicleGroupAffected msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ITISVehicleGroupAffected>()
{
  return j2735_v2x_msgs::msg::builder::Init_ITISVehicleGroupAffected_vehicle_group_affected();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_VEHICLE_GROUP_AFFECTED__BUILDER_HPP_
