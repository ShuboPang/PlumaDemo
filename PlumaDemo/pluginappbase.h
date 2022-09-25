#ifndef PLUGINAPPBASE_H
#define PLUGINAPPBASE_H

#include "pluginbase.h"

class PluginAppBase : virtual public PluginBase {
 public:
     PluginAppBase();
  virtual void appExec() = 0;
};

#endif  // PLUGINAPPBASE_H
