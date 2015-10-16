/*
 * SwingSplineTrajectoryRosWrapper.hpp
 *
 *  Created on: Mar 6, 2015
 *      Author: Péter Fankhauser
 *   Institute: ETH Zurich, Autonomous Systems Lab
 */

#pragma once

// Free Gait
#include "free_gait_core/free_gait_core.hpp"

// ROS
#include <trajectory_msgs/MultiDOFJointTrajectory.h>

// STD
#include <string>

namespace free_gait {

class SwingFootTrajectoryRosWrapper : public SwingFootTrajectory
{
 public:
  SwingFootTrajectoryRosWrapper();
  virtual ~SwingFootTrajectoryRosWrapper();

  bool fromMessage(const trajectory_msgs::MultiDOFJointTrajectory& message, const std::string& jointName);
};

} /* namespace */