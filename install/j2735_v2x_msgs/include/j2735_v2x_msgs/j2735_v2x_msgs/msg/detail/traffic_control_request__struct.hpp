// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_request.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tcr_v01'
#include "j2735_v2x_msgs/msg/detail/traffic_control_request_v01__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlRequest __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlRequest __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlRequest_
{
  using Type = TrafficControlRequest_<ContainerAllocator>;

  explicit TrafficControlRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tcr_v01(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  explicit TrafficControlRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tcr_v01(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _tcr_v01_type =
    j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator>;
  _tcr_v01_type tcr_v01;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__tcr_v01(
    const j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator> & _arg)
  {
    this->tcr_v01 = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESERVED =
    0u;
  static constexpr uint8_t TCRV01 =
    1u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlRequest
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlRequest
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlRequest_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->tcr_v01 != other.tcr_v01) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlRequest_

// alias to use template instance with default allocator
using TrafficControlRequest =
  j2735_v2x_msgs::msg::TrafficControlRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlRequest_<ContainerAllocator>::RESERVED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlRequest_<ContainerAllocator>::TCRV01;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__STRUCT_HPP_
