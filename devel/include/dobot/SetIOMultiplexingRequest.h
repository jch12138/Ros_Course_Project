// Generated by gencpp from file dobot/SetIOMultiplexingRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETIOMULTIPLEXINGREQUEST_H
#define DOBOT_MESSAGE_SETIOMULTIPLEXINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dobot
{
template <class ContainerAllocator>
struct SetIOMultiplexingRequest_
{
  typedef SetIOMultiplexingRequest_<ContainerAllocator> Type;

  SetIOMultiplexingRequest_()
    : address(0)
    , multiplex(0)
    , isQueued(false)  {
    }
  SetIOMultiplexingRequest_(const ContainerAllocator& _alloc)
    : address(0)
    , multiplex(0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef uint8_t _address_type;
  _address_type address;

   typedef uint8_t _multiplex_type;
  _multiplex_type multiplex;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;





  typedef boost::shared_ptr< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetIOMultiplexingRequest_

typedef ::dobot::SetIOMultiplexingRequest_<std::allocator<void> > SetIOMultiplexingRequest;

typedef boost::shared_ptr< ::dobot::SetIOMultiplexingRequest > SetIOMultiplexingRequestPtr;
typedef boost::shared_ptr< ::dobot::SetIOMultiplexingRequest const> SetIOMultiplexingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dobot': ['/home/chenway/Documents/test/src/dobot/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fb0052d869cf2237ee918121fdfc9b4d";
  }

  static const char* value(const ::dobot::SetIOMultiplexingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfb0052d869cf2237ULL;
  static const uint64_t static_value2 = 0xee918121fdfc9b4dULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetIOMultiplexingRequest";
  }

  static const char* value(const ::dobot::SetIOMultiplexingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 address\n\
uint8 multiplex\n\
bool isQueued\n\
";
  }

  static const char* value(const ::dobot::SetIOMultiplexingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.address);
      stream.next(m.multiplex);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetIOMultiplexingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetIOMultiplexingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetIOMultiplexingRequest_<ContainerAllocator>& v)
  {
    s << indent << "address: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.address);
    s << indent << "multiplex: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.multiplex);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETIOMULTIPLEXINGREQUEST_H
