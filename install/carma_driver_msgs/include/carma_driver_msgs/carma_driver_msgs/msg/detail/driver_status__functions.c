// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_driver_msgs:msg/DriverStatus.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/driver_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_driver_msgs__msg__DriverStatus__init(carma_driver_msgs__msg__DriverStatus * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    carma_driver_msgs__msg__DriverStatus__fini(msg);
    return false;
  }
  // status
  // can
  // radar
  // gnss
  // lidar
  // roadway_sensor
  // comms
  // controller
  // camera
  // imu
  // trailer_angle_sensor
  // lightbar
  return true;
}

void
carma_driver_msgs__msg__DriverStatus__fini(carma_driver_msgs__msg__DriverStatus * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // status
  // can
  // radar
  // gnss
  // lidar
  // roadway_sensor
  // comms
  // controller
  // camera
  // imu
  // trailer_angle_sensor
  // lightbar
}

bool
carma_driver_msgs__msg__DriverStatus__are_equal(const carma_driver_msgs__msg__DriverStatus * lhs, const carma_driver_msgs__msg__DriverStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // can
  if (lhs->can != rhs->can) {
    return false;
  }
  // radar
  if (lhs->radar != rhs->radar) {
    return false;
  }
  // gnss
  if (lhs->gnss != rhs->gnss) {
    return false;
  }
  // lidar
  if (lhs->lidar != rhs->lidar) {
    return false;
  }
  // roadway_sensor
  if (lhs->roadway_sensor != rhs->roadway_sensor) {
    return false;
  }
  // comms
  if (lhs->comms != rhs->comms) {
    return false;
  }
  // controller
  if (lhs->controller != rhs->controller) {
    return false;
  }
  // camera
  if (lhs->camera != rhs->camera) {
    return false;
  }
  // imu
  if (lhs->imu != rhs->imu) {
    return false;
  }
  // trailer_angle_sensor
  if (lhs->trailer_angle_sensor != rhs->trailer_angle_sensor) {
    return false;
  }
  // lightbar
  if (lhs->lightbar != rhs->lightbar) {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__msg__DriverStatus__copy(
  const carma_driver_msgs__msg__DriverStatus * input,
  carma_driver_msgs__msg__DriverStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // can
  output->can = input->can;
  // radar
  output->radar = input->radar;
  // gnss
  output->gnss = input->gnss;
  // lidar
  output->lidar = input->lidar;
  // roadway_sensor
  output->roadway_sensor = input->roadway_sensor;
  // comms
  output->comms = input->comms;
  // controller
  output->controller = input->controller;
  // camera
  output->camera = input->camera;
  // imu
  output->imu = input->imu;
  // trailer_angle_sensor
  output->trailer_angle_sensor = input->trailer_angle_sensor;
  // lightbar
  output->lightbar = input->lightbar;
  return true;
}

carma_driver_msgs__msg__DriverStatus *
carma_driver_msgs__msg__DriverStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__DriverStatus * msg = (carma_driver_msgs__msg__DriverStatus *)allocator.allocate(sizeof(carma_driver_msgs__msg__DriverStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__msg__DriverStatus));
  bool success = carma_driver_msgs__msg__DriverStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__msg__DriverStatus__destroy(carma_driver_msgs__msg__DriverStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__msg__DriverStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__msg__DriverStatus__Sequence__init(carma_driver_msgs__msg__DriverStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__DriverStatus * data = NULL;

  if (size) {
    data = (carma_driver_msgs__msg__DriverStatus *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__msg__DriverStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__msg__DriverStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__msg__DriverStatus__fini(&data[i - 1]);
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
carma_driver_msgs__msg__DriverStatus__Sequence__fini(carma_driver_msgs__msg__DriverStatus__Sequence * array)
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
      carma_driver_msgs__msg__DriverStatus__fini(&array->data[i]);
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

carma_driver_msgs__msg__DriverStatus__Sequence *
carma_driver_msgs__msg__DriverStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__DriverStatus__Sequence * array = (carma_driver_msgs__msg__DriverStatus__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__msg__DriverStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__msg__DriverStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__msg__DriverStatus__Sequence__destroy(carma_driver_msgs__msg__DriverStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__msg__DriverStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__msg__DriverStatus__Sequence__are_equal(const carma_driver_msgs__msg__DriverStatus__Sequence * lhs, const carma_driver_msgs__msg__DriverStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__msg__DriverStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__msg__DriverStatus__Sequence__copy(
  const carma_driver_msgs__msg__DriverStatus__Sequence * input,
  carma_driver_msgs__msg__DriverStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__msg__DriverStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_driver_msgs__msg__DriverStatus * data =
      (carma_driver_msgs__msg__DriverStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__msg__DriverStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__msg__DriverStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_driver_msgs__msg__DriverStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
