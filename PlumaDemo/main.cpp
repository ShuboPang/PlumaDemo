#include <iostream>
#include "Pluma/Pluma.hpp"
#include "pluginbase.h"
#include "pluginappbase.h"
#include "pluginmotionbase.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    pluma::Pluma plugins;
    // Tell plugins manager to accept providers of the type DeviceProvider
    plugins.acceptProviderType<PluginBaseProvider>();

    // Load library "standard_devices" from folder "plugins"
    plugins.load("plugins", "libtest1");
    // Get device providers into a vector
    std::vector<PluginBaseProvider*> providers;
    plugins.getProviders(providers);

    if (!providers.empty()){
        PluginBase* test1Plugin = providers.at(0)->create();
        // do something with myDevice

        PluginAppBase* app_plugin = dynamic_cast<PluginAppBase*>(test1Plugin);
        app_plugin->appExec();

        PluginMotionBase* motion_plugin = dynamic_cast<PluginMotionBase*>(test1Plugin);
        motion_plugin->motionExec();

        uint32_t plugin_type = test1Plugin->getPluginType();

        std::cout <<"plugin Type"<<plugin_type<< std::endl;
        std::cout << providers.at(0)->getVersion()<<"  "<<test1Plugin->getDescription() << std::endl;
         // and delete it in the end
        delete test1Plugin;
    }
    return 0;
}
