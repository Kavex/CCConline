/*
https://github.com/Kavex/CCConline
07/01/207
Module 03 Chapter 15
*/

#include<string>
#include <iostream>
using namespace std;

bool palindrome(string value);

int main(void)
{
	string stringValue = ""; // holds the string the users inputs
	cout << "Enter in a string: ";
	cin >> stringValue;

	cout << stringValue;

	if (palindrome(stringValue)) // runs the func palindrome which return true or false 
	{
		cout << " is palindrome" << endl;
	}
	else
	{
		cout << " is not palindrome" << endl;
	}

	system("PAUSE");
}

// checks the string and if true returns palindrome
bool palindrome(string value)
{
	if (value.length() <= 1) // check if string has a value in it 
	{
		return true;
	}
	else
	{
		if (value.at(0) != value.at(value.length() - 1))	// this checks the string 
		{
			return false;
		}
		else
		{
			return palindrome(value.substr(1, value.length() - 2));	// recursive 
		}
	}
}