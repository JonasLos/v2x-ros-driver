// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ITISIncidentResponseEquipment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/itis_incident_response_equipment.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_INCIDENT_RESPONSE_EQUIPMENT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_INCIDENT_RESPONSE_EQUIPMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ITISIncidentResponseEquipment_incident_response_equipment
{
public:
  Init_ITISIncidentResponseEquipment_incident_response_equipment()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::ITISIncidentResponseEquipment incident_response_equipment(::j2735_v2x_msgs::msg::ITISIncidentResponseEquipment::_incident_response_equipment_type arg)
  {
    msg_.incident_response_equipment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ITISIncidentResponseEquipment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ITISIncidentResponseEquipment>()
{
  return j2735_v2x_msgs::msg::builder::Init_ITISIncidentResponseEquipment_incident_response_equipment();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_INCIDENT_RESPONSE_EQUIPMENT__BUILDER_HPP_
