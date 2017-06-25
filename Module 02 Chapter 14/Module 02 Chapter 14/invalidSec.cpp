// https://github.com/Kavex/
// 6/24/2017
//CHAPTER 14 PROGRAMMING 

#include "invalidSec.h"

// Default constructor: Asking to enter in seconds between 0 and 60
invalidSec::invalidSec()
{
	p = "Seconds must be between 0 and 60: ";
}

// bad input
invalidSec::invalidSec(string value)
{
	p = value + "incorrent input";
}

// returns the var p (print)
string invalidSec::what()
{
	return p;
}
