// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connection.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'connecting_lane'
#include "j2735_v2x_msgs/msg/detail/connecting_lane__struct.hpp"
// Member 'remote_intersection'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__Connection __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__Connection __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Connection_
{
  using Type = Connection_<ContainerAllocator>;

  explicit Connection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : connecting_lane(_init),
    remote_intersection(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remote_intersection_exists = false;
      this->signal_group = 0;
      this->signal_group_exists = false;
      this->user_class = 0;
      this->user_class_exists = false;
      this->connection_id = 0;
      this->connection_id_exists = false;
    }
  }

  explicit Connection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : connecting_lane(_alloc, _init),
    remote_intersection(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remote_intersection_exists = false;
      this->signal_group = 0;
      this->signal_group_exists = false;
      this->user_class = 0;
      this->user_class_exists = false;
      this->connection_id = 0;
      this->connection_id_exists = false;
    }
  }

  // field types and members
  using _connecting_lane_type =
    j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator>;
  _connecting_lane_type connecting_lane;
  using _remote_intersection_type =
    j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator>;
  _remote_intersection_type remote_intersection;
  using _remote_intersection_exists_type =
    bool;
  _remote_intersection_exists_type remote_intersection_exists;
  using _signal_group_type =
    uint8_t;
  _signal_group_type signal_group;
  using _signal_group_exists_type =
    bool;
  _signal_group_exists_type signal_group_exists;
  using _user_class_type =
    uint8_t;
  _user_class_type user_class;
  using _user_class_exists_type =
    bool;
  _user_class_exists_type user_class_exists;
  using _connection_id_type =
    uint8_t;
  _connection_id_type connection_id;
  using _connection_id_exists_type =
    bool;
  _connection_id_exists_type connection_id_exists;

  // setters for named parameter idiom
  Type & set__connecting_lane(
    const j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator> & _arg)
  {
    this->connecting_lane = _arg;
    return *this;
  }
  Type & set__remote_intersection(
    const j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator> & _arg)
  {
    this->remote_intersection = _arg;
    return *this;
  }
  Type & set__remote_intersection_exists(
    const bool & _arg)
  {
    this->remote_intersection_exists = _arg;
    return *this;
  }
  Type & set__signal_group(
    const uint8_t & _arg)
  {
    this->signal_group = _arg;
    return *this;
  }
  Type & set__signal_group_exists(
    const bool & _arg)
  {
    this->signal_group_exists = _arg;
    return *this;
  }
  Type & set__user_class(
    const uint8_t & _arg)
  {
    this->user_class = _arg;
    return *this;
  }
  Type & set__user_class_exists(
    const bool & _arg)
  {
    this->user_class_exists = _arg;
    return *this;
  }
  Type & set__connection_id(
    const uint8_t & _arg)
  {
    this->connection_id = _arg;
    return *this;
  }
  Type & set__connection_id_exists(
    const bool & _arg)
  {
    this->connection_id_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::Connection_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::Connection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Connection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Connection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Connection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Connection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Connection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Connection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Connection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Connection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__Connection
    std::shared_ptr<j2735_v2x_msgs::msg::Connection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__Connection
    std::shared_ptr<j2735_v2x_msgs::msg::Connection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Connection_ & other) const
  {
    if (this->connecting_lane != other.connecting_lane) {
      return false;
    }
    if (this->remote_intersection != other.remote_intersection) {
      return false;
    }
    if (this->remote_intersection_exists != other.remote_intersection_exists) {
      return false;
    }
    if (this->signal_group != other.signal_group) {
      return false;
    }
    if (this->signal_group_exists != other.signal_group_exists) {
      return false;
    }
    if (this->user_class != other.user_class) {
      return false;
    }
    if (this->user_class_exists != other.user_class_exists) {
      return false;
    }
    if (this->connection_id != other.connection_id) {
      return false;
    }
    if (this->connection_id_exists != other.connection_id_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const Connection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Connection_

// alias to use template instance with default allocator
using Connection =
  j2735_v2x_msgs::msg::Connection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_
