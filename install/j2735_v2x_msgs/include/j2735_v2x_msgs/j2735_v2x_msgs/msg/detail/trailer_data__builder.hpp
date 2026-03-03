// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/trailer_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrailerData_units
{
public:
  explicit Init_TrailerData_units(::j2735_v2x_msgs::msg::TrailerData & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::TrailerData units(::j2735_v2x_msgs::msg::TrailerData::_units_type arg)
  {
    msg_.units = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerData msg_;
};

class Init_TrailerData_connection
{
public:
  explicit Init_TrailerData_connection(::j2735_v2x_msgs::msg::TrailerData & msg)
  : msg_(msg)
  {}
  Init_TrailerData_units connection(::j2735_v2x_msgs::msg::TrailerData::_connection_type arg)
  {
    msg_.connection = std::move(arg);
    return Init_TrailerData_units(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerData msg_;
};

class Init_TrailerData_ssp_index
{
public:
  Init_TrailerData_ssp_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrailerData_connection ssp_index(::j2735_v2x_msgs::msg::TrailerData::_ssp_index_type arg)
  {
    msg_.ssp_index = std::move(arg);
    return Init_TrailerData_connection(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrailerData>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrailerData_ssp_index();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__BUILDER_HPP_
