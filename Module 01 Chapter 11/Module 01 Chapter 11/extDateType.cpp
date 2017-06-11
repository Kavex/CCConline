#include "Header.h"
#include "extDateType.h"

// print the with month string
void extDateType::printStrDate()
{
	cout << extDateType::getStrDate()
		<< " " << dateType::getDay()
		<< ", " << dateType::getYear();
}

// print deafult date
void extDateType::printNumDate()
{
	cout << dateType::getMonth()
		<< "-" << dateType::getDay()
		<< "-" << dateType::getYear();
}

// print string month and year
void extDateType::printMonthYear()
{
	cout << extDateType::getStrDate() << " " << dateType::getYear();
}

// convert int month to string
void extDateType::convertString(int month)
{
	monthString = to_string(month);
	if (monthString == "1") monthString = "January";
	if (monthString == "2") monthString = "February";
	if (monthString == "3") monthString = "March";
	if (monthString == "4") monthString = "April";
	if (monthString == "5") monthString = "May";
	if (monthString == "6") monthString = "June";
	if (monthString == "7") monthString = "July";
	if (monthString == "8") monthString = "August";
	if (monthString == "9") monthString = "September";
	if (monthString == "10") monthString = "October";
	if (monthString == "11") monthString = "November";
	if (monthString == "12") monthString = "December";
}

// return monthString
string extDateType::getStrDate() const
{
	return monthString;
}


extDateType::extDateType()
{
	convertString(dateType::getMonth());
}