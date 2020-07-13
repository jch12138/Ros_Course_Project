// Generated by gencpp from file dobot/GetIOADCResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETIOADCRESPONSE_H
#define DOBOT_MESSAGE_GETIOADCRESPONSE_H


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
struct GetIOADCResponse_
{
  typedef GetIOADCResponse_<ContainerAllocator> Type;

  GetIOADCResponse_()
    : result(0)
    , value(0)  {
    }
  GetIOADCResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , value(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef uint16_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::dobot::GetIOADCResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetIOADCResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetIOADCResponse_

typedef ::dobot::GetIOADCResponse_<std::allocator<void> > GetIOADCResponse;

typedef boost::shared_ptr< ::dobot::GetIOADCResponse > GetIOADCResponsePtr;
typedef boost::shared_ptr< ::dobot::GetIOADCResponse const> GetIOADCResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetIOADCResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetIOADCResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::GetIOADCResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetIOADCResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetIOADCResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetIOADCResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetIOADCResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetIOADCResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetIOADCResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2ffd984d3fca195a74ab7da83be34073";
  }

  static const char* value(const ::dobot::GetIOADCResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2ffd984d3fca195aULL;
  static const uint64_t static_value2 = 0x74ab7da83be34073ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetIOADCResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetIOADCResponse";
  }

  static const char* value(const ::dobot::GetIOADCResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetIOADCResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
uint16 value\n\
\n\
";
  }

  static const char* value(const ::dobot::GetIOADCResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetIOADCResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetIOADCResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetIOADCResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetIOADCResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "value: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETIOADCRESPONSE_H
