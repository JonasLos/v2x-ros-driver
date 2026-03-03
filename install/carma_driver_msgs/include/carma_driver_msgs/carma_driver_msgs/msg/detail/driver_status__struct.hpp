// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_driver_msgs:msg/DriverStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/driver_status.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__STRUCT_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__msg__DriverStatus __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__msg__DriverStatus __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriverStatus_
{
  using Type = DriverStatus_<ContainerAllocator>;

  explicit DriverStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->status = 0;
      this->can = false;
      this->radar = false;
      this->gnss = false;
      this->lidar = false;
      this->roadway_sensor = false;
      this->comms = false;
      this->controller = false;
      this->camera = false;
      this->imu = false;
      this->trailer_angle_sensor = false;
      this->lightbar = false;
    }
  }

  explicit DriverStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->status = 0;
      this->can = false;
      this->radar = false;
      this->gnss = false;
      this->lidar = false;
      this->roadway_sensor = false;
      this->comms = false;
      this->controller = false;
      this->camera = false;
      this->imu = false;
      this->trailer_angle_sensor = false;
      this->lightbar = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _status_type =
    uint8_t;
  _status_type status;
  using _can_type =
    bool;
  _can_type can;
  using _radar_type =
    bool;
  _radar_type radar;
  using _gnss_type =
    bool;
  _gnss_type gnss;
  using _lidar_type =
    bool;
  _lidar_type lidar;
  using _roadway_sensor_type =
    bool;
  _roadway_sensor_type roadway_sensor;
  using _comms_type =
    bool;
  _comms_type comms;
  using _controller_type =
    bool;
  _controller_type controller;
  using _camera_type =
    bool;
  _camera_type camera;
  using _imu_type =
    bool;
  _imu_type imu;
  using _trailer_angle_sensor_type =
    bool;
  _trailer_angle_sensor_type trailer_angle_sensor;
  using _lightbar_type =
    bool;
  _lightbar_type lightbar;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__can(
    const bool & _arg)
  {
    this->can = _arg;
    return *this;
  }
  Type & set__radar(
    const bool & _arg)
  {
    this->radar = _arg;
    return *this;
  }
  Type & set__gnss(
    const bool & _arg)
  {
    this->gnss = _arg;
    return *this;
  }
  Type & set__lidar(
    const bool & _arg)
  {
    this->lidar = _arg;
    return *this;
  }
  Type & set__roadway_sensor(
    const bool & _arg)
  {
    this->roadway_sensor = _arg;
    return *this;
  }
  Type & set__comms(
    const bool & _arg)
  {
    this->comms = _arg;
    return *this;
  }
  Type & set__controller(
    const bool & _arg)
  {
    this->controller = _arg;
    return *this;
  }
  Type & set__camera(
    const bool & _arg)
  {
    this->camera = _arg;
    return *this;
  }
  Type & set__imu(
    const bool & _arg)
  {
    this->imu = _arg;
    return *this;
  }
  Type & set__trailer_angle_sensor(
    const bool & _arg)
  {
    this->trailer_angle_sensor = _arg;
    return *this;
  }
  Type & set__lightbar(
    const bool & _arg)
  {
    this->lightbar = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OFF =
    0u;
  static constexpr uint8_t OPERATIONAL =
    1u;
  static constexpr uint8_t DEGRADED =
    2u;
  static constexpr uint8_t FAULT =
    3u;

  // pointer types
  using RawPtr =
    carma_driver_msgs::msg::DriverStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::msg::DriverStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::DriverStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::DriverStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::DriverStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::DriverStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::DriverStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::DriverStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::DriverStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::DriverStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__msg__DriverStatus
    std::shared_ptr<carma_driver_msgs::msg::DriverStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__msg__DriverStatus
    std::shared_ptr<carma_driver_msgs::msg::DriverStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriverStatus_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->can != other.can) {
      return false;
    }
    if (this->radar != other.radar) {
      return false;
    }
    if (this->gnss != other.gnss) {
      return false;
    }
    if (this->lidar != other.lidar) {
      return false;
    }
    if (this->roadway_sensor != other.roadway_sensor) {
      return false;
    }
    if (this->comms != other.comms) {
      return false;
    }
    if (this->controller != other.controller) {
      return false;
    }
    if (this->camera != other.camera) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    if (this->trailer_angle_sensor != other.trailer_angle_sensor) {
      return false;
    }
    if (this->lightbar != other.lightbar) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriverStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriverStatus_

// alias to use template instance with default allocator
using DriverStatus =
  carma_driver_msgs::msg::DriverStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DriverStatus_<ContainerAllocator>::OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DriverStatus_<ContainerAllocator>::OPERATIONAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DriverStatus_<ContainerAllocator>::DEGRADED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DriverStatus_<ContainerAllocator>::FAULT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__STRUCT_HPP_
