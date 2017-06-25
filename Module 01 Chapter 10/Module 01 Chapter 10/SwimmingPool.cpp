/*
https://github.com/Kavex/
06/03/2017
Module 01 Chapter 10 Swimming Pool
*/
#include "SwimmingPool.h"

/*
length is for the length of the pool
width is for the width of the pool
depth is for the depth of the pool
rate is for the rate of the water fill or drain
volume is used to change the pool cubic feet to gallons
currentFill is the current about of water in the pool
poolSize is the gallons size of the pool
fillTime is fill time of the pool
drainTime is the drain time of the pool
empty space in the pool
*/
SwimmingPool::SwimmingPool()
{
	length = 0.0;
	width = 0.0;
	depth = 0.0;
	rate = 0.0;
	volume = 0.0;
	currentFill = 0.0;
	poolSize = 0.0;
	fillTime = 0.0;
	drainTime = 0.0;
	empty = 0.0;
	partialFill = 0.0;
	partialDrain = 0.0;
}

/*
poolVolume() is calulating the volume of the pool (length * width * depth)
cubicConverter() converts cubic feet to gallons
setFill() is to set the fill time of the pool ((poolSize - currentFill) / rate))
getDrain() is the drain time of the pool (currentFill / rate)
getPartialFill is the time for Partial fill
getPartialDrain is the time for Partial drain
drainByTime is about of gallons drain by time
fillByTime is the about of gallons filled by time
The rest are just setters and getters
*/
double SwimmingPool::poolVolume()
{
	volume = length * width * depth;
	return volume;
}

double SwimmingPool::cubicConverter()
{
	poolSize = volume * 7.48052;  // 1 cubic feet = 7.48052 gallons
	return poolSize;
}
void SwimmingPool::setFill()
{
	empty = poolSize - currentFill;
	fillTime = empty / rate;
}
double SwimmingPool::getDrain()
{
	drainTime = currentFill / rate;
	return drainTime;
}
double SwimmingPool::getPartialFill()
{
	double partialRate;
	partialRate = partialFill / rate;

	return partialRate;
}
double SwimmingPool::getPartialDrain()
{
	double partialRate;
	partialRate = partialDrain / rate;

	return partialRate;
}
double SwimmingPool::drainByTime(double value)
{
	double timeDrainPool = rate * value;
	return timeDrainPool;
}
double SwimmingPool::fillByTime(double value)
{
	double timeFillPool = rate * value;
	return timeFillPool;
}
double SwimmingPool::getCurrentFill()
{
	return currentFill;
}
double SwimmingPool::getFill()
{
	return fillTime;
}
double SwimmingPool::getEmptyAmount()
{
	return empty;
}

/*---------Setters------------*/
void SwimmingPool::setPartialFill(double value)
{
	partialFill = value;
}
void SwimmingPool::setPartialDrain(double value)
{
	partialDrain = value;
}
void SwimmingPool::setLength(double value)
{
	length = value;
}
void SwimmingPool::setWidth(double value)
{
	width = value;
}
void SwimmingPool::setDepth(double value)
{
	depth = value;
}
void SwimmingPool::setRate(double value)
{
	rate = value;
}
void SwimmingPool::setCurrentFill(double value)
{
	currentFill = value;
}