// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_driver_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/byte_array.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__STRUCT_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__msg__ByteArray __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__msg__ByteArray __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ByteArray_
{
  using Type = ByteArray_<ContainerAllocator>;

  explicit ByteArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_type = "";
    }
  }

  explicit ByteArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_type = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _message_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type_type message_type;
  using _content_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _content_type content;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__message_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_type = _arg;
    return *this;
  }
  Type & set__content(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_driver_msgs::msg::ByteArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::msg::ByteArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::ByteArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::ByteArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::ByteArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::ByteArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::ByteArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::ByteArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::ByteArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::ByteArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__msg__ByteArray
    std::shared_ptr<carma_driver_msgs::msg::ByteArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__msg__ByteArray
    std::shared_ptr<carma_driver_msgs::msg::ByteArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ByteArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message_type != other.message_type) {
      return false;
    }
    if (this->content != other.content) {
      return false;
    }
    return true;
  }
  bool operator!=(const ByteArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ByteArray_

// alias to use template instance with default allocator
using ByteArray =
  carma_driver_msgs::msg::ByteArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__STRUCT_HPP_
