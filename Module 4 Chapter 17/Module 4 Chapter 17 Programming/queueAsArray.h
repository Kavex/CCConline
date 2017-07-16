/*
https://github.com/Kavex/CCConline
7/1/2017
Ch 17 Ex14 Programming
*/
#ifndef H_queueAsArray
#define H_queueAsArray

#include <iostream>
#include <string>
#include "queueADT.h"

template<class Type>
class queueAsArray: public queueADT<Type>
{
public:
	//constructors
	queueAsArray(int value);
	queueAsArray();
   void initQueue(int value);  //init queue
   void addToQueue(const Type& info);   // add to queu
   void pushToFront(); // pushes to the front
   void print(); // print out queue from front to back
  
private:
   int *queue, first, last; // holds the queue dynamic and first value and last value 
   bool full; // holds if full is true
   bool empty;  // holds if empty is true
   int front, back; // front and back index
   int count, size; // count value and size of the queue
  
};
#endif

//initializes queue
// Sets the size of the queue and nulls or makes all the values 0.
// Makes the queue array from the max size
template<class Type>
void queueAsArray<Type>::initQueue(int value)
{
	size = value;
	queue = new int[size]; //create queue array
	queue[0] = NULL; // set the first queue element to Null
	first = queue[0];
	last = queue[0];
	front = 0;
	back = 0;
}

// Adds to the queue
// if queue is not full check is queue is maxed out or not add accordingly
template<class Type>
void queueAsArray<Type> ::addToQueue(const Type& value)
{
	// Check if not full
	if (!isFull(count, size)) 
	{
		// check if front and back are not equal
		if (front != back)
		{
			// check if we are maxed out
			if (back == size - 1) 
			{
				back = 0;
				queue[back] = value; // set queue with the element value from back 
				last = queue[back]; // set last value with the value from queue[back]
				count++;
			}
			else // size is not maxed out
			{
				queue[back] = value;  // set queue with the element value from back 
				last = queue[back]; // set last value with the value from queue[back]
				back++;
				count++;
			}
		}
		// queue must be empty
		else
		{
			queue[back] = value;  // set queue with the element value from back 
			last = queue[back];  // set last value with the value from queue[back]
			first = queue[back]; // set first value with the value from queue[back]
			back++;
			count++;
		}
	}
	// queue must be full
	else
	{
		cout << "The queue is full" << endl;
	}
}

//Print out queue from front to back
template<class Type>
void queueAsArray<Type>::print()//print the queue data
{
   int value = front; // store the value of front

   // prints from front to back
   for (value = front; value < back - 1; value++)
   {
       cout << queue[value] << " ";
   }
   cout << endl;
}

// pushes the value to the front
// User enters the element being moved 
// check the element postions with front until we can move it onto the queue
template<class Type>
void queueAsArray<Type> ::pushToFront()
{
	//stores the value being moved and holds the position
	int number, position;
	cout << "What element do you want moved to the front?: ";
	cin >> position;
	cout << endl;

	// check is user entered a vaild numbers
	if (position < 0 || position > size - 1)
	{
		do
		{
			cout << "Please reneter in a vaild number that is between " << front << "and " << back - 1 << " : ";
			cin >> position;
			cout << endl;
		} while (position < 0 || position > size - 1);
	}
	position += front - 1; // add the front value minus 1 to the position current value
    number = queue[position]; // store the value being moved
	while (position >= front)
	{
		if (position > front)
		{
			queue[position] = queue[position - 1]; // change the position element
			position--;
		}
		else if (position == front)
		{
			queue[position] = number; // store numbers value in the queue
			position--;
		}
	}
}
template<class Type>

// run the init
queueAsArray<Type> ::queueAsArray(int value)
{
   do
   {
	   if (value > 0)
       {
		   initQueue(value); // Make all the magic
       }
       else // um problem 
       {
		   cout << "Error: Please enter in a number greater then 0: ";
           cin >> value;
           cout << endl;
       }
   }while(size < 0);
}

// Has user enter in data
template<class Type>
queueAsArray<Type> ::queueAsArray()
{
   int value;
   cout << "Enter the array size: ";
   cin >> value;
   cout << endl;
   do
   {
	   if (value > 0);
	   {
		   initQueue(value); // Make all the magic
	   }
	   else // um problem 
	   {
		   cout << "Error: Please enter in a number greater then 0: ";
		   cin >> value;
		   cout << endl;
		   size = value;
	   }
   } while (size < 0);
}