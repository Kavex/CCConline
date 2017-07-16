/*
https://github.com/Kavex/CCConline
7/1/2017
Ch 17 Ex14 Programming
*/
#ifndef H_queueADT
#define H_queueADT

#include <iostream>
#include <string>
using namespace std;

template<class Type>
class queueADT
{
public:
	bool isEmpty(int *first);
	bool isFull(int count, int size);
	int returnFirst(const Type& value);
	int returnLast(const Type& value);

};
#endif

//is it empty? poke it with a stick..
template<class Type>
bool queueADT<Type>::isEmpty(int *first)
{
	if (first == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//is it full? maybe you should have had less
template<class Type>
bool queueADT<Type>::isFull(int count, int size)
{
	if (count == size)
	{
		return true;
	}
	else
	{
		return false;
	}
}


// front of the lunch line
template<class Type>
int queueADT<Type>::returnFirst(const Type& value)
{
	return first;
}

// back of the lunch line, blame your parents for your last name
template<class Type>
int queueADT<Type>::returnLast(const Type& value)
{
	return last;
}