#include <iostream>
#include "Pluma/Pluma.hpp"
#include "pluginbase.h"

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

        std::cout << providers.at(0)->getVersion()<<"  "<<test1Plugin->getDescription() << std::endl;
         // and delete it in the end
        delete test1Plugin;
    }
    return 0;
}
