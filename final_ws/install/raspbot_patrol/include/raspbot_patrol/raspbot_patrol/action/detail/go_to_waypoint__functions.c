// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raspbot_patrol:action/GoToWaypoint.idl
// generated code does not contain a copyright notice
#include "raspbot_patrol/action/detail/go_to_waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
raspbot_patrol__action__GoToWaypoint_Goal__init(raspbot_patrol__action__GoToWaypoint_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // waypoint_index
  return true;
}

void
raspbot_patrol__action__GoToWaypoint_Goal__fini(raspbot_patrol__action__GoToWaypoint_Goal * msg)
{
  if (!msg) {
    return;
  }
  // waypoint_index
}

bool
raspbot_patrol__action__GoToWaypoint_Goal__are_equal(const raspbot_patrol__action__GoToWaypoint_Goal * lhs, const raspbot_patrol__action__GoToWaypoint_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoint_index
  if (lhs->waypoint_index != rhs->waypoint_index) {
    return false;
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_Goal__copy(
  const raspbot_patrol__action__GoToWaypoint_Goal * input,
  raspbot_patrol__action__GoToWaypoint_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoint_index
  output->waypoint_index = input->waypoint_index;
  return true;
}

raspbot_patrol__action__GoToWaypoint_Goal *
raspbot_patrol__action__GoToWaypoint_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_Goal * msg = (raspbot_patrol__action__GoToWaypoint_Goal *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspbot_patrol__action__GoToWaypoint_Goal));
  bool success = raspbot_patrol__action__GoToWaypoint_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raspbot_patrol__action__GoToWaypoint_Goal__destroy(raspbot_patrol__action__GoToWaypoint_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raspbot_patrol__action__GoToWaypoint_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raspbot_patrol__action__GoToWaypoint_Goal__Sequence__init(raspbot_patrol__action__GoToWaypoint_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_Goal * data = NULL;

  if (size) {
    data = (raspbot_patrol__action__GoToWaypoint_Goal *)allocator.zero_allocate(size, sizeof(raspbot_patrol__action__GoToWaypoint_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspbot_patrol__action__GoToWaypoint_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspbot_patrol__action__GoToWaypoint_Goal__fini(&data[i - 1]);
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
raspbot_patrol__action__GoToWaypoint_Goal__Sequence__fini(raspbot_patrol__action__GoToWaypoint_Goal__Sequence * array)
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
      raspbot_patrol__action__GoToWaypoint_Goal__fini(&array->data[i]);
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

raspbot_patrol__action__GoToWaypoint_Goal__Sequence *
raspbot_patrol__action__GoToWaypoint_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_Goal__Sequence * array = (raspbot_patrol__action__GoToWaypoint_Goal__Sequence *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raspbot_patrol__action__GoToWaypoint_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raspbot_patrol__action__GoToWaypoint_Goal__Sequence__destroy(raspbot_patrol__action__GoToWaypoint_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raspbot_patrol__action__GoToWaypoint_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raspbot_patrol__action__GoToWaypoint_Goal__Sequence__are_equal(const raspbot_patrol__action__GoToWaypoint_Goal__Sequence * lhs, const raspbot_patrol__action__GoToWaypoint_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_Goal__Sequence__copy(
  const raspbot_patrol__action__GoToWaypoint_Goal__Sequence * input,
  raspbot_patrol__action__GoToWaypoint_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raspbot_patrol__action__GoToWaypoint_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raspbot_patrol__action__GoToWaypoint_Goal * data =
      (raspbot_patrol__action__GoToWaypoint_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raspbot_patrol__action__GoToWaypoint_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raspbot_patrol__action__GoToWaypoint_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
raspbot_patrol__action__GoToWaypoint_Result__init(raspbot_patrol__action__GoToWaypoint_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    raspbot_patrol__action__GoToWaypoint_Result__fini(msg);
    return false;
  }
  return true;
}

void
raspbot_patrol__action__GoToWaypoint_Result__fini(raspbot_patrol__action__GoToWaypoint_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
raspbot_patrol__action__GoToWaypoint_Result__are_equal(const raspbot_patrol__action__GoToWaypoint_Result * lhs, const raspbot_patrol__action__GoToWaypoint_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_Result__copy(
  const raspbot_patrol__action__GoToWaypoint_Result * input,
  raspbot_patrol__action__GoToWaypoint_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

raspbot_patrol__action__GoToWaypoint_Result *
raspbot_patrol__action__GoToWaypoint_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_Result * msg = (raspbot_patrol__action__GoToWaypoint_Result *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspbot_patrol__action__GoToWaypoint_Result));
  bool success = raspbot_patrol__action__GoToWaypoint_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raspbot_patrol__action__GoToWaypoint_Result__destroy(raspbot_patrol__action__GoToWaypoint_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raspbot_patrol__action__GoToWaypoint_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raspbot_patrol__action__GoToWaypoint_Result__Sequence__init(raspbot_patrol__action__GoToWaypoint_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_Result * data = NULL;

  if (size) {
    data = (raspbot_patrol__action__GoToWaypoint_Result *)allocator.zero_allocate(size, sizeof(raspbot_patrol__action__GoToWaypoint_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspbot_patrol__action__GoToWaypoint_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspbot_patrol__action__GoToWaypoint_Result__fini(&data[i - 1]);
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
raspbot_patrol__action__GoToWaypoint_Result__Sequence__fini(raspbot_patrol__action__GoToWaypoint_Result__Sequence * array)
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
      raspbot_patrol__action__GoToWaypoint_Result__fini(&array->data[i]);
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

raspbot_patrol__action__GoToWaypoint_Result__Sequence *
raspbot_patrol__action__GoToWaypoint_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_Result__Sequence * array = (raspbot_patrol__action__GoToWaypoint_Result__Sequence *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raspbot_patrol__action__GoToWaypoint_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raspbot_patrol__action__GoToWaypoint_Result__Sequence__destroy(raspbot_patrol__action__GoToWaypoint_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raspbot_patrol__action__GoToWaypoint_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raspbot_patrol__action__GoToWaypoint_Result__Sequence__are_equal(const raspbot_patrol__action__GoToWaypoint_Result__Sequence * lhs, const raspbot_patrol__action__GoToWaypoint_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_Result__Sequence__copy(
  const raspbot_patrol__action__GoToWaypoint_Result__Sequence * input,
  raspbot_patrol__action__GoToWaypoint_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raspbot_patrol__action__GoToWaypoint_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raspbot_patrol__action__GoToWaypoint_Result * data =
      (raspbot_patrol__action__GoToWaypoint_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raspbot_patrol__action__GoToWaypoint_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raspbot_patrol__action__GoToWaypoint_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
raspbot_patrol__action__GoToWaypoint_Feedback__init(raspbot_patrol__action__GoToWaypoint_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance_to_waypoint
  // current_state
  if (!rosidl_runtime_c__String__init(&msg->current_state)) {
    raspbot_patrol__action__GoToWaypoint_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
raspbot_patrol__action__GoToWaypoint_Feedback__fini(raspbot_patrol__action__GoToWaypoint_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance_to_waypoint
  // current_state
  rosidl_runtime_c__String__fini(&msg->current_state);
}

bool
raspbot_patrol__action__GoToWaypoint_Feedback__are_equal(const raspbot_patrol__action__GoToWaypoint_Feedback * lhs, const raspbot_patrol__action__GoToWaypoint_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_to_waypoint
  if (lhs->distance_to_waypoint != rhs->distance_to_waypoint) {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_state), &(rhs->current_state)))
  {
    return false;
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_Feedback__copy(
  const raspbot_patrol__action__GoToWaypoint_Feedback * input,
  raspbot_patrol__action__GoToWaypoint_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_to_waypoint
  output->distance_to_waypoint = input->distance_to_waypoint;
  // current_state
  if (!rosidl_runtime_c__String__copy(
      &(input->current_state), &(output->current_state)))
  {
    return false;
  }
  return true;
}

raspbot_patrol__action__GoToWaypoint_Feedback *
raspbot_patrol__action__GoToWaypoint_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_Feedback * msg = (raspbot_patrol__action__GoToWaypoint_Feedback *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspbot_patrol__action__GoToWaypoint_Feedback));
  bool success = raspbot_patrol__action__GoToWaypoint_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raspbot_patrol__action__GoToWaypoint_Feedback__destroy(raspbot_patrol__action__GoToWaypoint_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raspbot_patrol__action__GoToWaypoint_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raspbot_patrol__action__GoToWaypoint_Feedback__Sequence__init(raspbot_patrol__action__GoToWaypoint_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_Feedback * data = NULL;

  if (size) {
    data = (raspbot_patrol__action__GoToWaypoint_Feedback *)allocator.zero_allocate(size, sizeof(raspbot_patrol__action__GoToWaypoint_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspbot_patrol__action__GoToWaypoint_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspbot_patrol__action__GoToWaypoint_Feedback__fini(&data[i - 1]);
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
raspbot_patrol__action__GoToWaypoint_Feedback__Sequence__fini(raspbot_patrol__action__GoToWaypoint_Feedback__Sequence * array)
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
      raspbot_patrol__action__GoToWaypoint_Feedback__fini(&array->data[i]);
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

raspbot_patrol__action__GoToWaypoint_Feedback__Sequence *
raspbot_patrol__action__GoToWaypoint_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_Feedback__Sequence * array = (raspbot_patrol__action__GoToWaypoint_Feedback__Sequence *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raspbot_patrol__action__GoToWaypoint_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raspbot_patrol__action__GoToWaypoint_Feedback__Sequence__destroy(raspbot_patrol__action__GoToWaypoint_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raspbot_patrol__action__GoToWaypoint_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raspbot_patrol__action__GoToWaypoint_Feedback__Sequence__are_equal(const raspbot_patrol__action__GoToWaypoint_Feedback__Sequence * lhs, const raspbot_patrol__action__GoToWaypoint_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_Feedback__Sequence__copy(
  const raspbot_patrol__action__GoToWaypoint_Feedback__Sequence * input,
  raspbot_patrol__action__GoToWaypoint_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raspbot_patrol__action__GoToWaypoint_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raspbot_patrol__action__GoToWaypoint_Feedback * data =
      (raspbot_patrol__action__GoToWaypoint_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raspbot_patrol__action__GoToWaypoint_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raspbot_patrol__action__GoToWaypoint_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "raspbot_patrol/action/detail/go_to_waypoint__functions.h"

bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__init(raspbot_patrol__action__GoToWaypoint_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    raspbot_patrol__action__GoToWaypoint_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!raspbot_patrol__action__GoToWaypoint_Goal__init(&msg->goal)) {
    raspbot_patrol__action__GoToWaypoint_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__fini(raspbot_patrol__action__GoToWaypoint_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  raspbot_patrol__action__GoToWaypoint_Goal__fini(&msg->goal);
}

bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__are_equal(const raspbot_patrol__action__GoToWaypoint_SendGoal_Request * lhs, const raspbot_patrol__action__GoToWaypoint_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!raspbot_patrol__action__GoToWaypoint_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__copy(
  const raspbot_patrol__action__GoToWaypoint_SendGoal_Request * input,
  raspbot_patrol__action__GoToWaypoint_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!raspbot_patrol__action__GoToWaypoint_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

raspbot_patrol__action__GoToWaypoint_SendGoal_Request *
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_SendGoal_Request * msg = (raspbot_patrol__action__GoToWaypoint_SendGoal_Request *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspbot_patrol__action__GoToWaypoint_SendGoal_Request));
  bool success = raspbot_patrol__action__GoToWaypoint_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__destroy(raspbot_patrol__action__GoToWaypoint_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raspbot_patrol__action__GoToWaypoint_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence__init(raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_SendGoal_Request * data = NULL;

  if (size) {
    data = (raspbot_patrol__action__GoToWaypoint_SendGoal_Request *)allocator.zero_allocate(size, sizeof(raspbot_patrol__action__GoToWaypoint_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspbot_patrol__action__GoToWaypoint_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspbot_patrol__action__GoToWaypoint_SendGoal_Request__fini(&data[i - 1]);
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
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence__fini(raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence * array)
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
      raspbot_patrol__action__GoToWaypoint_SendGoal_Request__fini(&array->data[i]);
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

raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence *
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence * array = (raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence__destroy(raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence__are_equal(const raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence * lhs, const raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence__copy(
  const raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence * input,
  raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raspbot_patrol__action__GoToWaypoint_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raspbot_patrol__action__GoToWaypoint_SendGoal_Request * data =
      (raspbot_patrol__action__GoToWaypoint_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raspbot_patrol__action__GoToWaypoint_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raspbot_patrol__action__GoToWaypoint_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__init(raspbot_patrol__action__GoToWaypoint_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    raspbot_patrol__action__GoToWaypoint_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__fini(raspbot_patrol__action__GoToWaypoint_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__are_equal(const raspbot_patrol__action__GoToWaypoint_SendGoal_Response * lhs, const raspbot_patrol__action__GoToWaypoint_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__copy(
  const raspbot_patrol__action__GoToWaypoint_SendGoal_Response * input,
  raspbot_patrol__action__GoToWaypoint_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

raspbot_patrol__action__GoToWaypoint_SendGoal_Response *
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_SendGoal_Response * msg = (raspbot_patrol__action__GoToWaypoint_SendGoal_Response *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspbot_patrol__action__GoToWaypoint_SendGoal_Response));
  bool success = raspbot_patrol__action__GoToWaypoint_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__destroy(raspbot_patrol__action__GoToWaypoint_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raspbot_patrol__action__GoToWaypoint_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence__init(raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_SendGoal_Response * data = NULL;

  if (size) {
    data = (raspbot_patrol__action__GoToWaypoint_SendGoal_Response *)allocator.zero_allocate(size, sizeof(raspbot_patrol__action__GoToWaypoint_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspbot_patrol__action__GoToWaypoint_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspbot_patrol__action__GoToWaypoint_SendGoal_Response__fini(&data[i - 1]);
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
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence__fini(raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence * array)
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
      raspbot_patrol__action__GoToWaypoint_SendGoal_Response__fini(&array->data[i]);
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

raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence *
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence * array = (raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence__destroy(raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence__are_equal(const raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence * lhs, const raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence__copy(
  const raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence * input,
  raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raspbot_patrol__action__GoToWaypoint_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raspbot_patrol__action__GoToWaypoint_SendGoal_Response * data =
      (raspbot_patrol__action__GoToWaypoint_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raspbot_patrol__action__GoToWaypoint_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raspbot_patrol__action__GoToWaypoint_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
raspbot_patrol__action__GoToWaypoint_GetResult_Request__init(raspbot_patrol__action__GoToWaypoint_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    raspbot_patrol__action__GoToWaypoint_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
raspbot_patrol__action__GoToWaypoint_GetResult_Request__fini(raspbot_patrol__action__GoToWaypoint_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
raspbot_patrol__action__GoToWaypoint_GetResult_Request__are_equal(const raspbot_patrol__action__GoToWaypoint_GetResult_Request * lhs, const raspbot_patrol__action__GoToWaypoint_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_GetResult_Request__copy(
  const raspbot_patrol__action__GoToWaypoint_GetResult_Request * input,
  raspbot_patrol__action__GoToWaypoint_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

raspbot_patrol__action__GoToWaypoint_GetResult_Request *
raspbot_patrol__action__GoToWaypoint_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_GetResult_Request * msg = (raspbot_patrol__action__GoToWaypoint_GetResult_Request *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspbot_patrol__action__GoToWaypoint_GetResult_Request));
  bool success = raspbot_patrol__action__GoToWaypoint_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raspbot_patrol__action__GoToWaypoint_GetResult_Request__destroy(raspbot_patrol__action__GoToWaypoint_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raspbot_patrol__action__GoToWaypoint_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence__init(raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_GetResult_Request * data = NULL;

  if (size) {
    data = (raspbot_patrol__action__GoToWaypoint_GetResult_Request *)allocator.zero_allocate(size, sizeof(raspbot_patrol__action__GoToWaypoint_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspbot_patrol__action__GoToWaypoint_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspbot_patrol__action__GoToWaypoint_GetResult_Request__fini(&data[i - 1]);
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
raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence__fini(raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence * array)
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
      raspbot_patrol__action__GoToWaypoint_GetResult_Request__fini(&array->data[i]);
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

raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence *
raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence * array = (raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence__destroy(raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence__are_equal(const raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence * lhs, const raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence__copy(
  const raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence * input,
  raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raspbot_patrol__action__GoToWaypoint_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raspbot_patrol__action__GoToWaypoint_GetResult_Request * data =
      (raspbot_patrol__action__GoToWaypoint_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raspbot_patrol__action__GoToWaypoint_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raspbot_patrol__action__GoToWaypoint_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "raspbot_patrol/action/detail/go_to_waypoint__functions.h"

bool
raspbot_patrol__action__GoToWaypoint_GetResult_Response__init(raspbot_patrol__action__GoToWaypoint_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!raspbot_patrol__action__GoToWaypoint_Result__init(&msg->result)) {
    raspbot_patrol__action__GoToWaypoint_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
raspbot_patrol__action__GoToWaypoint_GetResult_Response__fini(raspbot_patrol__action__GoToWaypoint_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  raspbot_patrol__action__GoToWaypoint_Result__fini(&msg->result);
}

bool
raspbot_patrol__action__GoToWaypoint_GetResult_Response__are_equal(const raspbot_patrol__action__GoToWaypoint_GetResult_Response * lhs, const raspbot_patrol__action__GoToWaypoint_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!raspbot_patrol__action__GoToWaypoint_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_GetResult_Response__copy(
  const raspbot_patrol__action__GoToWaypoint_GetResult_Response * input,
  raspbot_patrol__action__GoToWaypoint_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!raspbot_patrol__action__GoToWaypoint_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

raspbot_patrol__action__GoToWaypoint_GetResult_Response *
raspbot_patrol__action__GoToWaypoint_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_GetResult_Response * msg = (raspbot_patrol__action__GoToWaypoint_GetResult_Response *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspbot_patrol__action__GoToWaypoint_GetResult_Response));
  bool success = raspbot_patrol__action__GoToWaypoint_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raspbot_patrol__action__GoToWaypoint_GetResult_Response__destroy(raspbot_patrol__action__GoToWaypoint_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raspbot_patrol__action__GoToWaypoint_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence__init(raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_GetResult_Response * data = NULL;

  if (size) {
    data = (raspbot_patrol__action__GoToWaypoint_GetResult_Response *)allocator.zero_allocate(size, sizeof(raspbot_patrol__action__GoToWaypoint_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspbot_patrol__action__GoToWaypoint_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspbot_patrol__action__GoToWaypoint_GetResult_Response__fini(&data[i - 1]);
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
raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence__fini(raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence * array)
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
      raspbot_patrol__action__GoToWaypoint_GetResult_Response__fini(&array->data[i]);
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

raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence *
raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence * array = (raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence__destroy(raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence__are_equal(const raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence * lhs, const raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence__copy(
  const raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence * input,
  raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raspbot_patrol__action__GoToWaypoint_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raspbot_patrol__action__GoToWaypoint_GetResult_Response * data =
      (raspbot_patrol__action__GoToWaypoint_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raspbot_patrol__action__GoToWaypoint_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raspbot_patrol__action__GoToWaypoint_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "raspbot_patrol/action/detail/go_to_waypoint__functions.h"

bool
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__init(raspbot_patrol__action__GoToWaypoint_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    raspbot_patrol__action__GoToWaypoint_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!raspbot_patrol__action__GoToWaypoint_Feedback__init(&msg->feedback)) {
    raspbot_patrol__action__GoToWaypoint_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__fini(raspbot_patrol__action__GoToWaypoint_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  raspbot_patrol__action__GoToWaypoint_Feedback__fini(&msg->feedback);
}

bool
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__are_equal(const raspbot_patrol__action__GoToWaypoint_FeedbackMessage * lhs, const raspbot_patrol__action__GoToWaypoint_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!raspbot_patrol__action__GoToWaypoint_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__copy(
  const raspbot_patrol__action__GoToWaypoint_FeedbackMessage * input,
  raspbot_patrol__action__GoToWaypoint_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!raspbot_patrol__action__GoToWaypoint_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

raspbot_patrol__action__GoToWaypoint_FeedbackMessage *
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_FeedbackMessage * msg = (raspbot_patrol__action__GoToWaypoint_FeedbackMessage *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspbot_patrol__action__GoToWaypoint_FeedbackMessage));
  bool success = raspbot_patrol__action__GoToWaypoint_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__destroy(raspbot_patrol__action__GoToWaypoint_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raspbot_patrol__action__GoToWaypoint_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence__init(raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_FeedbackMessage * data = NULL;

  if (size) {
    data = (raspbot_patrol__action__GoToWaypoint_FeedbackMessage *)allocator.zero_allocate(size, sizeof(raspbot_patrol__action__GoToWaypoint_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspbot_patrol__action__GoToWaypoint_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspbot_patrol__action__GoToWaypoint_FeedbackMessage__fini(&data[i - 1]);
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
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence__fini(raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence * array)
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
      raspbot_patrol__action__GoToWaypoint_FeedbackMessage__fini(&array->data[i]);
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

raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence *
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence * array = (raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence *)allocator.allocate(sizeof(raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence__destroy(raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence__are_equal(const raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence * lhs, const raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence__copy(
  const raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence * input,
  raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raspbot_patrol__action__GoToWaypoint_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raspbot_patrol__action__GoToWaypoint_FeedbackMessage * data =
      (raspbot_patrol__action__GoToWaypoint_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raspbot_patrol__action__GoToWaypoint_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raspbot_patrol__action__GoToWaypoint_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raspbot_patrol__action__GoToWaypoint_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
