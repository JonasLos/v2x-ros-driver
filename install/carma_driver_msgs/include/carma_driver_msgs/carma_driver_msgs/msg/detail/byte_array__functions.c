// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_driver_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/byte_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `content`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
carma_driver_msgs__msg__ByteArray__init(carma_driver_msgs__msg__ByteArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_driver_msgs__msg__ByteArray__fini(msg);
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__init(&msg->message_type)) {
    carma_driver_msgs__msg__ByteArray__fini(msg);
    return false;
  }
  // content
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->content, 0)) {
    carma_driver_msgs__msg__ByteArray__fini(msg);
    return false;
  }
  return true;
}

void
carma_driver_msgs__msg__ByteArray__fini(carma_driver_msgs__msg__ByteArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_type
  rosidl_runtime_c__String__fini(&msg->message_type);
  // content
  rosidl_runtime_c__uint8__Sequence__fini(&msg->content);
}

bool
carma_driver_msgs__msg__ByteArray__are_equal(const carma_driver_msgs__msg__ByteArray * lhs, const carma_driver_msgs__msg__ByteArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_type), &(rhs->message_type)))
  {
    return false;
  }
  // content
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->content), &(rhs->content)))
  {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__msg__ByteArray__copy(
  const carma_driver_msgs__msg__ByteArray * input,
  carma_driver_msgs__msg__ByteArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_type), &(output->message_type)))
  {
    return false;
  }
  // content
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->content), &(output->content)))
  {
    return false;
  }
  return true;
}

carma_driver_msgs__msg__ByteArray *
carma_driver_msgs__msg__ByteArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__ByteArray * msg = (carma_driver_msgs__msg__ByteArray *)allocator.allocate(sizeof(carma_driver_msgs__msg__ByteArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__msg__ByteArray));
  bool success = carma_driver_msgs__msg__ByteArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__msg__ByteArray__destroy(carma_driver_msgs__msg__ByteArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__msg__ByteArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__msg__ByteArray__Sequence__init(carma_driver_msgs__msg__ByteArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__ByteArray * data = NULL;

  if (size) {
    data = (carma_driver_msgs__msg__ByteArray *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__msg__ByteArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__msg__ByteArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__msg__ByteArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
carma_driver_msgs__msg__ByteArray__Sequence__fini(carma_driver_msgs__msg__ByteArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carma_driver_msgs__msg__ByteArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

carma_driver_msgs__msg__ByteArray__Sequence *
carma_driver_msgs__msg__ByteArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__ByteArray__Sequence * array = (carma_driver_msgs__msg__ByteArray__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__msg__ByteArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__msg__ByteArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__msg__ByteArray__Sequence__destroy(carma_driver_msgs__msg__ByteArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__msg__ByteArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__msg__ByteArray__Sequence__are_equal(const carma_driver_msgs__msg__ByteArray__Sequence * lhs, const carma_driver_msgs__msg__ByteArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__msg__ByteArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__msg__ByteArray__Sequence__copy(
  const carma_driver_msgs__msg__ByteArray__Sequence * input,
  carma_driver_msgs__msg__ByteArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__msg__ByteArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_driver_msgs__msg__ByteArray * data =
      (carma_driver_msgs__msg__ByteArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__msg__ByteArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__msg__ByteArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_driver_msgs__msg__ByteArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
