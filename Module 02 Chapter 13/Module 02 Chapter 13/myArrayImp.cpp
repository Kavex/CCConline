// https://github.com/Kavex/
// 6/24/17
// Module 02 Chapter 13

#include "myArray.h"

myArray::myArray(int value) // constructor with single argument  
{
	if (value > 0)
	{
		arraySize = value; // Adds the size of the array 
		arrayPointer = new int(arraySize); // Makes an array with the size from the constructor
		index1 = value - 1;
		index2 = 0;
		for (int i = 0; i < arraySize; i++)  // sets the array to 0 
		{
			arrayPointer[i] = 0;
		}
	}
}
myArray::myArray(int value2, int value1) // constructor with two arguments  
{
	arraySize = (value1 - value2); // Adds the size of the array 
	arrayPointer = new int(arraySize); // Makes an array with the size from the constructor
	index1 = value1;
	index2 = value2;
	for (int i = 0; i < arraySize; i++) // sets the array to 0 
	{
		arrayPointer[i] = 0;
	}
}
int& myArray::operator[] (const int value)
{
	int location = (index2 - value);
	return arrayPointer[location]
}