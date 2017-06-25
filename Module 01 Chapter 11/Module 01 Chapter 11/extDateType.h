/*
https://github.com/Kavex/
6/10/2017
Module 01 Chapter 11
*/
#pragma once
#include "Header.h"
#include "dateType.h"
class extDateType : 
	public dateType
{
public:

	// print the with month string
	void printStrDate();
	// print deafult date
	void printNumDate();
	// print string month and year
	void printMonthYear();
	// convert int month to string
	void convertString(int month);
	// return monthString
	string getStrDate() const;
	extDateType();

private:
	string monthString; // value for month in string form 

};

