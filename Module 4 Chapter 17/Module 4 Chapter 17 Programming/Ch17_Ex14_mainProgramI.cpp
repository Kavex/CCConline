/*
https://github.com/Kavex/CCConline
7/1/2017
Ch 17 Ex14 Programming
*/
#include "queueAsArray.h"

int main()
{
	queueAsArray<int> Queue(100);
	int number;
	int data[8] = { 5, 11, 34, 67, 43, 55, 62, 88 };

	for (number = 0; number <= 8; number++)
	{
		Queue.addToQueue(data[number]);
	}

	Queue.print();
	Queue.pushToFront();
	Queue.print();
	system("pause");
	return 0;
};