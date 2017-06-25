// https://github.com/Kavex/
// 6/24/17
// Module 02 Chapter 13

class myArray
{
private:
	int *arrayPointer;
	int arraySize;
	int index1, index2;
public:
	myArray(int value);
	myArray(int value2, int value1);
	int& operator[] (const int value);
};
