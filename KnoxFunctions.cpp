// functions for the project written by Jacob Knox
// email Jacob.Knox@oit.edu

#include "header.h"
#include <string>
#include <iostream>

using namespace std;

void DisplayMenu(int& choice)
{
	const string menu =
		"\t\t\t--MENU--\n\n\
\t 1. Is the value positive or negative\n\
\t 2. Is the value odd or even\n\
\t 3. How many digits does the value have\n\
\t 4. See the digit at a specifed position\n\
\t 5. Show additon table\n\
\t 6. Show multiplication table\n\
\t 7. Exit program\n\n";

	cout << menu;
	cout << "Input Menu Choice: ";

	cin >> choice;
}

void ProcessMenuChocie(int chocie, int& value)
{
	int digits = 0;
	switch (chocie)
	{
	case 1:
		IsPosNeg(value);
		break;
	case 2:
	case 3:
		digits = FindNumDigits(value);
		cout << value << " has " << digits << " digits.\n";
		break;
	case 4:
	case 5:
		DisplayAdditonTable();
		break;
	case 6:
	case 7:
		return;
	default:
		cout << "Unknown Menu Choice. Please input a number between 1 and 6";
		return;
	}
}

void IsPosNeg(int value)
{
	if (value == 0)
	{
		cout << value << " is not positive or negative.\n";
	}
	else if (value < 0)
	{
		cout << value << " is negative.\n";
	}
	else
	{
		cout << value << " is positve.\n";
	}
}

int FindNumDigits(int value)
{
	int digits;
	// truncated log of an int is the number of digits
	digits = (int) log(value);
	return digits;
}

void DisplayAdditonTable()
{
	cout << "The addition table for numbers 0-12:\n";
	for (int i = 0; i <= 12; i++)
	{
		for (int j = 0; j <= 12; j++)
		{
			// if block makes it so numbers are spaced evenly
			int sum = i + j;
			if (sum >= 10)
			{
				cout << sum << " ";
			}
			else 
			{
				cout << sum << "  ";
			}
		}
		cout << "\n";
	}
}
