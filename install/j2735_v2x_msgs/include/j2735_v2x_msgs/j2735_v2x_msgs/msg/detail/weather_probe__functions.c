// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/weather_probe__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `air_temp`
#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__functions.h"
// Member `air_pressure`
#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__functions.h"
// Member `rain_rates`
#include "j2735_v2x_msgs/msg/detail/wiper_set__functions.h"

bool
j2735_v2x_msgs__msg__WeatherProbe__init(j2735_v2x_msgs__msg__WeatherProbe * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // air_temp
  if (!j2735_v2x_msgs__msg__AmbientAirTemperature__init(&msg->air_temp)) {
    j2735_v2x_msgs__msg__WeatherProbe__fini(msg);
    return false;
  }
  // air_pressure
  if (!j2735_v2x_msgs__msg__AmbientAirPressure__init(&msg->air_pressure)) {
    j2735_v2x_msgs__msg__WeatherProbe__fini(msg);
    return false;
  }
  // rain_rates
  if (!j2735_v2x_msgs__msg__WiperSet__init(&msg->rain_rates)) {
    j2735_v2x_msgs__msg__WeatherProbe__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__WeatherProbe__fini(j2735_v2x_msgs__msg__WeatherProbe * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // air_temp
  j2735_v2x_msgs__msg__AmbientAirTemperature__fini(&msg->air_temp);
  // air_pressure
  j2735_v2x_msgs__msg__AmbientAirPressure__fini(&msg->air_pressure);
  // rain_rates
  j2735_v2x_msgs__msg__WiperSet__fini(&msg->rain_rates);
}

bool
j2735_v2x_msgs__msg__WeatherProbe__are_equal(const j2735_v2x_msgs__msg__WeatherProbe * lhs, const j2735_v2x_msgs__msg__WeatherProbe * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // air_temp
  if (!j2735_v2x_msgs__msg__AmbientAirTemperature__are_equal(
      &(lhs->air_temp), &(rhs->air_temp)))
  {
    return false;
  }
  // air_pressure
  if (!j2735_v2x_msgs__msg__AmbientAirPressure__are_equal(
      &(lhs->air_pressure), &(rhs->air_pressure)))
  {
    return false;
  }
  // rain_rates
  if (!j2735_v2x_msgs__msg__WiperSet__are_equal(
      &(lhs->rain_rates), &(rhs->rain_rates)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__WeatherProbe__copy(
  const j2735_v2x_msgs__msg__WeatherProbe * input,
  j2735_v2x_msgs__msg__WeatherProbe * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // air_temp
  if (!j2735_v2x_msgs__msg__AmbientAirTemperature__copy(
      &(input->air_temp), &(output->air_temp)))
  {
    return false;
  }
  // air_pressure
  if (!j2735_v2x_msgs__msg__AmbientAirPressure__copy(
      &(input->air_pressure), &(output->air_pressure)))
  {
    return false;
  }
  // rain_rates
  if (!j2735_v2x_msgs__msg__WiperSet__copy(
      &(input->rain_rates), &(output->rain_rates)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__WeatherProbe *
j2735_v2x_msgs__msg__WeatherProbe__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__WeatherProbe * msg = (j2735_v2x_msgs__msg__WeatherProbe *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__WeatherProbe), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__WeatherProbe));
  bool success = j2735_v2x_msgs__msg__WeatherProbe__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__WeatherProbe__destroy(j2735_v2x_msgs__msg__WeatherProbe * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__WeatherProbe__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__WeatherProbe__Sequence__init(j2735_v2x_msgs__msg__WeatherProbe__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__WeatherProbe * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__WeatherProbe *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__WeatherProbe), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__WeatherProbe__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__WeatherProbe__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__WeatherProbe__Sequence__fini(j2735_v2x_msgs__msg__WeatherProbe__Sequence * array)
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
      j2735_v2x_msgs__msg__WeatherProbe__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__WeatherProbe__Sequence *
j2735_v2x_msgs__msg__WeatherProbe__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__WeatherProbe__Sequence * array = (j2735_v2x_msgs__msg__WeatherProbe__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__WeatherProbe__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__WeatherProbe__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__WeatherProbe__Sequence__destroy(j2735_v2x_msgs__msg__WeatherProbe__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__WeatherProbe__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__WeatherProbe__Sequence__are_equal(const j2735_v2x_msgs__msg__WeatherProbe__Sequence * lhs, const j2735_v2x_msgs__msg__WeatherProbe__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__WeatherProbe__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__WeatherProbe__Sequence__copy(
  const j2735_v2x_msgs__msg__WeatherProbe__Sequence * input,
  j2735_v2x_msgs__msg__WeatherProbe__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__WeatherProbe);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__WeatherProbe * data =
      (j2735_v2x_msgs__msg__WeatherProbe *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__WeatherProbe__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__WeatherProbe__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__WeatherProbe__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
