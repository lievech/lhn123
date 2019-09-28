// Generated by gencpp from file lanelet_map_msgs/Way.msg
// DO NOT EDIT!


#ifndef LANELET_MAP_MSGS_MESSAGE_WAY_H
#define LANELET_MAP_MSGS_MESSAGE_WAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <lanelet_map_msgs/Node.h>

namespace lanelet_map_msgs
{
template <class ContainerAllocator>
struct Way_
{
  typedef Way_<ContainerAllocator> Type;

  Way_()
    : type()
    , points()  {
    }
  Way_(const ContainerAllocator& _alloc)
    : type(_alloc)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::vector< ::lanelet_map_msgs::Node_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::lanelet_map_msgs::Node_<ContainerAllocator> >::other >  _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::lanelet_map_msgs::Way_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lanelet_map_msgs::Way_<ContainerAllocator> const> ConstPtr;

}; // struct Way_

typedef ::lanelet_map_msgs::Way_<std::allocator<void> > Way;

typedef boost::shared_ptr< ::lanelet_map_msgs::Way > WayPtr;
typedef boost::shared_ptr< ::lanelet_map_msgs::Way const> WayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lanelet_map_msgs::Way_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lanelet_map_msgs::Way_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lanelet_map_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'lanelet_map_msgs': ['/home/lhn/hhh_ws/src/car_simulation_interface/msgs/lanelet_map_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lanelet_map_msgs::Way_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lanelet_map_msgs::Way_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lanelet_map_msgs::Way_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lanelet_map_msgs::Way_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lanelet_map_msgs::Way_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lanelet_map_msgs::Way_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lanelet_map_msgs::Way_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ffd83bddc53a02e7b5a88e26ceab3da";
  }

  static const char* value(const ::lanelet_map_msgs::Way_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ffd83bddc53a02eULL;
  static const uint64_t static_value2 = 0x7b5a88e26ceab3daULL;
};

template<class ContainerAllocator>
struct DataType< ::lanelet_map_msgs::Way_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lanelet_map_msgs/Way";
  }

  static const char* value(const ::lanelet_map_msgs::Way_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lanelet_map_msgs::Way_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string type\n\
Node[] points\n\
\n\
================================================================================\n\
MSG: lanelet_map_msgs/Node\n\
int32 id\n\
string type\n\
geometry_msgs/Point point\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::lanelet_map_msgs::Way_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lanelet_map_msgs::Way_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Way_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lanelet_map_msgs::Way_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lanelet_map_msgs::Way_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::lanelet_map_msgs::Node_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LANELET_MAP_MSGS_MESSAGE_WAY_H