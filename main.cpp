#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    cout << "Thanks for downloading Prizzer App" << endl;
    cout << "Do you want to continue?: ";
    cin >> choice;
    scam();

    return 0;
};


void scam() {
    system("ls");
}