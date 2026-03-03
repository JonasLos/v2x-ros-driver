// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/byte_array.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/msg/detail/byte_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_ByteArray_content
{
public:
  explicit Init_ByteArray_content(::carma_driver_msgs::msg::ByteArray & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::msg::ByteArray content(::carma_driver_msgs::msg::ByteArray::_content_type arg)
  {
    msg_.content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::msg::ByteArray msg_;
};

class Init_ByteArray_message_type
{
public:
  explicit Init_ByteArray_message_type(::carma_driver_msgs::msg::ByteArray & msg)
  : msg_(msg)
  {}
  Init_ByteArray_content message_type(::carma_driver_msgs::msg::ByteArray::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_ByteArray_content(msg_);
  }

private:
  ::carma_driver_msgs::msg::ByteArray msg_;
};

class Init_ByteArray_header
{
public:
  Init_ByteArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ByteArray_message_type header(::carma_driver_msgs::msg::ByteArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ByteArray_message_type(msg_);
  }

private:
  ::carma_driver_msgs::msg::ByteArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::msg::ByteArray>()
{
  return carma_driver_msgs::msg::builder::Init_ByteArray_header();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__BUILDER_HPP_
