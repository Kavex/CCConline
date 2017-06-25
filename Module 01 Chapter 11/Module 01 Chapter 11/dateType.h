/*
https://github.com/Kavex/
6/10/2017
Module 01 Chapter 11
*/
#pragma once
#include "Header.h"
class dateType
{
public:
	// methods from book's dateType
	void setDate(int month, int day, int year);
	int getDay();
	int getMonth();
	int getYear();
	void printDate();

	// Makes an array with all the days in each month
	void makeMonthArray();
	// checks if dates are in within reasonable numbers
	void checkDate(int month, int day, int year);
	// checks if day is valid in the month
	bool compareDaysInMonth(int month, int day);
	// checks for leapyear
	bool isLeapYear(int year);
	// returns days in current month
	int getDaysInMonth();
	// finds what day it is in the future 
	void findFutureDate(int days);
	// find how many days have passed in current year
	void findDaysPassed();

	// check for month, day and year
	bool checkMonth(int month);
	bool checkDay(int day);
	bool checkYear(int year);

	// set month, day and year
	void setMonth(int month);
	void setDay(int day);
	void setYear(int year);

	// print days passed
	void printDaysPassed() const;
	// print days left
	void printDaysLeft() const;
	// prints the day in the future 
	void printFutureDate() const;
	// prints how many days in current month
	void printDaysInMonth()const;
	dateType(int month = 6, int day = 10, int year = 2017);
private:
	int dMonth; //variable to store the month
	int dDay;   //variable to store the day
	int dYear;  //variable to store the year
	bool leapYear; //variable to store if leap year
	int daysPreMonth[13];
	int futureDate[3];
};
