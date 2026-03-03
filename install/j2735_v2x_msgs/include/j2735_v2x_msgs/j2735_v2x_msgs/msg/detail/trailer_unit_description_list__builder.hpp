// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescriptionList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_unit_description_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/trailer_unit_description_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrailerUnitDescriptionList_trailer_unit_descriptions
{
public:
  Init_TrailerUnitDescriptionList_trailer_unit_descriptions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::TrailerUnitDescriptionList trailer_unit_descriptions(::j2735_v2x_msgs::msg::TrailerUnitDescriptionList::_trailer_unit_descriptions_type arg)
  {
    msg_.trailer_unit_descriptions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescriptionList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrailerUnitDescriptionList>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrailerUnitDescriptionList_trailer_unit_descriptions();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION_LIST__BUILDER_HPP_
