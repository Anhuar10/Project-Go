#pragma once
#ifndef SLOW_BRAIN_H
#define SLOW_BRAIN_H

class Slow_Brain
{
public:
	// Constructor
	Slow_Brain(int, int, int);
	void Calculate_Criticality(int, int);
	void Calculate_Priority(int, int);

protected:
	int state;
	int prevState;
	double reliability[8];
	double criticality[8];
	int priority;

};




#endif 
