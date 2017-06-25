// https://github.com/Kavex/
// 6/24/2017
//CHAPTER 14 PROGRAMMING 

#ifndef invalidHr_H
#define invalidHr_H
#include "include.h"

class invalidHr
{
public:
	string p; // var to holds the print message

	// constructors 
	invalidHr();
	invalidHr(string str);

	// returns for the string p
	string what(); // used method name from main file
};
#endif