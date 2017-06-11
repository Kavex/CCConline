#pragma once
#include "Header.h"
#include "extDateType.h"
class calendarType :
	public extDateType
{
public:
	// prints full Calendar
	void printCalendar();
	// finds the day of the week
	void findDayOfWeek(int month, int day, int year);
	// print var dayOfWeek
	void printDayOfWeek();
	// returns var dayOfWeek
	int getDayOfWeek();
	calendarType();
private:
	int dayOfWeek; // value for the day of the week
};

