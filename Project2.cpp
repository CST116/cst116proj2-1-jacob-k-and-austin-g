// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Written by Jacob Knox
//

#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int num = 10, choice = 0;
    while (choice != 7)
    {
        DisplayMenu(choice);
        ProcessMenuChocie(choice, num);
    }
}
