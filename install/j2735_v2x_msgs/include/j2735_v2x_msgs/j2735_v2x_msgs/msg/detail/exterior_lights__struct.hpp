// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ExteriorLights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/exterior_lights.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ExteriorLights __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ExteriorLights __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExteriorLights_
{
  using Type = ExteriorLights_<ContainerAllocator>;

  explicit ExteriorLights_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exterior_lights = 0;
    }
  }

  explicit ExteriorLights_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exterior_lights = 0;
    }
  }

  // field types and members
  using _exterior_lights_type =
    uint16_t;
  _exterior_lights_type exterior_lights;

  // setters for named parameter idiom
  Type & set__exterior_lights(
    const uint16_t & _arg)
  {
    this->exterior_lights = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ALL_LIGHTS_OFF =
    0u;
  static constexpr uint16_t LOW_BEAM_HEADLIGHTS_ON =
    1u;
  static constexpr uint16_t HIGH_BEAM_HEADLIGHTS_ON =
    2u;
  static constexpr uint16_t LEFT_TURN_SIGNAL_ON =
    4u;
  static constexpr uint16_t RIGHT_TURN_SIGNAL_ON =
    8u;
  static constexpr uint16_t HAZARD_SIGNAL_ON =
    16u;
  static constexpr uint16_t AUTOMATIC_LIGHT_CONTROL_ON =
    32u;
  static constexpr uint16_t DAYTIME_RUNNING_LIGHTS_ON =
    64u;
  static constexpr uint16_t FOG_LIGHT_ON =
    128u;
  static constexpr uint16_t PARKING_LIGHTS_ON =
    256u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ExteriorLights
    std::shared_ptr<j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ExteriorLights
    std::shared_ptr<j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExteriorLights_ & other) const
  {
    if (this->exterior_lights != other.exterior_lights) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExteriorLights_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExteriorLights_

// alias to use template instance with default allocator
using ExteriorLights =
  j2735_v2x_msgs::msg::ExteriorLights_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ExteriorLights_<ContainerAllocator>::ALL_LIGHTS_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ExteriorLights_<ContainerAllocator>::LOW_BEAM_HEADLIGHTS_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ExteriorLights_<ContainerAllocator>::HIGH_BEAM_HEADLIGHTS_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ExteriorLights_<ContainerAllocator>::LEFT_TURN_SIGNAL_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ExteriorLights_<ContainerAllocator>::RIGHT_TURN_SIGNAL_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ExteriorLights_<ContainerAllocator>::HAZARD_SIGNAL_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ExteriorLights_<ContainerAllocator>::AUTOMATIC_LIGHT_CONTROL_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ExteriorLights_<ContainerAllocator>::DAYTIME_RUNNING_LIGHTS_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ExteriorLights_<ContainerAllocator>::FOG_LIGHT_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ExteriorLights_<ContainerAllocator>::PARKING_LIGHTS_ON;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_HPP_
