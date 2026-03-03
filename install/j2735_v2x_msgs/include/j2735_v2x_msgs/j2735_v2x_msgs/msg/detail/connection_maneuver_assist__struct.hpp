// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connection_maneuver_assist.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ConnectionManeuverAssist __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ConnectionManeuverAssist __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConnectionManeuverAssist_
{
  using Type = ConnectionManeuverAssist_<ContainerAllocator>;

  explicit ConnectionManeuverAssist_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connection_id = 0;
      this->queue_length = 0;
      this->queue_length_exists = false;
      this->available_storage_length = 0;
      this->available_storage_length_exists = false;
      this->wait_on_stop = false;
      this->wait_on_stop_exists = false;
      this->ped_bicycle_detect = false;
      this->ped_bicycle_detect_exists = false;
    }
  }

  explicit ConnectionManeuverAssist_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connection_id = 0;
      this->queue_length = 0;
      this->queue_length_exists = false;
      this->available_storage_length = 0;
      this->available_storage_length_exists = false;
      this->wait_on_stop = false;
      this->wait_on_stop_exists = false;
      this->ped_bicycle_detect = false;
      this->ped_bicycle_detect_exists = false;
    }
  }

  // field types and members
  using _connection_id_type =
    uint8_t;
  _connection_id_type connection_id;
  using _queue_length_type =
    uint16_t;
  _queue_length_type queue_length;
  using _queue_length_exists_type =
    bool;
  _queue_length_exists_type queue_length_exists;
  using _available_storage_length_type =
    uint16_t;
  _available_storage_length_type available_storage_length;
  using _available_storage_length_exists_type =
    bool;
  _available_storage_length_exists_type available_storage_length_exists;
  using _wait_on_stop_type =
    bool;
  _wait_on_stop_type wait_on_stop;
  using _wait_on_stop_exists_type =
    bool;
  _wait_on_stop_exists_type wait_on_stop_exists;
  using _ped_bicycle_detect_type =
    bool;
  _ped_bicycle_detect_type ped_bicycle_detect;
  using _ped_bicycle_detect_exists_type =
    bool;
  _ped_bicycle_detect_exists_type ped_bicycle_detect_exists;

  // setters for named parameter idiom
  Type & set__connection_id(
    const uint8_t & _arg)
  {
    this->connection_id = _arg;
    return *this;
  }
  Type & set__queue_length(
    const uint16_t & _arg)
  {
    this->queue_length = _arg;
    return *this;
  }
  Type & set__queue_length_exists(
    const bool & _arg)
  {
    this->queue_length_exists = _arg;
    return *this;
  }
  Type & set__available_storage_length(
    const uint16_t & _arg)
  {
    this->available_storage_length = _arg;
    return *this;
  }
  Type & set__available_storage_length_exists(
    const bool & _arg)
  {
    this->available_storage_length_exists = _arg;
    return *this;
  }
  Type & set__wait_on_stop(
    const bool & _arg)
  {
    this->wait_on_stop = _arg;
    return *this;
  }
  Type & set__wait_on_stop_exists(
    const bool & _arg)
  {
    this->wait_on_stop_exists = _arg;
    return *this;
  }
  Type & set__ped_bicycle_detect(
    const bool & _arg)
  {
    this->ped_bicycle_detect = _arg;
    return *this;
  }
  Type & set__ped_bicycle_detect_exists(
    const bool & _arg)
  {
    this->ped_bicycle_detect_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ConnectionManeuverAssist
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ConnectionManeuverAssist
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectionManeuverAssist_ & other) const
  {
    if (this->connection_id != other.connection_id) {
      return false;
    }
    if (this->queue_length != other.queue_length) {
      return false;
    }
    if (this->queue_length_exists != other.queue_length_exists) {
      return false;
    }
    if (this->available_storage_length != other.available_storage_length) {
      return false;
    }
    if (this->available_storage_length_exists != other.available_storage_length_exists) {
      return false;
    }
    if (this->wait_on_stop != other.wait_on_stop) {
      return false;
    }
    if (this->wait_on_stop_exists != other.wait_on_stop_exists) {
      return false;
    }
    if (this->ped_bicycle_detect != other.ped_bicycle_detect) {
      return false;
    }
    if (this->ped_bicycle_detect_exists != other.ped_bicycle_detect_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectionManeuverAssist_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectionManeuverAssist_

// alias to use template instance with default allocator
using ConnectionManeuverAssist =
  j2735_v2x_msgs::msg::ConnectionManeuverAssist_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_HPP_
