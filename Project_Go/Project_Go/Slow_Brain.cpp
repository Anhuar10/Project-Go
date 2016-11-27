#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include "Slow_Brain.h"

using namespace std;

Slow_Brain::Slow_Brain(int inputState,int previousState, int Priority){
    reliability[0] = 	0.999999274;
    reliability[1] = 	0.999923994;
    reliability[2] =    0.999848351;
    reliability[3] = 	0.98412732;
    reliability[4] = 	0.99995425;
    reliability[5] = 	0.995211502;
    reliability[6] = 	0.990445933;
	reliability[7] = 	0;

criticality[0] = 0.999999;

					
}
void Slow_Brain::Calculate_Criticality(int state, int prevState)
{
	criticality[state] = (criticality[prevState] + (reliability[state]-reliability[prevState])/ 2);
}

int Slow_Brain::Calculate_Priority(int state, int priority)
{
	int light = priority + 1;
	
	switch (state)// cases dependednt on state 
	{
		case 0:
		{
			break;
		}
		case 1:
		{
			priority = 2;
			break;
		}
		case 2:
		{
			priority = 1;
			break;
		}
		case 3:
		{
			priority = 1;
			break;
		}
		case 4:
		{
			priority = 0;
			break;
		}
		case 5:
		{
			priority = 2;
			break;
		}
		case 6:
		{
			priority = 1;
			break;
		}
		case 7:
		{
			priority = 1;
			break;
		}
	}

	cout << "\n\nPriority is light " << light << "\n\n";
	return priority;
}