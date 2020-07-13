// Generated by gencpp from file dobot/SetDeviceNameResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETDEVICENAMERESPONSE_H
#define DOBOT_MESSAGE_SETDEVICENAMERESPONSE_H


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
struct SetDeviceNameResponse_
{
  typedef SetDeviceNameResponse_<ContainerAllocator> Type;

  SetDeviceNameResponse_()
    : result(0)  {
    }
  SetDeviceNameResponse_(const ContainerAllocator& _alloc)
    : result(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::dobot::SetDeviceNameResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetDeviceNameResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetDeviceNameResponse_

typedef ::dobot::SetDeviceNameResponse_<std::allocator<void> > SetDeviceNameResponse;

typedef boost::shared_ptr< ::dobot::SetDeviceNameResponse > SetDeviceNameResponsePtr;
typedef boost::shared_ptr< ::dobot::SetDeviceNameResponse const> SetDeviceNameResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetDeviceNameResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetDeviceNameResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::SetDeviceNameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetDeviceNameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetDeviceNameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetDeviceNameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetDeviceNameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetDeviceNameResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetDeviceNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const ::dobot::SetDeviceNameResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetDeviceNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetDeviceNameResponse";
  }

  static const char* value(const ::dobot::SetDeviceNameResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetDeviceNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
\n\
";
  }

  static const char* value(const ::dobot::SetDeviceNameResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetDeviceNameResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetDeviceNameResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetDeviceNameResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetDeviceNameResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETDEVICENAMERESPONSE_H