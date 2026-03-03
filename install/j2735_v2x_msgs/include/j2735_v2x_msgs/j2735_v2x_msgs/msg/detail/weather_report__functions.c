// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/WeatherReport.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/weather_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `is_raining`
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__functions.h"
// Member `rain_rate`
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_rate__functions.h"
// Member `precip_situation`
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__functions.h"
// Member `solar_radiation`
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__functions.h"
// Member `friction`
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__functions.h"
// Member `road_friction`
#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__functions.h"

bool
j2735_v2x_msgs__msg__WeatherReport__init(j2735_v2x_msgs__msg__WeatherReport * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // is_raining
  if (!j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__init(&msg->is_raining)) {
    j2735_v2x_msgs__msg__WeatherReport__fini(msg);
    return false;
  }
  // rain_rate
  if (!j2735_v2x_msgs__msg__NTCIPEssPrecipRate__init(&msg->rain_rate)) {
    j2735_v2x_msgs__msg__WeatherReport__fini(msg);
    return false;
  }
  // precip_situation
  if (!j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__init(&msg->precip_situation)) {
    j2735_v2x_msgs__msg__WeatherReport__fini(msg);
    return false;
  }
  // solar_radiation
  if (!j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__init(&msg->solar_radiation)) {
    j2735_v2x_msgs__msg__WeatherReport__fini(msg);
    return false;
  }
  // friction
  if (!j2735_v2x_msgs__msg__NTCIPEssMobileFriction__init(&msg->friction)) {
    j2735_v2x_msgs__msg__WeatherReport__fini(msg);
    return false;
  }
  // road_friction
  if (!j2735_v2x_msgs__msg__CoefficientOfFriction__init(&msg->road_friction)) {
    j2735_v2x_msgs__msg__WeatherReport__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__WeatherReport__fini(j2735_v2x_msgs__msg__WeatherReport * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // is_raining
  j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__fini(&msg->is_raining);
  // rain_rate
  j2735_v2x_msgs__msg__NTCIPEssPrecipRate__fini(&msg->rain_rate);
  // precip_situation
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__fini(&msg->precip_situation);
  // solar_radiation
  j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__fini(&msg->solar_radiation);
  // friction
  j2735_v2x_msgs__msg__NTCIPEssMobileFriction__fini(&msg->friction);
  // road_friction
  j2735_v2x_msgs__msg__CoefficientOfFriction__fini(&msg->road_friction);
}

bool
j2735_v2x_msgs__msg__WeatherReport__are_equal(const j2735_v2x_msgs__msg__WeatherReport * lhs, const j2735_v2x_msgs__msg__WeatherReport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // is_raining
  if (!j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__are_equal(
      &(lhs->is_raining), &(rhs->is_raining)))
  {
    return false;
  }
  // rain_rate
  if (!j2735_v2x_msgs__msg__NTCIPEssPrecipRate__are_equal(
      &(lhs->rain_rate), &(rhs->rain_rate)))
  {
    return false;
  }
  // precip_situation
  if (!j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__are_equal(
      &(lhs->precip_situation), &(rhs->precip_situation)))
  {
    return false;
  }
  // solar_radiation
  if (!j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__are_equal(
      &(lhs->solar_radiation), &(rhs->solar_radiation)))
  {
    return false;
  }
  // friction
  if (!j2735_v2x_msgs__msg__NTCIPEssMobileFriction__are_equal(
      &(lhs->friction), &(rhs->friction)))
  {
    return false;
  }
  // road_friction
  if (!j2735_v2x_msgs__msg__CoefficientOfFriction__are_equal(
      &(lhs->road_friction), &(rhs->road_friction)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__WeatherReport__copy(
  const j2735_v2x_msgs__msg__WeatherReport * input,
  j2735_v2x_msgs__msg__WeatherReport * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // is_raining
  if (!j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__copy(
      &(input->is_raining), &(output->is_raining)))
  {
    return false;
  }
  // rain_rate
  if (!j2735_v2x_msgs__msg__NTCIPEssPrecipRate__copy(
      &(input->rain_rate), &(output->rain_rate)))
  {
    return false;
  }
  // precip_situation
  if (!j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__copy(
      &(input->precip_situation), &(output->precip_situation)))
  {
    return false;
  }
  // solar_radiation
  if (!j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__copy(
      &(input->solar_radiation), &(output->solar_radiation)))
  {
    return false;
  }
  // friction
  if (!j2735_v2x_msgs__msg__NTCIPEssMobileFriction__copy(
      &(input->friction), &(output->friction)))
  {
    return false;
  }
  // road_friction
  if (!j2735_v2x_msgs__msg__CoefficientOfFriction__copy(
      &(input->road_friction), &(output->road_friction)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__WeatherReport *
j2735_v2x_msgs__msg__WeatherReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__WeatherReport * msg = (j2735_v2x_msgs__msg__WeatherReport *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__WeatherReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__WeatherReport));
  bool success = j2735_v2x_msgs__msg__WeatherReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__WeatherReport__destroy(j2735_v2x_msgs__msg__WeatherReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__WeatherReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__WeatherReport__Sequence__init(j2735_v2x_msgs__msg__WeatherReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__WeatherReport * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__WeatherReport *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__WeatherReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__WeatherReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__WeatherReport__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__WeatherReport__Sequence__fini(j2735_v2x_msgs__msg__WeatherReport__Sequence * array)
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
      j2735_v2x_msgs__msg__WeatherReport__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__WeatherReport__Sequence *
j2735_v2x_msgs__msg__WeatherReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__WeatherReport__Sequence * array = (j2735_v2x_msgs__msg__WeatherReport__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__WeatherReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__WeatherReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__WeatherReport__Sequence__destroy(j2735_v2x_msgs__msg__WeatherReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__WeatherReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__WeatherReport__Sequence__are_equal(const j2735_v2x_msgs__msg__WeatherReport__Sequence * lhs, const j2735_v2x_msgs__msg__WeatherReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__WeatherReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__WeatherReport__Sequence__copy(
  const j2735_v2x_msgs__msg__WeatherReport__Sequence * input,
  j2735_v2x_msgs__msg__WeatherReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__WeatherReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__WeatherReport * data =
      (j2735_v2x_msgs__msg__WeatherReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__WeatherReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__WeatherReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__WeatherReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
