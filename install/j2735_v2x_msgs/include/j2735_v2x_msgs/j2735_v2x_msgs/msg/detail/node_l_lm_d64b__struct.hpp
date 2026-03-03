// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NodeLLmD64b.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_l_lm_d64b.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NodeLLmD64b __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NodeLLmD64b __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeLLmD64b_
{
  using Type = NodeLLmD64b_<ContainerAllocator>;

  explicit NodeLLmD64b_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0l;
      this->latitude = 0l;
    }
  }

  explicit NodeLLmD64b_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0l;
      this->latitude = 0l;
    }
  }

  // field types and members
  using _longitude_type =
    int32_t;
  _longitude_type longitude;
  using _latitude_type =
    int32_t;
  _latitude_type latitude;

  // setters for named parameter idiom
  Type & set__longitude(
    const int32_t & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__latitude(
    const int32_t & _arg)
  {
    this->latitude = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t LONGITUDE_UNAVAILABLE =
    1800000001;
  static constexpr int32_t LONGITUDE_MAX =
    1800000000;
  static constexpr int32_t LONGITUDE_MIN =
    -1799999999;
  static constexpr int32_t LATITUDE_UNAVAILABLE =
    900000001;
  static constexpr int32_t LATITUDE_MAX =
    900000000;
  static constexpr int32_t LATITUDE_MIN =
    -900000000;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NodeLLmD64b
    std::shared_ptr<j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NodeLLmD64b
    std::shared_ptr<j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeLLmD64b_ & other) const
  {
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeLLmD64b_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeLLmD64b_

// alias to use template instance with default allocator
using NodeLLmD64b =
  j2735_v2x_msgs::msg::NodeLLmD64b_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t NodeLLmD64b_<ContainerAllocator>::LONGITUDE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t NodeLLmD64b_<ContainerAllocator>::LONGITUDE_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t NodeLLmD64b_<ContainerAllocator>::LONGITUDE_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t NodeLLmD64b_<ContainerAllocator>::LATITUDE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t NodeLLmD64b_<ContainerAllocator>::LATITUDE_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t NodeLLmD64b_<ContainerAllocator>::LATITUDE_MIN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__STRUCT_HPP_
