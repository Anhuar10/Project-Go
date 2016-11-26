#include <iostream>
#include <iomanip>
#include <math.h>
#include "Slow_Brain.h"

using namespace std;


double Slow_Brain::Calculate_Criticality(Slow_Brain s)
{
	double r, c;
	// r = reliability
	// c = criticality
	r = s.reliability[s.state];
	c = (0.999999274 - r) / 2;
	return c;
}

int Slow_Brain::Calculate_Priority(Slow_Brain s)
{
	double priority[2] = {};// delcaring an array with 3 spaces 
	switch (s.state)// cases dependednt on state 
	{
	case 0:
	{
		return 0;// we need to figure out a new way to impliment this 
	}
	case 1:
	{
		return priority[0] = 3;
	}
	case 2:
	{
		return priority[0] = 2;
	}
	case 3:
	{
		priority[0] = 2;
		priority[1] = 3;
		return *priority;// not sure if this is a pointer i.e. "*" when i put it on it removes the error
	}
	case 4:
	{
		return priority[0] = 1;
	}
	case 5:
	{
		priority[0] = 3;
		priority[1] = 1;
		return *priority;
	}
	case 6:
	{
		priority[0] = 2;
		priority[1] = 1;
		return *priority;
	}
	case 7:
	{
		priority[] = { 2,3,1 };
		return *priority;
	}
	}
}