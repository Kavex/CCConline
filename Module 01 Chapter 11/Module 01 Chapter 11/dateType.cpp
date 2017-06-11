#include "Header.h"
#include "dateType.h"

// methods from book's dateType
void dateType::setDate(int month, int day, int year)
{
	dMonth = month;
	dDay = day;
	dYear = year;
}
int dateType::getDay()
{
	return dDay;
}
int dateType::getMonth()
{
	return dMonth;
}
int dateType::getYear() 
{
	return dYear;
}
void dateType::printDate()
{
	cout << dMonth << "-" << dDay << "-" << dYear;
}
// Makes an array with all the days in each month
void dateType::makeMonthArray()
{
	daysPreMonth[0] = 0; // used to store the day # out of the whole year;
	daysPreMonth[1] = 31; daysPreMonth[2] = 28; daysPreMonth[3] = 31;
	daysPreMonth[4] = 30; daysPreMonth[5] = 31; daysPreMonth[6] = 30;
	daysPreMonth[7] = 31; daysPreMonth[8] = 31; daysPreMonth[9] = 30;
	daysPreMonth[10] = 31; daysPreMonth[11] = 30; daysPreMonth[12] = 31;
	if (leapYear == true)
	{
		daysPreMonth[2] = 29;
	}
}
// checks if dates are in within reasonable numbers
void dateType::checkDate(int month, int day, int year)
{
	if (checkMonth(month) && checkDay(day) && checkYear(year))
	{
		if (compareDaysInMonth(month, day) == true)
		{
			setDate(month, day, year);
			findDaysPassed();
		}
	}
	else
	{
		cout << "Error in day or month";
	}
}
// checks if day is valid in the month
bool dateType::compareDaysInMonth(int month, int day)
{
	// Jan, Mar, May, Jul, Aug, Oct, Dec  (31 days)
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day < 32)
		{
			return true;
		}
	}
	// Apr, Jun, Sep, Nov  (30 days)
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day < 31)
		{
			return true;
		}
	}
	else if (month == 2) // Feb (28/29 days)
	{
		if (day < 29 || (leapYear == true && day < 30))
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}
// checks for leapyear
bool dateType::isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				leapYear = true;
			}
			else
			{
				leapYear = false;
			}
		}
		else
		{
			leapYear = true;
		}
	}
	else
	{
		leapYear = false;
	}
	return leapYear;
}
// returns days in current month
int dateType::getDaysInMonth()
{
	return daysPreMonth[dMonth];
}
// finds what day it is in the future 
void dateType::findFutureDate(int days)
{
	futureDate[0] = dMonth;
	futureDate[1] = dDay + days;
	futureDate[2] = dYear;
	while (futureDate[1] > daysPreMonth[futureDate[0]])
	{
		futureDate[1] -= daysPreMonth[futureDate[0]];
		if (futureDate[0] != 12)
		{
			futureDate[0] += 1;
		}
		else
		{
			futureDate[0] = 1;
			futureDate[2] += 1;
		}
	}
}
// find how many days have passed in current year
void dateType::findDaysPassed()
{
	daysPreMonth[0] = dDay;
	for (int i = 1; i < dMonth; i++)
	{
		daysPreMonth[0] += daysPreMonth[i];
	}
}

// check for month, day and year
bool dateType::checkMonth(int month)
{
	if (month > 0 || month < 32)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool dateType::checkDay(int day)
{
	if (day > 0 && day < 32)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool dateType::checkYear(int year)
{
	if (year > 0 && year <= 9999)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// set month, day and year
void dateType::setMonth(int month)
{
	if (checkMonth(month) == true)
	{
		dMonth = month;
	}
	else
	{
		cout << "Error in setting month";
	}
}
void dateType::setDay(int day)
{
	if (checkDay(day) == true)
	{
		if (compareDaysInMonth(dMonth, day) == true)
		{
			dDay = day;
		}
		else
		{
			cout << "Error: Day set is greater than this current has" << endl;
		}
	}
	else
	{
		cout << "Error: Day is greater then be in any month" << endl;
	}
	findDaysPassed();
}
void dateType::setYear(int year)
{
	if (checkYear(year) == true)
	{
		dYear = year;
	}
	else
	{
		cout << "Error in setting year" << endl;
	}
}
// print days passed
void dateType::printDaysPassed() const
{
	cout << daysPreMonth[0];
}
// print days left
void dateType::printDaysLeft() const
{
	cout << 365 - daysPreMonth[0];
}
// prints the day in the future 
void dateType::printFutureDate() const
{
	cout << futureDate[0] << "-" << futureDate[1] << "-" << futureDate[2];
}
// prints how many days in current month
void dateType::printDaysInMonth() const
{
	cout << daysPreMonth[dMonth];
}

dateType::dateType(int month, int day, int year)
{
	makeMonthArray();
	isLeapYear(getYear());
	checkDate(month, day, year);
}