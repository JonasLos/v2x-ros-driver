// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/DataParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/data_parameters.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/data_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DataParameters_geoid_used
{
public:
  explicit Init_DataParameters_geoid_used(::j2735_v2x_msgs::msg::DataParameters & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::DataParameters geoid_used(::j2735_v2x_msgs::msg::DataParameters::_geoid_used_type arg)
  {
    msg_.geoid_used = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DataParameters msg_;
};

class Init_DataParameters_last_checked_date
{
public:
  explicit Init_DataParameters_last_checked_date(::j2735_v2x_msgs::msg::DataParameters & msg)
  : msg_(msg)
  {}
  Init_DataParameters_geoid_used last_checked_date(::j2735_v2x_msgs::msg::DataParameters::_last_checked_date_type arg)
  {
    msg_.last_checked_date = std::move(arg);
    return Init_DataParameters_geoid_used(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DataParameters msg_;
};

class Init_DataParameters_process_agency
{
public:
  explicit Init_DataParameters_process_agency(::j2735_v2x_msgs::msg::DataParameters & msg)
  : msg_(msg)
  {}
  Init_DataParameters_last_checked_date process_agency(::j2735_v2x_msgs::msg::DataParameters::_process_agency_type arg)
  {
    msg_.process_agency = std::move(arg);
    return Init_DataParameters_last_checked_date(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DataParameters msg_;
};

class Init_DataParameters_process_method
{
public:
  Init_DataParameters_process_method()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataParameters_process_agency process_method(::j2735_v2x_msgs::msg::DataParameters::_process_method_type arg)
  {
    msg_.process_method = std::move(arg);
    return Init_DataParameters_process_agency(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DataParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::DataParameters>()
{
  return j2735_v2x_msgs::msg::builder::Init_DataParameters_process_method();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__BUILDER_HPP_
