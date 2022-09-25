#ifndef TEST1_H
#define TEST1_H

#include <Pluma/Pluma.hpp>
#include "pluginappbase.h"
#include "pluginmotionbase.h"
#include <iostream>

class Test1 : public PluginAppBase,public PluginMotionBase {
public:
//    Test1();
    ~Test1();
    std::string getPluginName() const override {
        return "Test1";
    }
    std::string getDescription() const override{
        return "lib   Test1";
    }

    void appExec() override{
        std::cout<<"App exec!"<<std::endl;
    }

    void motionExec() override{
        std::cout<<"Motion exec!"<<std::endl;
    }
};

PLUMA_INHERIT_PROVIDER(Test1, PluginBase);

#endif // TEST1_H
