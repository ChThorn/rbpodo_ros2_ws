// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rbpodo_msgs:srv/TaskPause.idl
// generated code does not contain a copyright notice

#ifndef RBPODO_MSGS__SRV__DETAIL__TASK_PAUSE__STRUCT_HPP_
#define RBPODO_MSGS__SRV__DETAIL__TASK_PAUSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rbpodo_msgs__srv__TaskPause_Request __attribute__((deprecated))
#else
# define DEPRECATED__rbpodo_msgs__srv__TaskPause_Request __declspec(deprecated)
#endif

namespace rbpodo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskPause_Request_
{
  using Type = TaskPause_Request_<ContainerAllocator>;

  explicit TaskPause_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TaskPause_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rbpodo_msgs__srv__TaskPause_Request
    std::shared_ptr<rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rbpodo_msgs__srv__TaskPause_Request
    std::shared_ptr<rbpodo_msgs::srv::TaskPause_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskPause_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskPause_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskPause_Request_

// alias to use template instance with default allocator
using TaskPause_Request =
  rbpodo_msgs::srv::TaskPause_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rbpodo_msgs


#ifndef _WIN32
# define DEPRECATED__rbpodo_msgs__srv__TaskPause_Response __attribute__((deprecated))
#else
# define DEPRECATED__rbpodo_msgs__srv__TaskPause_Response __declspec(deprecated)
#endif

namespace rbpodo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskPause_Response_
{
  using Type = TaskPause_Response_<ContainerAllocator>;

  explicit TaskPause_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit TaskPause_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rbpodo_msgs__srv__TaskPause_Response
    std::shared_ptr<rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rbpodo_msgs__srv__TaskPause_Response
    std::shared_ptr<rbpodo_msgs::srv::TaskPause_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskPause_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskPause_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskPause_Response_

// alias to use template instance with default allocator
using TaskPause_Response =
  rbpodo_msgs::srv::TaskPause_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rbpodo_msgs

namespace rbpodo_msgs
{

namespace srv
{

struct TaskPause
{
  using Request = rbpodo_msgs::srv::TaskPause_Request;
  using Response = rbpodo_msgs::srv::TaskPause_Response;
};

}  // namespace srv

}  // namespace rbpodo_msgs

#endif  // RBPODO_MSGS__SRV__DETAIL__TASK_PAUSE__STRUCT_HPP_
