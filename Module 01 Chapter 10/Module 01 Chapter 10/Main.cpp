/*
https://github.com/Kavex/
06/03/2017
Module 01 Chapter 10 Swimming Pool
*/

#include <iostream>
using namespace std;
#include "SwimmingPool.h"

int main(void)
{
	SwimmingPool pool;
	double selection;
	int menu = 0;
	cout << "Welcome to the pool calculation tool." << endl;
	cout << "Set length of the pool in feet : ";
	cin >> selection;
	pool.setLength(selection);
	cout << "Set width of the pool in feet: ";
	cin >> selection;
	pool.setWidth(selection);
	cout << "Set depth of the pool in feet: ";
	cin >> selection;
	pool.setDepth(selection);
	cout << "Pool volume is " << pool.poolVolume() << " cubic feet." << endl;
	cout << "Pool can hold " << pool.cubicConverter() << " gallons of water." << endl;
	cout << "How many gallons of water are currently in the pool?: ";
	cin >> selection;
	pool.setCurrentFill(selection);
	cout << "What is the rate of the water filling or draining? (Gallons per Min): ";
	cin >> selection;
	pool.setRate(selection);
	pool.setFill();
	do
	{
		cout << endl << "Please select from the following menu" << endl << "1. Completely fill or drain" << endl << "2. Partially fill or drain" << endl << "3. Fill or drain by time" << endl << "4. Exit" << endl;
		cout << "Selection: ";
		cin >> menu;

		if (menu == 1)
		{
			cout << "You can fill the pool with " << pool.getEmptyAmount() << " gallons which would take " << pool.getFill() << " minutes to totally fill it." << endl;
			cout << "The pool has " << pool.getCurrentFill() << " gallons still in it and will take " << pool.getDrain() << " minutes to drain." << endl;
		}
		if (menu == 2)
		{
			cout << "How many gallons would you like to fill?: ";
			cin >> selection;
			pool.setPartialFill(selection);
			cout << "That would take " << pool.getPartialFill() << " minutes to fill " << selection << " gallons." << endl;
			cout << "How many gallons would you like to drain?: ";
			cin >> selection;
			pool.setPartialDrain(selection);
			cout << "That would take " << pool.getPartialDrain() << " minutes to fill " << selection << " gallons." << endl;
		}
		if (menu == 3)
		{
			cout << "how many many minutes would you like fill the pool?: ";
			cin >> selection;
			cout << selection << " minutes would fill " << pool.fillByTime(selection) << " gallons." << endl;
			cout << "how many many minutes would you like drain the pool?: ";
			cin >> selection;
			cout << selection << " minutes would drain " << pool.drainByTime(selection) << " gallons." << endl;
		}
		if (menu == 4)
		{
			exit(0);
		}
	} while (menu != 4);
	return 0;
}