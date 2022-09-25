#ifndef PLUGINBASE_H
#define PLUGINBASE_H

#include <Pluma/Pluma.hpp>

class PluginBase {
 public:
  PluginBase();
  virtual ~PluginBase();
  virtual std::string getPluginName() const = 0;
  virtual std::string getDescription() const = 0;

  uint32_t getPluginType() { return type; }

 protected:
  uint32_t type;
};

// create DevicedProvider class
PLUMA_PROVIDER_HEADER(PluginBase);

#endif  // PLUGINBASE_H
