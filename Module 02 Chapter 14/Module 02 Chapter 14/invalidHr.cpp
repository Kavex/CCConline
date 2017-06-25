// https://github.com/Kavex/
// 6/24/2017
//CHAPTER 14 PROGRAMMING 

#include "invalidHr.h"

// Default constructor: Asking to enter in hours between 0 and 12
invalidHr::invalidHr()
{
	p = "Hours must be between 0 and 12: ";
}

// bad input
invalidHr::invalidHr(string value)
{
	p = value + "incorrect input";
}

// returns the var p (print)
string invalidHr::what()
{
	return p;
}