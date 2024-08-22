// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/RoverAckermannStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/rover_ackermann_status__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/rover_ackermann_status__functions.h"
#include "px4_msgs/msg/detail/rover_ackermann_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__RoverAckermannStatus__init(message_memory);
}

void RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_fini_function(void * message_memory)
{
  px4_msgs__msg__RoverAckermannStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_message_member_array[4] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RoverAckermannStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle_setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RoverAckermannStatus, throttle_setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RoverAckermannStatus, steering_setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actual_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RoverAckermannStatus, actual_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_message_members = {
  "px4_msgs__msg",  // message namespace
  "RoverAckermannStatus",  // message name
  4,  // number of fields
  sizeof(px4_msgs__msg__RoverAckermannStatus),
  RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_message_member_array,  // message members
  RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_message_type_support_handle = {
  0,
  &RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, RoverAckermannStatus)() {
  if (!RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_message_type_support_handle.typesupport_identifier) {
    RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RoverAckermannStatus__rosidl_typesupport_introspection_c__RoverAckermannStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
