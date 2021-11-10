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
\t 6. Exit program\n\n";

	cout << menu;
	cout << "Input Menu Choice: ";

	cin >> choice;
}

void ProcessMenuChocie(int chocie, int& value)
{
	int digits = 0, Digit = 0, Position = 0;
	switch (chocie)
	{
	case 1:
		IsPosNeg(value);
		break;
	case 2:
		IsOddEven(value);
		break;
	case 3:
		digits = FindNumDigits(value);
		cout << value << " has " << digits << " digits.\n";
		break;
	case 4:
		FindDigitAtPosition(Digit, Position, NumberDigit, Numberindex);
		break;
	case 5:
		DisplayAdditonTable();
		break;
	case 6:
		break;
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

void GetData(int& Number)
{
	cout << "\n-----Input a number between negative one million and one million to be tested-----\n";
	cin >> Number;
	while (Number > 1000000 || Number < -1000000)
	{
		cout << "\nYou did not enter a number in between the designated values, try again: \n\n" << endl;
		cin >> Number;
	}
	cout << "\nYou entered the value: " << Number << endl;
}

void IsOddEven(int& Number)
{
	cout << "\n\nCalculating if the number entered is even, odd, or 0\n\n";

	if (Number % 2 == 0 && Number != 0)
		cout << Number << " is even.\n\n";
	else if (Number % 2 == 1 && Number != 0)
		cout << Number << " is odd.\n\n";
	else if (Number == 0)
		cout << "This number is a 0.\n\n";
}

void FindDigitAtPosition(int Digit, int Position, string& NumberDigit, char& Numberindex)
{
	cout << "\nWhat is the number you want to find the digit position of:\n\n";
	cin >> NumberDigit;

	cout << "what position of that number do you want to see where that digit is outputted ? \n";
	cin >> Position;

	Numberindex = NumberDigit[Position - 1];

	cout << "Your digit is " << Numberindex;
}
