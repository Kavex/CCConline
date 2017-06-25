// https://github.com/Kavex/
// 6/24/2017
//CHAPTER 14 PROGRAMMING 

#ifndef invalidMin_H
#define invalidMin_H
#include "include.h"

class invalidMin
{
public:
	string p; // var to holds the print message

	// constructors 
	invalidMin();
	invalidMin(string str);

	// returns for the string p
	string what(); // used method name from main file
};
#endif