// https://github.com/Kavex/
// 6/24/2017
//CHAPTER 14 PROGRAMMING

#ifndef invalidSec_H
#define invalidSec_H
#include "include.h"

class invalidSec
{
public:
	string p; // var to holds the print message

	// constructors 
	invalidSec();
	invalidSec(string str);

	// returns for the string p
	string what(); // used method name from main file
};
#endif