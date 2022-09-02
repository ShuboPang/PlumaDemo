#include "test1.h"
 #include <Pluma/Connector.hpp>

PLUMA_CONNECTOR
bool connect(pluma::Host& host){
    // add a keyboard provider to host
    host.add( new Test1Provider() );
    return true;
}
