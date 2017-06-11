/*
Kerrigan Taiga
6/10/2017
Module 01 Chapter 11
*/
#include <iostream>
#include "calendarType.h"
using namespace std;

int main(void)
{
	calendarType dateObject;
	int selection = -1;

	/*cout << "Date from dateType is: ";
	dateObject.dateType::printDate(); cout << endl;
	cout << "Please set a new date" << endl;
	cout << "Month: ";
	cin >> selection;
	dateObject.dateType::setMonth(selection);
	cout << "Day: ";
	cin >> selection;
	dateObject.dateType::setDay(selection);
	cout << "Year: ";
	cin >> selection;
	dateObject.dateType::setYear(selection);
	cout << endl << "Your new date is ";
	dateObject.dateType::printDate();
	cout << endl << "Days in current month: ";
	dateObject.dateType::printDaysInMonth();
	cout << endl << "Total days passed this year: ";
	dateObject.dateType::printDaysPassed();
	cout << endl << "Total days left this year: ";
	dateObject.dateType::printDaysLeft();
	cout << endl;
	dateObject.printStrDate();
	cout << endl;
	dateObject.printNumDate();
	cout << endl;
	dateObject.printMonthYear();
	cout << endl;
	dateObject.findDayOfWeek(6, 10, 2017);
	dateObject.printDayOfWeek(); cout << endl;
	printf("%d", dateObject.getDayOfWeek());*/
	dateObject.printCalendar();
	while (selection != 2)
	{
		cout << endl;
		cout << "Would you like to select another date?" << endl;
		cout << "1: Enter new date" << endl;
		cout << "2: Quit" << endl;
		cout << "Selection: ";
		cin >> selection;
		if (selection != 2)
		{
			cout << endl << "Please set a new date" << endl;
			cout << "Month: ";
			dateObject.dateType::setMonth(selection);
			cout << "Day: ";
			cin >> selection;
			dateObject.dateType::setDay(selection);
			cout << "Year: ";
			cin >> selection;
			dateObject.dateType::setYear(selection);
			dateObject.printCalendar();
		}
		else
		{
			exit(0);
		}

	}
	

	
	cout << endl;  system("PAUSE");
	return 0;
}