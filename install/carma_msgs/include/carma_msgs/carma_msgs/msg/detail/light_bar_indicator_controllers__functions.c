// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
// generated code does not contain a copyright notice
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `green_solid_owner`
// Member `green_flash_owner`
// Member `yellow_sides_owner`
// Member `yellow_dim_owner`
// Member `yellow_flash_owner`
// Member `yellow_arrow_left_owner`
// Member `yellow_arrow_right_owner`
// Member `yellow_arrow_out_owner`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_msgs__msg__LightBarIndicatorControllers__init(carma_msgs__msg__LightBarIndicatorControllers * msg)
{
  if (!msg) {
    return false;
  }
  // green_solid_owner
  if (!rosidl_runtime_c__String__init(&msg->green_solid_owner)) {
    carma_msgs__msg__LightBarIndicatorControllers__fini(msg);
    return false;
  }
  // green_flash_owner
  if (!rosidl_runtime_c__String__init(&msg->green_flash_owner)) {
    carma_msgs__msg__LightBarIndicatorControllers__fini(msg);
    return false;
  }
  // yellow_sides_owner
  if (!rosidl_runtime_c__String__init(&msg->yellow_sides_owner)) {
    carma_msgs__msg__LightBarIndicatorControllers__fini(msg);
    return false;
  }
  // yellow_dim_owner
  if (!rosidl_runtime_c__String__init(&msg->yellow_dim_owner)) {
    carma_msgs__msg__LightBarIndicatorControllers__fini(msg);
    return false;
  }
  // yellow_flash_owner
  if (!rosidl_runtime_c__String__init(&msg->yellow_flash_owner)) {
    carma_msgs__msg__LightBarIndicatorControllers__fini(msg);
    return false;
  }
  // yellow_arrow_left_owner
  if (!rosidl_runtime_c__String__init(&msg->yellow_arrow_left_owner)) {
    carma_msgs__msg__LightBarIndicatorControllers__fini(msg);
    return false;
  }
  // yellow_arrow_right_owner
  if (!rosidl_runtime_c__String__init(&msg->yellow_arrow_right_owner)) {
    carma_msgs__msg__LightBarIndicatorControllers__fini(msg);
    return false;
  }
  // yellow_arrow_out_owner
  if (!rosidl_runtime_c__String__init(&msg->yellow_arrow_out_owner)) {
    carma_msgs__msg__LightBarIndicatorControllers__fini(msg);
    return false;
  }
  return true;
}

void
carma_msgs__msg__LightBarIndicatorControllers__fini(carma_msgs__msg__LightBarIndicatorControllers * msg)
{
  if (!msg) {
    return;
  }
  // green_solid_owner
  rosidl_runtime_c__String__fini(&msg->green_solid_owner);
  // green_flash_owner
  rosidl_runtime_c__String__fini(&msg->green_flash_owner);
  // yellow_sides_owner
  rosidl_runtime_c__String__fini(&msg->yellow_sides_owner);
  // yellow_dim_owner
  rosidl_runtime_c__String__fini(&msg->yellow_dim_owner);
  // yellow_flash_owner
  rosidl_runtime_c__String__fini(&msg->yellow_flash_owner);
  // yellow_arrow_left_owner
  rosidl_runtime_c__String__fini(&msg->yellow_arrow_left_owner);
  // yellow_arrow_right_owner
  rosidl_runtime_c__String__fini(&msg->yellow_arrow_right_owner);
  // yellow_arrow_out_owner
  rosidl_runtime_c__String__fini(&msg->yellow_arrow_out_owner);
}

bool
carma_msgs__msg__LightBarIndicatorControllers__are_equal(const carma_msgs__msg__LightBarIndicatorControllers * lhs, const carma_msgs__msg__LightBarIndicatorControllers * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // green_solid_owner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->green_solid_owner), &(rhs->green_solid_owner)))
  {
    return false;
  }
  // green_flash_owner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->green_flash_owner), &(rhs->green_flash_owner)))
  {
    return false;
  }
  // yellow_sides_owner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->yellow_sides_owner), &(rhs->yellow_sides_owner)))
  {
    return false;
  }
  // yellow_dim_owner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->yellow_dim_owner), &(rhs->yellow_dim_owner)))
  {
    return false;
  }
  // yellow_flash_owner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->yellow_flash_owner), &(rhs->yellow_flash_owner)))
  {
    return false;
  }
  // yellow_arrow_left_owner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->yellow_arrow_left_owner), &(rhs->yellow_arrow_left_owner)))
  {
    return false;
  }
  // yellow_arrow_right_owner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->yellow_arrow_right_owner), &(rhs->yellow_arrow_right_owner)))
  {
    return false;
  }
  // yellow_arrow_out_owner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->yellow_arrow_out_owner), &(rhs->yellow_arrow_out_owner)))
  {
    return false;
  }
  return true;
}

bool
carma_msgs__msg__LightBarIndicatorControllers__copy(
  const carma_msgs__msg__LightBarIndicatorControllers * input,
  carma_msgs__msg__LightBarIndicatorControllers * output)
{
  if (!input || !output) {
    return false;
  }
  // green_solid_owner
  if (!rosidl_runtime_c__String__copy(
      &(input->green_solid_owner), &(output->green_solid_owner)))
  {
    return false;
  }
  // green_flash_owner
  if (!rosidl_runtime_c__String__copy(
      &(input->green_flash_owner), &(output->green_flash_owner)))
  {
    return false;
  }
  // yellow_sides_owner
  if (!rosidl_runtime_c__String__copy(
      &(input->yellow_sides_owner), &(output->yellow_sides_owner)))
  {
    return false;
  }
  // yellow_dim_owner
  if (!rosidl_runtime_c__String__copy(
      &(input->yellow_dim_owner), &(output->yellow_dim_owner)))
  {
    return false;
  }
  // yellow_flash_owner
  if (!rosidl_runtime_c__String__copy(
      &(input->yellow_flash_owner), &(output->yellow_flash_owner)))
  {
    return false;
  }
  // yellow_arrow_left_owner
  if (!rosidl_runtime_c__String__copy(
      &(input->yellow_arrow_left_owner), &(output->yellow_arrow_left_owner)))
  {
    return false;
  }
  // yellow_arrow_right_owner
  if (!rosidl_runtime_c__String__copy(
      &(input->yellow_arrow_right_owner), &(output->yellow_arrow_right_owner)))
  {
    return false;
  }
  // yellow_arrow_out_owner
  if (!rosidl_runtime_c__String__copy(
      &(input->yellow_arrow_out_owner), &(output->yellow_arrow_out_owner)))
  {
    return false;
  }
  return true;
}

carma_msgs__msg__LightBarIndicatorControllers *
carma_msgs__msg__LightBarIndicatorControllers__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__LightBarIndicatorControllers * msg = (carma_msgs__msg__LightBarIndicatorControllers *)allocator.allocate(sizeof(carma_msgs__msg__LightBarIndicatorControllers), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__msg__LightBarIndicatorControllers));
  bool success = carma_msgs__msg__LightBarIndicatorControllers__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__msg__LightBarIndicatorControllers__destroy(carma_msgs__msg__LightBarIndicatorControllers * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__msg__LightBarIndicatorControllers__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__msg__LightBarIndicatorControllers__Sequence__init(carma_msgs__msg__LightBarIndicatorControllers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__LightBarIndicatorControllers * data = NULL;

  if (size) {
    data = (carma_msgs__msg__LightBarIndicatorControllers *)allocator.zero_allocate(size, sizeof(carma_msgs__msg__LightBarIndicatorControllers), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__msg__LightBarIndicatorControllers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__msg__LightBarIndicatorControllers__fini(&data[i - 1]);
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
carma_msgs__msg__LightBarIndicatorControllers__Sequence__fini(carma_msgs__msg__LightBarIndicatorControllers__Sequence * array)
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
      carma_msgs__msg__LightBarIndicatorControllers__fini(&array->data[i]);
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

carma_msgs__msg__LightBarIndicatorControllers__Sequence *
carma_msgs__msg__LightBarIndicatorControllers__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__LightBarIndicatorControllers__Sequence * array = (carma_msgs__msg__LightBarIndicatorControllers__Sequence *)allocator.allocate(sizeof(carma_msgs__msg__LightBarIndicatorControllers__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__msg__LightBarIndicatorControllers__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__msg__LightBarIndicatorControllers__Sequence__destroy(carma_msgs__msg__LightBarIndicatorControllers__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__msg__LightBarIndicatorControllers__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__msg__LightBarIndicatorControllers__Sequence__are_equal(const carma_msgs__msg__LightBarIndicatorControllers__Sequence * lhs, const carma_msgs__msg__LightBarIndicatorControllers__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__msg__LightBarIndicatorControllers__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__msg__LightBarIndicatorControllers__Sequence__copy(
  const carma_msgs__msg__LightBarIndicatorControllers__Sequence * input,
  carma_msgs__msg__LightBarIndicatorControllers__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__msg__LightBarIndicatorControllers);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_msgs__msg__LightBarIndicatorControllers * data =
      (carma_msgs__msg__LightBarIndicatorControllers *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__msg__LightBarIndicatorControllers__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_msgs__msg__LightBarIndicatorControllers__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_msgs__msg__LightBarIndicatorControllers__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
