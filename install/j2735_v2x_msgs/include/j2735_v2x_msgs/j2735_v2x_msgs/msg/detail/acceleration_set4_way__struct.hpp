// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/acceleration_set4_way.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__AccelerationSet4Way __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__AccelerationSet4Way __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelerationSet4Way_
{
  using Type = AccelerationSet4Way_<ContainerAllocator>;

  explicit AccelerationSet4Way_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitudinal = 0;
      this->lateral = 0;
      this->vert = 0;
      this->yaw_rate = 0;
    }
  }

  explicit AccelerationSet4Way_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitudinal = 0;
      this->lateral = 0;
      this->vert = 0;
      this->yaw_rate = 0;
    }
  }

  // field types and members
  using _longitudinal_type =
    int16_t;
  _longitudinal_type longitudinal;
  using _lateral_type =
    int16_t;
  _lateral_type lateral;
  using _vert_type =
    int8_t;
  _vert_type vert;
  using _yaw_rate_type =
    int16_t;
  _yaw_rate_type yaw_rate;

  // setters for named parameter idiom
  Type & set__longitudinal(
    const int16_t & _arg)
  {
    this->longitudinal = _arg;
    return *this;
  }
  Type & set__lateral(
    const int16_t & _arg)
  {
    this->lateral = _arg;
    return *this;
  }
  Type & set__vert(
    const int8_t & _arg)
  {
    this->vert = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const int16_t & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t ACCELERATION_UNAVAILABLE =
    2001;
  static constexpr int16_t ACCELERATION_MAX =
    2000;
  static constexpr int16_t ACCELERATION_MIN =
    -2000;
  static constexpr int8_t ACCELERATION_VERTICAL_UNAVAILABLE =
    -127;
  static constexpr int8_t ACCELERATION_VERTICAL_MAX =
    127;
  static constexpr int8_t ACCELERATION_VERTICAL_MIN =
    -126;
  static constexpr int16_t YAWRATE_UNAVAILABLE =
    0;
  static constexpr int16_t YAWRATE_MAX =
    32767;
  static constexpr int16_t YAWRATE_MIN =
    -32767;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__AccelerationSet4Way
    std::shared_ptr<j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__AccelerationSet4Way
    std::shared_ptr<j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelerationSet4Way_ & other) const
  {
    if (this->longitudinal != other.longitudinal) {
      return false;
    }
    if (this->lateral != other.lateral) {
      return false;
    }
    if (this->vert != other.vert) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelerationSet4Way_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelerationSet4Way_

// alias to use template instance with default allocator
using AccelerationSet4Way =
  j2735_v2x_msgs::msg::AccelerationSet4Way_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_VERTICAL_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_VERTICAL_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_VERTICAL_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t AccelerationSet4Way_<ContainerAllocator>::YAWRATE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t AccelerationSet4Way_<ContainerAllocator>::YAWRATE_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t AccelerationSet4Way_<ContainerAllocator>::YAWRATE_MIN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_HPP_
