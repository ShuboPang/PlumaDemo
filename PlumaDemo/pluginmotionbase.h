#ifndef PLUGINMOTIONBASE_H
#define PLUGINMOTIONBASE_H

#include "pluginbase.h"

class PluginMotionBase : virtual public PluginBase {
 public:
     PluginMotionBase();
  virtual void motionExec() = 0;
};

#endif  // PLUGINMOTIONBASE_H
