#ifndef TEST1_H
#define TEST1_H

#include <Pluma/Pluma.hpp>
#include "pluginbase.h"

class Test1 : public PluginBase{
public:
    std::string getDescription() const{
        return "lib   Test1";
    }
};

PLUMA_INHERIT_PROVIDER(Test1, PluginBase);

#endif // TEST1_H
