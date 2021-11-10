// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Written by Jacob Knox
//

#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int num = 0, choice = 0;
    GetData(num);

    while (choice != 6)
    {
        DisplayMenu(choice);
        ProcessMenuChocie(choice, num);
    }

    cout << "Exiting Program...";
}
