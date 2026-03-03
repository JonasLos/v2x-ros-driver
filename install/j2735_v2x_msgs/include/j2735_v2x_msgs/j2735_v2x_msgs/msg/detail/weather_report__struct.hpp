// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/WeatherReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/weather_report.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'is_raining'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__struct.hpp"
// Member 'rain_rate'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_rate__struct.hpp"
// Member 'precip_situation'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__struct.hpp"
// Member 'solar_radiation'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__struct.hpp"
// Member 'friction'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__struct.hpp"
// Member 'road_friction'
#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__WeatherReport __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__WeatherReport __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WeatherReport_
{
  using Type = WeatherReport_<ContainerAllocator>;

  explicit WeatherReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : is_raining(_init),
    rain_rate(_init),
    precip_situation(_init),
    solar_radiation(_init),
    friction(_init),
    road_friction(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit WeatherReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : is_raining(_alloc, _init),
    rain_rate(_alloc, _init),
    precip_situation(_alloc, _init),
    solar_radiation(_alloc, _init),
    friction(_alloc, _init),
    road_friction(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _is_raining_type =
    j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator>;
  _is_raining_type is_raining;
  using _rain_rate_type =
    j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator>;
  _rain_rate_type rain_rate;
  using _precip_situation_type =
    j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator>;
  _precip_situation_type precip_situation;
  using _solar_radiation_type =
    j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator>;
  _solar_radiation_type solar_radiation;
  using _friction_type =
    j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator>;
  _friction_type friction;
  using _road_friction_type =
    j2735_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator>;
  _road_friction_type road_friction;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__is_raining(
    const j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator> & _arg)
  {
    this->is_raining = _arg;
    return *this;
  }
  Type & set__rain_rate(
    const j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator> & _arg)
  {
    this->rain_rate = _arg;
    return *this;
  }
  Type & set__precip_situation(
    const j2735_v2x_msgs::msg::NTCIPEssPrecipSituation_<ContainerAllocator> & _arg)
  {
    this->precip_situation = _arg;
    return *this;
  }
  Type & set__solar_radiation(
    const j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator> & _arg)
  {
    this->solar_radiation = _arg;
    return *this;
  }
  Type & set__friction(
    const j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator> & _arg)
  {
    this->friction = _arg;
    return *this;
  }
  Type & set__road_friction(
    const j2735_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator> & _arg)
  {
    this->road_friction = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_RAIN_RATE =
    1u;
  static constexpr uint16_t HAS_PRECIP_SITUATION =
    2u;
  static constexpr uint16_t HAS_SOLAR_RADIATION =
    4u;
  static constexpr uint16_t HAS_FRICTION =
    8u;
  static constexpr uint16_t HAS_ROAD_FRICTION =
    16u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__WeatherReport
    std::shared_ptr<j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__WeatherReport
    std::shared_ptr<j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WeatherReport_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->is_raining != other.is_raining) {
      return false;
    }
    if (this->rain_rate != other.rain_rate) {
      return false;
    }
    if (this->precip_situation != other.precip_situation) {
      return false;
    }
    if (this->solar_radiation != other.solar_radiation) {
      return false;
    }
    if (this->friction != other.friction) {
      return false;
    }
    if (this->road_friction != other.road_friction) {
      return false;
    }
    return true;
  }
  bool operator!=(const WeatherReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WeatherReport_

// alias to use template instance with default allocator
using WeatherReport =
  j2735_v2x_msgs::msg::WeatherReport_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t WeatherReport_<ContainerAllocator>::HAS_RAIN_RATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t WeatherReport_<ContainerAllocator>::HAS_PRECIP_SITUATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t WeatherReport_<ContainerAllocator>::HAS_SOLAR_RADIATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t WeatherReport_<ContainerAllocator>::HAS_FRICTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t WeatherReport_<ContainerAllocator>::HAS_ROAD_FRICTION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__STRUCT_HPP_
