<<<<<<< HEAD
/* Auto-generated by genmsg_cpp for file /home/perry/fuerte_workspace/sandbox/stingray-2-0/mission_controller/msg/TargetWaypoints.msg */
=======
/* Auto-generated by genmsg_cpp for file /home/uwstereo/fuerte_workspace/sandbox/stingray-2-0/mission_controller/msg/TargetWaypoints.msg */
>>>>>>> ddc2ab950663a2edcc5d16708bce3684d5e6b40a
#ifndef MISSION_CONTROLLER_MESSAGE_TARGETWAYPOINTS_H
#define MISSION_CONTROLLER_MESSAGE_TARGETWAYPOINTS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace mission_controller
{
template <class ContainerAllocator>
struct TargetWaypoints_ {
  typedef TargetWaypoints_<ContainerAllocator> Type;

  TargetWaypoints_()
  : target_surge(0.0)
  , target_lat(0.0)
  , target_lon(0.0)
  , target_depth(0.0)
  {
  }

  TargetWaypoints_(const ContainerAllocator& _alloc)
  : target_surge(0.0)
  , target_lat(0.0)
  , target_lon(0.0)
  , target_depth(0.0)
  {
  }

  typedef double _target_surge_type;
  double target_surge;

  typedef double _target_lat_type;
  double target_lat;

  typedef double _target_lon_type;
  double target_lon;

  typedef double _target_depth_type;
  double target_depth;


  typedef boost::shared_ptr< ::mission_controller::TargetWaypoints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mission_controller::TargetWaypoints_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TargetWaypoints
typedef  ::mission_controller::TargetWaypoints_<std::allocator<void> > TargetWaypoints;

typedef boost::shared_ptr< ::mission_controller::TargetWaypoints> TargetWaypointsPtr;
typedef boost::shared_ptr< ::mission_controller::TargetWaypoints const> TargetWaypointsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::mission_controller::TargetWaypoints_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::mission_controller::TargetWaypoints_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace mission_controller

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::mission_controller::TargetWaypoints_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::mission_controller::TargetWaypoints_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::mission_controller::TargetWaypoints_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6ef3b92c6a5c0d62a34442009ffdad56";
  }

  static const char* value(const  ::mission_controller::TargetWaypoints_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6ef3b92c6a5c0d62ULL;
  static const uint64_t static_value2 = 0xa34442009ffdad56ULL;
};

template<class ContainerAllocator>
struct DataType< ::mission_controller::TargetWaypoints_<ContainerAllocator> > {
  static const char* value() 
  {
    return "mission_controller/TargetWaypoints";
  }

  static const char* value(const  ::mission_controller::TargetWaypoints_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::mission_controller::TargetWaypoints_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 target_surge\n\
float64 target_lat\n\
float64 target_lon\n\
float64 target_depth\n\
\n\
";
  }

  static const char* value(const  ::mission_controller::TargetWaypoints_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::mission_controller::TargetWaypoints_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::mission_controller::TargetWaypoints_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.target_surge);
    stream.next(m.target_lat);
    stream.next(m.target_lon);
    stream.next(m.target_depth);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TargetWaypoints_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mission_controller::TargetWaypoints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::mission_controller::TargetWaypoints_<ContainerAllocator> & v) 
  {
    s << indent << "target_surge: ";
    Printer<double>::stream(s, indent + "  ", v.target_surge);
    s << indent << "target_lat: ";
    Printer<double>::stream(s, indent + "  ", v.target_lat);
    s << indent << "target_lon: ";
    Printer<double>::stream(s, indent + "  ", v.target_lon);
    s << indent << "target_depth: ";
    Printer<double>::stream(s, indent + "  ", v.target_depth);
  }
};


} // namespace message_operations
} // namespace ros

#endif // MISSION_CONTROLLER_MESSAGE_TARGETWAYPOINTS_H

