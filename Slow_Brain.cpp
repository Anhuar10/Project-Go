#include <iostream>
#include <iomanip>
#include <math.h>
#include "Slow_Brain.h"

using namespace std;

Slow_Brain::Slow_Brain(int inputState){
	reliability[8] = {	0.999999274,
						0.999923994,
						0.999848351,
						0.98412732,
						0.99995425,
						0.995211502,
						0.990445933,
						0};
	criticality[3] = {}
					
}
void Slow_Brain::Calculate_Criticality(int state, int prevState)
{
	criticality[state] = (criticality[prevState] + (reliability[state]-reliability[prevState])/ 2);
}

void Slow_Brain::Calculate_Priority(double state, int priority[])
{
	
	switch (state)// cases dependednt on state 
	{
	case 0:
	{
		break;// we need to figure out a new way to impliment this 
	}
	case 1:
	{
		priority[0] = 3;
		break;
	}
	case 2:
	{
		priority[0] = 2;
		break;
	}
	case 3:
	{
		priority[0] = 2;
		priority[1] = 3;
		break;
	}
	case 4:
	{
		priority[0] = 1;
		break;
	}
	case 5:
	{
		priority[0] = 3;
		priority[1] = 1;
		break;
	}
	case 6:
	{
		priority[0] = 2;
		priority[1] = 1;
		break;
	}
	case 7:
	{
		priority[] = { 2,3,1 };
		break;
	}
	}
}