#pragma once

#include <pandar_msgs/PandarPacket.h>
#include <fstream>
#include <vector>
#include "pandar_pointcloud/point_types.hpp"

namespace pandar_pointcloud
{
class PacketDecoder
{
public:
  virtual ~PacketDecoder(){};
  virtual void unpack(const pandar_msgs::PandarPacket & raw_packet) = 0;
  virtual bool hasScanned() = 0;
  virtual PointcloudXYZIRADT getPointcloud() = 0;
};
}  // namespace pandar_pointcloud