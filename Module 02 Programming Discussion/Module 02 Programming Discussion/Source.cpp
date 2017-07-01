/*
Kerrigan Taiga
Ch 14 Ex 1
Write a program that prompts the user to enter a length in feet and inches
and outputs the equivalent length in centimeters. If the user enters a negative
number or a nondigit number, throw and handle an appropriate exception
and prompt the user to enter another set of numbers
*/
#include <iostream>
using namespace std;

int main(void) {

	int ft = -1, length = 0; // variable for feet, length
	double cent = 0, inch = -1 ; // variable for centimeters, inches
	do
	{
		try
		{
			cout << "Enter in the amount of feet: ";
			cin >> ft;
			if (ft < 0) // if feet is less that 0 then throw
			{
				throw(ft);
			}
			cout << "Enter in the amount of inches: ";
			cin >> inch;
			if (inch < 0) // if inches is less that 0 or greater then 12 then throw
			{
				throw(inch);
			}
		}
		catch (int ft)  // Catch if feet is wrong
		{
			cout << "Invalid entry: Please reenter feet: ";
			cin >> ft;
		}
		catch (double inch) // Catch if inches is wrong
		{
			cout << "Invalid entry: Please reenter inches: ";
			cin >> inch;
		}
	} while (ft < 0 || inch < 0);
	length = (ft * 12) + inch; // Convert feet into inches so we can convert it
	cent = length * 2.54; // For every inch it's 2.54 centimeters, converts inches to centimeters
	cout << "You enter in " << ft << " feet and " << inch << " inches which makes a total of " << length << " inches" << endl;
	cout << "This makes " << cent << " centimeters" << endl;
	system("PAUSE");
	return 0;
}
