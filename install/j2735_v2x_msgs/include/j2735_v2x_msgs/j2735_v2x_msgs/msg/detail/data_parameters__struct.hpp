// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/DataParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/data_parameters.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__DataParameters __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__DataParameters __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataParameters_
{
  using Type = DataParameters_<ContainerAllocator>;

  explicit DataParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->process_method = "";
      this->process_agency = "";
      this->last_checked_date = "";
      this->geoid_used = "";
    }
  }

  explicit DataParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : process_method(_alloc),
    process_agency(_alloc),
    last_checked_date(_alloc),
    geoid_used(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->process_method = "";
      this->process_agency = "";
      this->last_checked_date = "";
      this->geoid_used = "";
    }
  }

  // field types and members
  using _process_method_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _process_method_type process_method;
  using _process_agency_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _process_agency_type process_agency;
  using _last_checked_date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_checked_date_type last_checked_date;
  using _geoid_used_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _geoid_used_type geoid_used;

  // setters for named parameter idiom
  Type & set__process_method(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->process_method = _arg;
    return *this;
  }
  Type & set__process_agency(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->process_agency = _arg;
    return *this;
  }
  Type & set__last_checked_date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_checked_date = _arg;
    return *this;
  }
  Type & set__geoid_used(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->geoid_used = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__DataParameters
    std::shared_ptr<j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__DataParameters
    std::shared_ptr<j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataParameters_ & other) const
  {
    if (this->process_method != other.process_method) {
      return false;
    }
    if (this->process_agency != other.process_agency) {
      return false;
    }
    if (this->last_checked_date != other.last_checked_date) {
      return false;
    }
    if (this->geoid_used != other.geoid_used) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataParameters_

// alias to use template instance with default allocator
using DataParameters =
  j2735_v2x_msgs::msg::DataParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__STRUCT_HPP_
