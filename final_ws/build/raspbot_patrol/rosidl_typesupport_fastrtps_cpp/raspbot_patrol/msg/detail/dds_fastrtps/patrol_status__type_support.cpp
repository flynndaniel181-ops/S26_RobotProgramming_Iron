// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from raspbot_patrol:msg/PatrolStatus.idl
// generated code does not contain a copyright notice
#include "raspbot_patrol/msg/detail/patrol_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "raspbot_patrol/msg/detail/patrol_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace raspbot_patrol
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raspbot_patrol
cdr_serialize(
  const raspbot_patrol::msg::PatrolStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: obstacle_distance
  cdr << ros_message.obstacle_distance;
  // Member: patrol_state
  cdr << ros_message.patrol_state;
  // Member: current_waypoint
  cdr << ros_message.current_waypoint;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raspbot_patrol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raspbot_patrol::msg::PatrolStatus & ros_message)
{
  // Member: obstacle_distance
  cdr >> ros_message.obstacle_distance;

  // Member: patrol_state
  cdr >> ros_message.patrol_state;

  // Member: current_waypoint
  cdr >> ros_message.current_waypoint;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raspbot_patrol
get_serialized_size(
  const raspbot_patrol::msg::PatrolStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: obstacle_distance
  {
    size_t item_size = sizeof(ros_message.obstacle_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: patrol_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.patrol_state.size() + 1);
  // Member: current_waypoint
  {
    size_t item_size = sizeof(ros_message.current_waypoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raspbot_patrol
max_serialized_size_PatrolStatus(
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


  // Member: obstacle_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: patrol_state
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

  // Member: current_waypoint
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
    using DataType = raspbot_patrol::msg::PatrolStatus;
    is_plain =
      (
      offsetof(DataType, current_waypoint) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PatrolStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const raspbot_patrol::msg::PatrolStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PatrolStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<raspbot_patrol::msg::PatrolStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PatrolStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const raspbot_patrol::msg::PatrolStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PatrolStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PatrolStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PatrolStatus__callbacks = {
  "raspbot_patrol::msg",
  "PatrolStatus",
  _PatrolStatus__cdr_serialize,
  _PatrolStatus__cdr_deserialize,
  _PatrolStatus__get_serialized_size,
  _PatrolStatus__max_serialized_size
};

static rosidl_message_type_support_t _PatrolStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PatrolStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace raspbot_patrol

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_raspbot_patrol
const rosidl_message_type_support_t *
get_message_type_support_handle<raspbot_patrol::msg::PatrolStatus>()
{
  return &raspbot_patrol::msg::typesupport_fastrtps_cpp::_PatrolStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raspbot_patrol, msg, PatrolStatus)() {
  return &raspbot_patrol::msg::typesupport_fastrtps_cpp::_PatrolStatus__handle;
}

#ifdef __cplusplus
}
#endif
