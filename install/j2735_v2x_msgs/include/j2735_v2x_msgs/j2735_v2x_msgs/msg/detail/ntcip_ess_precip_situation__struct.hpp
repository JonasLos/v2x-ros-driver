// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipSituation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_precip_situation.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_SITUATION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_SITUATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipSituation __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipSituation __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NTCIPEssPrecipSituation_
{
  using Type = NTCIPEssPrecipSituation_<ContainerAllocator>;

  explicit NTCIPEssPrecipSituation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ess_precip_situation = 0;
    }
  }

  explicit NTCIPEssPrecipSituation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ess_precip_situation = 0;
    }
  }

  // field types and members
  using _ess_precip_situation_type =
    uint8_t;
  _ess_precip_situation_type ess_precip_situation;

  // setters for named parameter idiom
  Type & set__ess_precip_situation(
    const uint8_t & _arg)
  {
    this->ess_precip_situation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OTHER =
    1u;
  static constexpr uint8_t UNKNOWN =
    2u;
  static constexpr uint8_t NO_PRECIPITATION =
    3u;
  static constexpr uint8_t UNIDENTIFIED_SLIGHT =
    4u;
  static constexpr uint8_t UNIDENTIFIED_MODERATE =
    5u;
  static constexpr uint8_t UNIDENTIFIED_HEAVY =
    6u;
  static constexpr uint8_t SNOW_SLIGHT =
    7u;
  static constexpr uint8_t SNOW_MODERATE =
    8u;
  static constexpr uint8_t SNOW_HEAVY =
    9u;
  static constexpr uint8_t RAIN_SLIGHT =
    10u;
  static constexpr uint8_t RAIN_MODERATE =
    11u;
  static constexpr uint8_t RAIN_HEAVY =
    12u;
  static constexpr uint8_t FROZEN_PRECIPITATION_SLIGHT =
    13u;
  static constexpr uint8_t FROZEN_PRECIPITATION_MODERATE =
    14u;
  static constexpr uint8_t FROZEN_PRECIPITATION_HEAVY =
    15u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipSituation
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipSituation
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NTCIPEssPrecipSituation_ & other) const
  {
    if (this->ess_precip_situation != other.ess_precip_situation) {
      return false;
    }
    return true;
  }
  bool operator!=(const NTCIPEssPrecipSituation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NTCIPEssPrecipSituation_

// alias to use template instance with default allocator
using NTCIPEssPrecipSituation =
  j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::NO_PRECIPITATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::UNIDENTIFIED_SLIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::UNIDENTIFIED_MODERATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::UNIDENTIFIED_HEAVY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::SNOW_SLIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::SNOW_MODERATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::SNOW_HEAVY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::RAIN_SLIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::RAIN_MODERATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::RAIN_HEAVY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::FROZEN_PRECIPITATION_SLIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::FROZEN_PRECIPITATION_MODERATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipSituation_<ContainerAllocator>::FROZEN_PRECIPITATION_HEAVY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_SITUATION__STRUCT_HPP_
