// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'connection'
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__struct.hpp"
// Member 'units'
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrailerData __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrailerData __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrailerData_
{
  using Type = TrailerData_<ContainerAllocator>;

  explicit TrailerData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : connection(_init),
    units(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssp_index = 0;
    }
  }

  explicit TrailerData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : connection(_alloc, _init),
    units(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssp_index = 0;
    }
  }

  // field types and members
  using _ssp_index_type =
    uint8_t;
  _ssp_index_type ssp_index;
  using _connection_type =
    j2735_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator>;
  _connection_type connection;
  using _units_type =
    j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator>;
  _units_type units;

  // setters for named parameter idiom
  Type & set__ssp_index(
    const uint8_t & _arg)
  {
    this->ssp_index = _arg;
    return *this;
  }
  Type & set__connection(
    const j2735_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator> & _arg)
  {
    this->connection = _arg;
    return *this;
  }
  Type & set__units(
    const j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator> & _arg)
  {
    this->units = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrailerData
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrailerData
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrailerData_ & other) const
  {
    if (this->ssp_index != other.ssp_index) {
      return false;
    }
    if (this->connection != other.connection) {
      return false;
    }
    if (this->units != other.units) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrailerData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrailerData_

// alias to use template instance with default allocator
using TrailerData =
  j2735_v2x_msgs::msg::TrailerData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__STRUCT_HPP_
