// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rbpodo_msgs:srv/Eval.idl
// generated code does not contain a copyright notice

#ifndef RBPODO_MSGS__SRV__DETAIL__EVAL__STRUCT_HPP_
#define RBPODO_MSGS__SRV__DETAIL__EVAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rbpodo_msgs__srv__Eval_Request __attribute__((deprecated))
#else
# define DEPRECATED__rbpodo_msgs__srv__Eval_Request __declspec(deprecated)
#endif

namespace rbpodo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Eval_Request_
{
  using Type = Eval_Request_<ContainerAllocator>;

  explicit Eval_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->script = "";
    }
  }

  explicit Eval_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : script(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->script = "";
    }
  }

  // field types and members
  using _script_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _script_type script;

  // setters for named parameter idiom
  Type & set__script(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->script = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rbpodo_msgs::srv::Eval_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rbpodo_msgs::srv::Eval_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rbpodo_msgs::srv::Eval_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rbpodo_msgs::srv::Eval_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rbpodo_msgs::srv::Eval_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rbpodo_msgs::srv::Eval_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rbpodo_msgs::srv::Eval_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rbpodo_msgs::srv::Eval_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rbpodo_msgs::srv::Eval_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rbpodo_msgs::srv::Eval_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rbpodo_msgs__srv__Eval_Request
    std::shared_ptr<rbpodo_msgs::srv::Eval_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rbpodo_msgs__srv__Eval_Request
    std::shared_ptr<rbpodo_msgs::srv::Eval_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Eval_Request_ & other) const
  {
    if (this->script != other.script) {
      return false;
    }
    return true;
  }
  bool operator!=(const Eval_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Eval_Request_

// alias to use template instance with default allocator
using Eval_Request =
  rbpodo_msgs::srv::Eval_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rbpodo_msgs


#ifndef _WIN32
# define DEPRECATED__rbpodo_msgs__srv__Eval_Response __attribute__((deprecated))
#else
# define DEPRECATED__rbpodo_msgs__srv__Eval_Response __declspec(deprecated)
#endif

namespace rbpodo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Eval_Response_
{
  using Type = Eval_Response_<ContainerAllocator>;

  explicit Eval_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Eval_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rbpodo_msgs::srv::Eval_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rbpodo_msgs::srv::Eval_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rbpodo_msgs::srv::Eval_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rbpodo_msgs::srv::Eval_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rbpodo_msgs::srv::Eval_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rbpodo_msgs::srv::Eval_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rbpodo_msgs::srv::Eval_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rbpodo_msgs::srv::Eval_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rbpodo_msgs::srv::Eval_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rbpodo_msgs::srv::Eval_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rbpodo_msgs__srv__Eval_Response
    std::shared_ptr<rbpodo_msgs::srv::Eval_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rbpodo_msgs__srv__Eval_Response
    std::shared_ptr<rbpodo_msgs::srv::Eval_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Eval_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Eval_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Eval_Response_

// alias to use template instance with default allocator
using Eval_Response =
  rbpodo_msgs::srv::Eval_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rbpodo_msgs

namespace rbpodo_msgs
{

namespace srv
{

struct Eval
{
  using Request = rbpodo_msgs::srv::Eval_Request;
  using Response = rbpodo_msgs::srv::Eval_Response;
};

}  // namespace srv

}  // namespace rbpodo_msgs

#endif  // RBPODO_MSGS__SRV__DETAIL__EVAL__STRUCT_HPP_
