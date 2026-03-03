// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleWidth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_width.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleWidth __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleWidth __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleWidth_
{
  using Type = VehicleWidth_<ContainerAllocator>;

  explicit VehicleWidth_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_width = 0;
    }
  }

  explicit VehicleWidth_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_width = 0;
    }
  }

  // field types and members
  using _vehicle_width_type =
    uint16_t;
  _vehicle_width_type vehicle_width;

  // setters for named parameter idiom
  Type & set__vehicle_width(
    const uint16_t & _arg)
  {
    this->vehicle_width = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t VEHICLE_WIDTH_UNAVAILABLE =
    0u;
  static constexpr uint16_t VEHICLE_WIDTH_MAX =
    1023u;
  static constexpr uint16_t VEHICLE_WIDTH_MIN =
    1u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleWidth
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleWidth
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleWidth_ & other) const
  {
    if (this->vehicle_width != other.vehicle_width) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleWidth_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleWidth_

// alias to use template instance with default allocator
using VehicleWidth =
  j2735_v2x_msgs::msg::VehicleWidth_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleWidth_<ContainerAllocator>::VEHICLE_WIDTH_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleWidth_<ContainerAllocator>::VEHICLE_WIDTH_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleWidth_<ContainerAllocator>::VEHICLE_WIDTH_MIN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_HPP_
