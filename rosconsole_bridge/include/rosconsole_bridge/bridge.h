/*********************************************************************
* Software License Agreement (BSD License)
*
*  Copyright (c) 2011, Willow Garage, Inc.
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*   * Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*   * Redistributions in binary form must reproduce the above
*     copyright notice, this list of conditions and the following
*     disclaimer in the documentation and/or other materials provided
*     with the distribution.
*   * Neither the name of the Willow Garage nor the names of its
*     contributors may be used to endorse or promote products derived
*     from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
*  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
*  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
*  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
*  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
*  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*********************************************************************/

/* Author: Ioan Sucan */

#ifndef ROSCONSOLE_BRIDGE_
#define ROSCONSOLE_BRIDGE_

#include <ros/macros.h>
#include <console_bridge/console.h>

#ifdef ROS_BUILD_SHARED_LIBS // ros is being built around shared libraries
  #ifdef rosconsole_bridge_EXPORTS // we are building a shared lib/dll
    #define ROSCONSOLE_BRIDGE_DECL ROS_HELPER_EXPORT
  #else // we are using shared lib/dll
    #define ROSCONSOLE_BRIDGE_DECL ROS_HELPER_IMPORT
  #endif
#else // ros is being built around static libraries
  #define ROSCONSOLE_BRIDGE_DECL
#endif

namespace rosconsole_bridge
{

class OutputHandlerROS : public console_bridge::OutputHandler
{
public:
  OutputHandlerROS(void);
  virtual void log(const std::string &text, console_bridge::LogLevel level, const char *filename, int line);
};

struct ROSCONSOLE_BRIDGE_DECL RegisterOutputHandlerProxy
{
  RegisterOutputHandlerProxy(void);
  ~RegisterOutputHandlerProxy();
};

}

#define REGISTER_ROSCONSOLE_BRIDGE                                      \
  static rosconsole_bridge::RegisterOutputHandlerProxy __register_rosconsole_output_handler_proxy

#endif
