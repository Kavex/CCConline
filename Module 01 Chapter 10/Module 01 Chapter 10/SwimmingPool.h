/*
https://github.com/Kavex/
06/03/2017
Module 01 Chapter 10 Swimming Pool
*/
#pragma once

class SwimmingPool
{
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
private:
	double length;
	double width;
	double depth;
	double rate;
	double volume;
	double currentFill;
	double poolSize;
	double fillTime;
	double drainTime;
	double empty;
	double partialFill;
	double partialDrain;

public:
	// Deafault constructor setting everything to zero 
	SwimmingPool();


	/*
	poolVolume() is calulating the volume of the pool (length * width * depth)
	cubicConverter() converts cubic feet to gallons
	setFill() is to set the fill time of the pool ((poolSize - currentFill) / rate))
	getDrain() is the drain time of the pool (currentFill / rate)
	getPartialFill is the time for Partial fill (fill / rate)
	getPartialDrain is the time for Partial drain (drain / rate)
	drainByTime is about of gallons drain by time (rate * time)
	fillByTime is the about of gallons filled by time (rate * time)
	The rest are just setters and getters
	*/
	double poolVolume();
	double cubicConverter();
	void setFill();
	double getDrain();
	double getPartialFill();
	double getPartialDrain();
	double drainByTime(double value);
	double fillByTime(double value);
	double getCurrentFill();
	double getFill();
	double getEmptyAmount();
	void setPartialFill(double value);
	void setPartialDrain(double value);
	void setLength(double value);
	void setWidth(double value);
	void setDepth(double value);
	void setRate(double value);
	void setCurrentFill(double value);
};
