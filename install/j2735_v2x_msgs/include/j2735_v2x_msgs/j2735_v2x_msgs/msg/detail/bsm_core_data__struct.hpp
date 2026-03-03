// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm_core_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__struct.hpp"
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__struct.hpp"
// Member 'accel_set'
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__struct.hpp"
// Member 'brakes'
#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.hpp"
// Member 'size'
#include "j2735_v2x_msgs/msg/detail/vehicle_size__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__BSMCoreData __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__BSMCoreData __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSMCoreData_
{
  using Type = BSMCoreData_<ContainerAllocator>;

  explicit BSMCoreData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accuracy(_init),
    transmission(_init),
    accel_set(_init),
    brakes(_init),
    size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_count = 0;
      this->sec_mark = 0;
      this->longitude = 0l;
      this->latitude = 0l;
      this->elev = 0l;
      this->speed = 0;
      this->heading = 0;
      this->angle = 0;
    }
  }

  explicit BSMCoreData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accuracy(_alloc, _init),
    transmission(_alloc, _init),
    accel_set(_alloc, _init),
    brakes(_alloc, _init),
    size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_count = 0;
      this->sec_mark = 0;
      this->longitude = 0l;
      this->latitude = 0l;
      this->elev = 0l;
      this->speed = 0;
      this->heading = 0;
      this->angle = 0;
    }
  }

  // field types and members
  using _msg_count_type =
    uint8_t;
  _msg_count_type msg_count;
  using _id_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _id_type id;
  using _sec_mark_type =
    uint16_t;
  _sec_mark_type sec_mark;
  using _longitude_type =
    int32_t;
  _longitude_type longitude;
  using _latitude_type =
    int32_t;
  _latitude_type latitude;
  using _elev_type =
    int32_t;
  _elev_type elev;
  using _accuracy_type =
    j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>;
  _accuracy_type accuracy;
  using _transmission_type =
    j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator>;
  _transmission_type transmission;
  using _speed_type =
    uint16_t;
  _speed_type speed;
  using _heading_type =
    uint16_t;
  _heading_type heading;
  using _angle_type =
    int8_t;
  _angle_type angle;
  using _accel_set_type =
    j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>;
  _accel_set_type accel_set;
  using _brakes_type =
    j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator>;
  _brakes_type brakes;
  using _size_type =
    j2735_v2x_msgs::msg::VehicleSize_<ContainerAllocator>;
  _size_type size;

  // setters for named parameter idiom
  Type & set__msg_count(
    const uint8_t & _arg)
  {
    this->msg_count = _arg;
    return *this;
  }
  Type & set__id(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__sec_mark(
    const uint16_t & _arg)
  {
    this->sec_mark = _arg;
    return *this;
  }
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
  Type & set__elev(
    const int32_t & _arg)
  {
    this->elev = _arg;
    return *this;
  }
  Type & set__accuracy(
    const j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }
  Type & set__transmission(
    const j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator> & _arg)
  {
    this->transmission = _arg;
    return *this;
  }
  Type & set__speed(
    const uint16_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__heading(
    const uint16_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__angle(
    const int8_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__accel_set(
    const j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> & _arg)
  {
    this->accel_set = _arg;
    return *this;
  }
  Type & set__brakes(
    const j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator> & _arg)
  {
    this->brakes = _arg;
    return *this;
  }
  Type & set__size(
    const j2735_v2x_msgs::msg::VehicleSize_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MSG_COUNT_MAX =
    127u;
  static constexpr uint16_t ID_TIME_MAX =
    3000u;
  static constexpr uint16_t SEC_MARK_MOD =
    60000u;
  static constexpr uint16_t SEC_MARK_UNAVAILABLE =
    65535u;
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
  static constexpr int32_t ELEVATION_UNAVAILABLE =
    -4096;
  static constexpr int32_t ELEVATION_MAX =
    61439;
  static constexpr int32_t ELEVATION_MIN =
    -4095;
  static constexpr uint16_t SPEED_UNAVAILABLE =
    8191u;
  static constexpr uint16_t SPEED_MAX =
    8190u;
  static constexpr uint16_t SPEED_MIN =
    0u;
  static constexpr uint16_t HEADING_UNAVAILABLE =
    28800u;
  static constexpr uint16_t HEADING_MAX =
    28798u;
  static constexpr uint16_t HEADING_MIN =
    0u;
  static constexpr int8_t STEER_WHEEL_ANGLE_UNAVAILABLE =
    127;
  static constexpr int8_t STEER_WHEEL_ANGLE_MAX =
    126;
  static constexpr int8_t STEER_WHEEL_ANGLE_MIN =
    -126;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__BSMCoreData
    std::shared_ptr<j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__BSMCoreData
    std::shared_ptr<j2735_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSMCoreData_ & other) const
  {
    if (this->msg_count != other.msg_count) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->sec_mark != other.sec_mark) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->elev != other.elev) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    if (this->transmission != other.transmission) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->accel_set != other.accel_set) {
      return false;
    }
    if (this->brakes != other.brakes) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSMCoreData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSMCoreData_

// alias to use template instance with default allocator
using BSMCoreData =
  j2735_v2x_msgs::msg::BSMCoreData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BSMCoreData_<ContainerAllocator>::MSG_COUNT_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::ID_TIME_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::SEC_MARK_MOD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::SEC_MARK_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BSMCoreData_<ContainerAllocator>::LONGITUDE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BSMCoreData_<ContainerAllocator>::LONGITUDE_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BSMCoreData_<ContainerAllocator>::LONGITUDE_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BSMCoreData_<ContainerAllocator>::LATITUDE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BSMCoreData_<ContainerAllocator>::LATITUDE_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BSMCoreData_<ContainerAllocator>::LATITUDE_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BSMCoreData_<ContainerAllocator>::ELEVATION_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BSMCoreData_<ContainerAllocator>::ELEVATION_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BSMCoreData_<ContainerAllocator>::ELEVATION_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::SPEED_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::SPEED_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::SPEED_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::HEADING_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::HEADING_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::HEADING_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t BSMCoreData_<ContainerAllocator>::STEER_WHEEL_ANGLE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t BSMCoreData_<ContainerAllocator>::STEER_WHEEL_ANGLE_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t BSMCoreData_<ContainerAllocator>::STEER_WHEEL_ANGLE_MIN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_HPP_
