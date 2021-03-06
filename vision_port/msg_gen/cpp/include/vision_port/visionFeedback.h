/* Auto-generated by genmsg_cpp for file /home/uwstereo/fuerte_workspace/sandbox/stingray-2-0/vision_port/msg/visionFeedback.msg */
#ifndef VISION_PORT_MESSAGE_VISIONFEEDBACK_H
#define VISION_PORT_MESSAGE_VISIONFEEDBACK_H
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


namespace vision_port
{
template <class ContainerAllocator>
struct visionFeedback_ {
  typedef visionFeedback_<ContainerAllocator> Type;

  visionFeedback_()
  : subtask(0)
  {
  }

  visionFeedback_(const ContainerAllocator& _alloc)
  : subtask(0)
  {
  }

  typedef int32_t _subtask_type;
  int32_t subtask;


  typedef boost::shared_ptr< ::vision_port::visionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vision_port::visionFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct visionFeedback
typedef  ::vision_port::visionFeedback_<std::allocator<void> > visionFeedback;

typedef boost::shared_ptr< ::vision_port::visionFeedback> visionFeedbackPtr;
typedef boost::shared_ptr< ::vision_port::visionFeedback const> visionFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::vision_port::visionFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::vision_port::visionFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace vision_port

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vision_port::visionFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vision_port::visionFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vision_port::visionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d3b6cb31902dafaf24ff7219e217108a";
  }

  static const char* value(const  ::vision_port::visionFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd3b6cb31902dafafULL;
  static const uint64_t static_value2 = 0x24ff7219e217108aULL;
};

template<class ContainerAllocator>
struct DataType< ::vision_port::visionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vision_port/visionFeedback";
  }

  static const char* value(const  ::vision_port::visionFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vision_port::visionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Feedback definition.\n\
int32 subtask\n\
\n\
\n\
";
  }

  static const char* value(const  ::vision_port::visionFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vision_port::visionFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vision_port::visionFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.subtask);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct visionFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vision_port::visionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::vision_port::visionFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "subtask: ";
    Printer<int32_t>::stream(s, indent + "  ", v.subtask);
  }
};


} // namespace message_operations
} // namespace ros

#endif // VISION_PORT_MESSAGE_VISIONFEEDBACK_H

