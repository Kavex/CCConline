// https://github.com/Kavex/
// 6/24/2017
//CHAPTER 14 PROGRAMMING 

#include "invalidMin.h"

// Default constructor: Asking to enter in seconds minutes 0 and 60
invalidMin::invalidMin()
{
	p = "Minutes must be between 0 and 60: ";
}

// bad input
invalidMin::invalidMin(string value)
{
	p = value + "Invalid input.";
}

// returns the var p (print)
string invalidMin::what()
{
	return p;
}