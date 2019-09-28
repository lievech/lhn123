// Generated by gencpp from file anm_msgs/V2XStopSign.msg
// DO NOT EDIT!


#ifndef ANM_MSGS_MESSAGE_V2XSTOPSIGN_H
#define ANM_MSGS_MESSAGE_V2XSTOPSIGN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace anm_msgs
{
template <class ContainerAllocator>
struct V2XStopSign_
{
  typedef V2XStopSign_<ContainerAllocator> Type;

  V2XStopSign_()
    : id(0)
    , position()
    , yaw(0.0)
    , effect_length(0.0)  {
    }
  V2XStopSign_(const ContainerAllocator& _alloc)
    : id(0)
    , position(_alloc)
    , yaw(0.0)
    , effect_length(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef double _yaw_type;
  _yaw_type yaw;

   typedef double _effect_length_type;
  _effect_length_type effect_length;





  typedef boost::shared_ptr< ::anm_msgs::V2XStopSign_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::anm_msgs::V2XStopSign_<ContainerAllocator> const> ConstPtr;

}; // struct V2XStopSign_

typedef ::anm_msgs::V2XStopSign_<std::allocator<void> > V2XStopSign;

typedef boost::shared_ptr< ::anm_msgs::V2XStopSign > V2XStopSignPtr;
typedef boost::shared_ptr< ::anm_msgs::V2XStopSign const> V2XStopSignConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::anm_msgs::V2XStopSign_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::anm_msgs::V2XStopSign_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace anm_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'dbw_mkz_msgs': ['/home/lhn/hhh_ws/src/car_simulation_interface/msgs/dbw_mkz_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'anm_msgs': ['/home/lhn/hhh_ws/src/car_simulation_interface/msgs/anm_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::anm_msgs::V2XStopSign_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::anm_msgs::V2XStopSign_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::anm_msgs::V2XStopSign_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::anm_msgs::V2XStopSign_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::anm_msgs::V2XStopSign_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::anm_msgs::V2XStopSign_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::anm_msgs::V2XStopSign_<ContainerAllocator> >
{
  static const char* value()
  {
    return "72f27a0ddc174ecc9ec3a9297776ac86";
  }

  static const char* value(const ::anm_msgs::V2XStopSign_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x72f27a0ddc174eccULL;
  static const uint64_t static_value2 = 0x9ec3a9297776ac86ULL;
};

template<class ContainerAllocator>
struct DataType< ::anm_msgs::V2XStopSign_<ContainerAllocator> >
{
  static const char* value()
  {
    return "anm_msgs/V2XStopSign";
  }

  static const char* value(const ::anm_msgs::V2XStopSign_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::anm_msgs::V2XStopSign_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Stop sign custom header\n\
#\n\
# id            = ID of stop sign (for multiple stop signs)\n\
# position      = x y position in odom frame (meters)\n\
# yaw           = heading in radians north of east\n\
# effect_length = length of the \"fence line\" for stop sign (meters)\n\
\n\
uint32 id\n\
geometry_msgs/Point position\n\
float64 yaw\n\
float64 effect_length\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::anm_msgs::V2XStopSign_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::anm_msgs::V2XStopSign_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.position);
      stream.next(m.yaw);
      stream.next(m.effect_length);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct V2XStopSign_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::anm_msgs::V2XStopSign_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::anm_msgs::V2XStopSign_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
    s << indent << "effect_length: ";
    Printer<double>::stream(s, indent + "  ", v.effect_length);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ANM_MSGS_MESSAGE_V2XSTOPSIGN_H