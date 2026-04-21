// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raspbot_patrol:msg/PatrolStatus.idl
// generated code does not contain a copyright notice
#include "raspbot_patrol/msg/detail/patrol_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raspbot_patrol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raspbot_patrol/msg/detail/patrol_status__struct.h"
#include "raspbot_patrol/msg/detail/patrol_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // patrol_state
#include "rosidl_runtime_c/string_functions.h"  // patrol_state

// forward declare type support functions


using _PatrolStatus__ros_msg_type = raspbot_patrol__msg__PatrolStatus;

static bool _PatrolStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PatrolStatus__ros_msg_type * ros_message = static_cast<const _PatrolStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: obstacle_distance
  {
    cdr << ros_message->obstacle_distance;
  }

  // Field name: patrol_state
  {
    const rosidl_runtime_c__String * str = &ros_message->patrol_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: current_waypoint
  {
    cdr << ros_message->current_waypoint;
  }

  return true;
}

static bool _PatrolStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PatrolStatus__ros_msg_type * ros_message = static_cast<_PatrolStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: obstacle_distance
  {
    cdr >> ros_message->obstacle_distance;
  }

  // Field name: patrol_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->patrol_state.data) {
      rosidl_runtime_c__String__init(&ros_message->patrol_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->patrol_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'patrol_state'\n");
      return false;
    }
  }

  // Field name: current_waypoint
  {
    cdr >> ros_message->current_waypoint;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspbot_patrol
size_t get_serialized_size_raspbot_patrol__msg__PatrolStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PatrolStatus__ros_msg_type * ros_message = static_cast<const _PatrolStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name obstacle_distance
  {
    size_t item_size = sizeof(ros_message->obstacle_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name patrol_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->patrol_state.size + 1);
  // field.name current_waypoint
  {
    size_t item_size = sizeof(ros_message->current_waypoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PatrolStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspbot_patrol__msg__PatrolStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspbot_patrol
size_t max_serialized_size_raspbot_patrol__msg__PatrolStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: obstacle_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: patrol_state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: current_waypoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = raspbot_patrol__msg__PatrolStatus;
    is_plain =
      (
      offsetof(DataType, current_waypoint) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PatrolStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_raspbot_patrol__msg__PatrolStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PatrolStatus = {
  "raspbot_patrol::msg",
  "PatrolStatus",
  _PatrolStatus__cdr_serialize,
  _PatrolStatus__cdr_deserialize,
  _PatrolStatus__get_serialized_size,
  _PatrolStatus__max_serialized_size
};

static rosidl_message_type_support_t _PatrolStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PatrolStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspbot_patrol, msg, PatrolStatus)() {
  return &_PatrolStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
