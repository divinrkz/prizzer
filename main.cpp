#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "NetworkTools.h"


#define SHELLSCRIPT "\
#/bin/bash \n\
echo -e \"\" \n\
echo -e \"This is a test shell script inside C code!!\" \n\
read -p \"press <enter> to continue\" \n\
clear\
"

int main() {
    NetworkTools::getIPAddress();

    // int choice;
    // cout << "Thanks for downloading Prizzer App" << endl;
    // cout << "Do you want to continue?: ";
    // cin >> choice;
    // // scam();
    // system(SHELLSCRIPT);


    return 0;
};

