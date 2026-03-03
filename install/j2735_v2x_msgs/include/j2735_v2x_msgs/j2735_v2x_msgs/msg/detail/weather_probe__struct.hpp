// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/weather_probe.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'air_temp'
#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__struct.hpp"
// Member 'air_pressure'
#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__struct.hpp"
// Member 'rain_rates'
#include "j2735_v2x_msgs/msg/detail/wiper_set__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__WeatherProbe __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__WeatherProbe __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WeatherProbe_
{
  using Type = WeatherProbe_<ContainerAllocator>;

  explicit WeatherProbe_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : air_temp(_init),
    air_pressure(_init),
    rain_rates(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0ul;
    }
  }

  explicit WeatherProbe_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : air_temp(_alloc, _init),
    air_pressure(_alloc, _init),
    rain_rates(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0ul;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint32_t;
  _presence_vector_type presence_vector;
  using _air_temp_type =
    j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator>;
  _air_temp_type air_temp;
  using _air_pressure_type =
    j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator>;
  _air_pressure_type air_pressure;
  using _rain_rates_type =
    j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator>;
  _rain_rates_type rain_rates;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint32_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__air_temp(
    const j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator> & _arg)
  {
    this->air_temp = _arg;
    return *this;
  }
  Type & set__air_pressure(
    const j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator> & _arg)
  {
    this->air_pressure = _arg;
    return *this;
  }
  Type & set__rain_rates(
    const j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator> & _arg)
  {
    this->rain_rates = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t HAS_AIR_TEMP =
    1u;
  static constexpr uint16_t HAS_AIR_PRESSURE =
    2u;
  static constexpr uint16_t HAS_RAIN_RATES =
    4u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__WeatherProbe
    std::shared_ptr<j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__WeatherProbe
    std::shared_ptr<j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WeatherProbe_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->air_temp != other.air_temp) {
      return false;
    }
    if (this->air_pressure != other.air_pressure) {
      return false;
    }
    if (this->rain_rates != other.rain_rates) {
      return false;
    }
    return true;
  }
  bool operator!=(const WeatherProbe_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WeatherProbe_

// alias to use template instance with default allocator
using WeatherProbe =
  j2735_v2x_msgs::msg::WeatherProbe_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t WeatherProbe_<ContainerAllocator>::HAS_AIR_TEMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t WeatherProbe_<ContainerAllocator>::HAS_AIR_PRESSURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t WeatherProbe_<ContainerAllocator>::HAS_RAIN_RATES;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__STRUCT_HPP_
