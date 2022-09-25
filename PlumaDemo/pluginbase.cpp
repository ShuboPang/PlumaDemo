#include "pluginbase.h"

// generate DevicedProvider with version 6, and compatible with at least v.3
PLUMA_PROVIDER_SOURCE(PluginBase, 6, 3);

PluginBase::PluginBase()
{
    type = 0;
}

PluginBase::~PluginBase()
{

}

