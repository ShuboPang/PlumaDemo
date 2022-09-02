#ifndef PLUGINBASE_H
#define PLUGINBASE_H

 #include <Pluma/Pluma.hpp>

class PluginBase
{
public:
    virtual std::string getDescription() const = 0;
};


// create DevicedProvider class
 PLUMA_PROVIDER_HEADER(PluginBase);

#endif // PLUGINBASE_H
