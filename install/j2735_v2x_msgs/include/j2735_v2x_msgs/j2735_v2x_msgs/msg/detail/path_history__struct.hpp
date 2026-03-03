// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/path_history.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'crumb_data'
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__struct.hpp"
// Member 'initial_position'
#include "j2735_v2x_msgs/msg/detail/full_position_vector__struct.hpp"
// Member 'curr_gnss_status'
#include "j2735_v2x_msgs/msg/detail/gnss_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PathHistory __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PathHistory __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathHistory_
{
  using Type = PathHistory_<ContainerAllocator>;

  explicit PathHistory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : crumb_data(_init),
    initial_position(_init),
    curr_gnss_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit PathHistory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : crumb_data(_alloc, _init),
    initial_position(_alloc, _init),
    curr_gnss_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _crumb_data_type =
    j2735_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator>;
  _crumb_data_type crumb_data;
  using _initial_position_type =
    j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator>;
  _initial_position_type initial_position;
  using _curr_gnss_status_type =
    j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator>;
  _curr_gnss_status_type curr_gnss_status;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__crumb_data(
    const j2735_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator> & _arg)
  {
    this->crumb_data = _arg;
    return *this;
  }
  Type & set__initial_position(
    const j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator> & _arg)
  {
    this->initial_position = _arg;
    return *this;
  }
  Type & set__curr_gnss_status(
    const j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator> & _arg)
  {
    this->curr_gnss_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAS_CURR_GNSS_STATUS =
    1u;
  static constexpr uint8_t HAS_INITIAL_POSITION =
    2u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PathHistory
    std::shared_ptr<j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PathHistory
    std::shared_ptr<j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathHistory_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->crumb_data != other.crumb_data) {
      return false;
    }
    if (this->initial_position != other.initial_position) {
      return false;
    }
    if (this->curr_gnss_status != other.curr_gnss_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathHistory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathHistory_

// alias to use template instance with default allocator
using PathHistory =
  j2735_v2x_msgs::msg::PathHistory_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PathHistory_<ContainerAllocator>::HAS_CURR_GNSS_STATUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PathHistory_<ContainerAllocator>::HAS_INITIAL_POSITION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_HPP_
