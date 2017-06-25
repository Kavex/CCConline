/*
https://github.com/Kavex/
6/9/17
Module 01 Programming Discussion
Chapter 10: Exercise 11
*/
#include <string>
#include <iostream>
using namespace std;

class memberType
{
private:
	// Name of the Customer, Their member ID to keep track of records,
	// Amount of of books that have been bought, and how much the customer has spent.
	string name;
	int memberID;
	int bookPurchase;
	double amountSpent;
public:
	// Default constructor 
	memberType();

	// Getters
	string getName() const;
	int getMemberID() const;
	int getBookPurchase() const;
	double getAmountSpent() const;

	//Setters
	void setName(string value);
	void setMemberID(int value);
	void setBookPurchase(int value);
	void setAmountSpent(double value);

	//Modify
	void modName(string value);
	void modBookPurchase(int value);
	void modAmountSpent(double value);

};

int main(void)
{
	// single member to add data too
	memberType member01;
	// int inputs for the console
	int userInput = 0, userSelection = 0;
	// int input for the console
	string nameInput = "null";
	// double inout for the console
	double spentInput = 0.0;

	cout << "Please enter a name of the customer: ";
	cin >> nameInput;
	member01.setName(nameInput);
	cout << "Please enter the ID of the customer: ";
	cin >> userInput;
	member01.setMemberID(userInput);
	cout << "Please enter the amount of books purchased: ";
	cin >> userInput;
	member01.setBookPurchase(userInput);
	cout << "Please enter the amount spent: ";
	cin >> spentInput;
	member01.setAmountSpent(spentInput);

	do
	{
		cout << endl << "Please select from the following commands" << endl;
		cout << "1: List Member Infomation" << endl;
		cout << "2: Modify Customer Records" << endl;
		cout << "3: Quit" << endl;
		cout << "Selection: ";
		cin >> userSelection;

		if (userSelection == 1)
		{
			// This prints all of member01's infomation
			cout << "Name: " << member01.getName() << endl;
			cout << "Member ID: " << member01.getMemberID() << endl;
			cout << "Book Amount: " << member01.getBookPurchase() << endl;
			cout << "Spent Amount: $" << member01.getAmountSpent() << endl;
		}
		else if (userSelection == 2)
		{
			cout << endl << "What would you like to Modify?" << endl;
			cout << "1: Name" << endl;
			cout << "2: Book amount" << endl;
			cout << "3: Spent amount" << endl;
			cout << "Selection: ";
			cin >> userSelection;
			if (userSelection == 1)
			{
				// Updates member01's name
				cout << "Please enter a name of the customer: ";
				cin >> nameInput;
				member01.modName(nameInput);
			}
			else if (userSelection == 2)
			{
				// Updates member01's book amount
				cout << "Please enter the amount of books purchased: ";
				cin >> userInput;
				member01.modBookPurchase(userInput);
			}
			else if (userSelection == 3)
			{
				// Updates member01's spent amount
				cout << "Please enter the amount spent: $";
				cin >> spentInput;
				member01.modAmountSpent(spentInput);
			}
			else
			{
				cout << "Wrong selection, returning to main menu" << endl;
			}
			userSelection = 2; // setting back to 2 so it doesn't trip the do while
		}
		else if (userSelection == 3)
		{
			// exit program
			exit(0);
		}
		else
		{
			cout << "You picked a wrong selection" << endl;
		}
	} while (userSelection != 3);
	return 0;
}

// Default constructor setting everything to an empty value instead of null because it's easier to read the return when not just a null value;
memberType::memberType()
{
	name = "none";
	memberID = 0;
	bookPurchase = 0;
	amountSpent = 0.0;
}

// Getters Fuctions: : Name, Member ID, Book Purchases, Spent amount
string memberType::getName() const
{
	return name;
}
int memberType::getMemberID() const
{
	return memberID;
}
int memberType::getBookPurchase() const
{
	return bookPurchase;
}
double memberType::getAmountSpent() const
{
	return amountSpent;
}

//Setters Fuctions: Name, Member ID, Book Purchases, Spent amount
void memberType::setName(string setNameValue)
{
	name = setNameValue;
}
void memberType::setMemberID(int setMemberIDValue)
{
	memberID = setMemberIDValue;
}
void memberType::setBookPurchase(int setBookPurchaseValue)
{
	bookPurchase = setBookPurchaseValue;
}
void memberType::setAmountSpent(double setAmountSpentValue)
{
	amountSpent = setAmountSpentValue;
}

//Modify Fuctions: Name, Book Purchases, Spent amount
void memberType::modName(string modNameValue)
{
	name = modNameValue;
}
void memberType::modBookPurchase(int modBookPurchaseValue)
{
	bookPurchase = modBookPurchaseValue;
}
void memberType::modAmountSpent(double modAmountSpentValue)
{
	amountSpent = modAmountSpentValue;
}