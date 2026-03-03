// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/SupplementalVehicleExtensions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/supplemental_vehicle_extensions.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'classification'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__struct.hpp"
// Member 'class_details'
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__struct.hpp"
// Member 'vehicle_data'
#include "j2735_v2x_msgs/msg/detail/vehicle_data__struct.hpp"
// Member 'weather_report'
#include "j2735_v2x_msgs/msg/detail/weather_report__struct.hpp"
// Member 'weather_probe'
#include "j2735_v2x_msgs/msg/detail/weather_probe__struct.hpp"
// Member 'obstacle'
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__struct.hpp"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__struct.hpp"
// Member 'speed_profile'
#include "j2735_v2x_msgs/msg/detail/gross_speed__struct.hpp"
// Member 'the_rtcm'
#include "j2735_v2x_msgs/msg/detail/rtcm_package__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__SupplementalVehicleExtensions __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__SupplementalVehicleExtensions __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SupplementalVehicleExtensions_
{
  using Type = SupplementalVehicleExtensions_<ContainerAllocator>;

  explicit SupplementalVehicleExtensions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : classification(_init),
    class_details(_init),
    vehicle_data(_init),
    weather_report(_init),
    weather_probe(_init),
    obstacle(_init),
    status(_init),
    the_rtcm(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit SupplementalVehicleExtensions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : classification(_alloc, _init),
    class_details(_alloc, _init),
    vehicle_data(_alloc, _init),
    weather_report(_alloc, _init),
    weather_probe(_alloc, _init),
    obstacle(_alloc, _init),
    status(_alloc, _init),
    the_rtcm(_alloc, _init)
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
  using _classification_type =
    j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator>;
  _classification_type classification;
  using _class_details_type =
    j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator>;
  _class_details_type class_details;
  using _vehicle_data_type =
    j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator>;
  _vehicle_data_type vehicle_data;
  using _weather_report_type =
    j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator>;
  _weather_report_type weather_report;
  using _weather_probe_type =
    j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator>;
  _weather_probe_type weather_probe;
  using _obstacle_type =
    j2735_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator>;
  _obstacle_type obstacle;
  using _status_type =
    j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator>;
  _status_type status;
  using _speed_profile_type =
    std::vector<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator>>>;
  _speed_profile_type speed_profile;
  using _the_rtcm_type =
    j2735_v2x_msgs::msg::RTCMPackage_<ContainerAllocator>;
  _the_rtcm_type the_rtcm;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__classification(
    const j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator> & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__class_details(
    const j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator> & _arg)
  {
    this->class_details = _arg;
    return *this;
  }
  Type & set__vehicle_data(
    const j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator> & _arg)
  {
    this->vehicle_data = _arg;
    return *this;
  }
  Type & set__weather_report(
    const j2735_v2x_msgs::msg::WeatherReport_<ContainerAllocator> & _arg)
  {
    this->weather_report = _arg;
    return *this;
  }
  Type & set__weather_probe(
    const j2735_v2x_msgs::msg::WeatherProbe_<ContainerAllocator> & _arg)
  {
    this->weather_probe = _arg;
    return *this;
  }
  Type & set__obstacle(
    const j2735_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator> & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }
  Type & set__status(
    const j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__speed_profile(
    const std::vector<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator>>> & _arg)
  {
    this->speed_profile = _arg;
    return *this;
  }
  Type & set__the_rtcm(
    const j2735_v2x_msgs::msg::RTCMPackage_<ContainerAllocator> & _arg)
  {
    this->the_rtcm = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_CLASSIFICATION =
    1u;
  static constexpr uint16_t HAS_CLASS_DETAILS =
    2u;
  static constexpr uint16_t HAS_VEHICLE_DATA =
    4u;
  static constexpr uint16_t HAS_WEATHER_REPORT =
    8u;
  static constexpr uint16_t HAS_WEATHER_PROBE =
    16u;
  static constexpr uint16_t HAS_OBSTACLE =
    32u;
  static constexpr uint16_t HAS_STATUS =
    64u;
  static constexpr uint16_t HAS_SPEED_PROFILE =
    128u;
  static constexpr uint16_t HAS_THE_RTCM =
    256u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__SupplementalVehicleExtensions
    std::shared_ptr<j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__SupplementalVehicleExtensions
    std::shared_ptr<j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SupplementalVehicleExtensions_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->class_details != other.class_details) {
      return false;
    }
    if (this->vehicle_data != other.vehicle_data) {
      return false;
    }
    if (this->weather_report != other.weather_report) {
      return false;
    }
    if (this->weather_probe != other.weather_probe) {
      return false;
    }
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->speed_profile != other.speed_profile) {
      return false;
    }
    if (this->the_rtcm != other.the_rtcm) {
      return false;
    }
    return true;
  }
  bool operator!=(const SupplementalVehicleExtensions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SupplementalVehicleExtensions_

// alias to use template instance with default allocator
using SupplementalVehicleExtensions =
  j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SupplementalVehicleExtensions_<ContainerAllocator>::HAS_CLASSIFICATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SupplementalVehicleExtensions_<ContainerAllocator>::HAS_CLASS_DETAILS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SupplementalVehicleExtensions_<ContainerAllocator>::HAS_VEHICLE_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SupplementalVehicleExtensions_<ContainerAllocator>::HAS_WEATHER_REPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SupplementalVehicleExtensions_<ContainerAllocator>::HAS_WEATHER_PROBE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SupplementalVehicleExtensions_<ContainerAllocator>::HAS_OBSTACLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SupplementalVehicleExtensions_<ContainerAllocator>::HAS_STATUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SupplementalVehicleExtensions_<ContainerAllocator>::HAS_SPEED_PROFILE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SupplementalVehicleExtensions_<ContainerAllocator>::HAS_THE_RTCM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__STRUCT_HPP_
