#include "Header.h"
#include "calendarType.h"
// prints full Calendar
void calendarType::printCalendar()
{
	int weekCounter = 1;
	int dayCounter = 1;

	extDateType::getStrDate();
	extDateType::printStrDate();
	findDayOfWeek(dateType::getMonth(), dateType::getDay(), dateType::getYear());
	cout << endl << "Mon     Tue     Wed     Thu     Fri     Sat     Sun" << endl;
	for (int i = 1; i < dayOfWeek; i++)
	{
		cout << "        ";
		weekCounter++;
	}
	for (int i = 1; i < dateType::getDaysInMonth(); i++)
	{
		if (weekCounter <= 7)
		{
			if (dayCounter < 10)
			{
				cout << dayCounter;
				cout << "       ";
			}
			if (dayCounter >= 10)
			{
				cout << dayCounter;
				cout << "      ";
			}
			weekCounter++;
			dayCounter++;
		}
		else
		{
			cout << endl;
			weekCounter = 1;
			if (dayCounter < 10)
			{
				cout << dayCounter;
				cout << "       ";
			}
			if (dayCounter >= 10)
			{
				cout << dayCounter;
				cout << "      ";
			}
			weekCounter++;
		}
	}

}

// finds the day of the week
void calendarType::findDayOfWeek(int month, int day, int year)
{
	static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	year -= day < 3;
	dayOfWeek = (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
	dayOfWeek--;
}
// print var dayOfWeek
void calendarType::printDayOfWeek()
{
	cout << dayOfWeek;
}
// returns var dayOfWeek
int calendarType::getDayOfWeek()
{
	return dayOfWeek;
}


calendarType::calendarType()
{
	dayOfWeek = 0;
}


