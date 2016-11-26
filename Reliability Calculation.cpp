// Reliability Calculation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <math.h>
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	double a,b;
	int j, i;
	int state[8] = { 0,1,2,3,4,5,6,7 };
	double reliabilityArray[3] = {};
	double stateReliability[7] = {};
	int MTBF[3] = { 1500, 5000,2500 };
	for (j = 0; j < 3; j++)
	{
		a = -24.0 / MTBF[j];
		reliabilityArray[j] = exp(a);
		cout << "Reliability[" << j << "]: " << reliabilityArray[j] << endl;
	}

    return 0;
					
	//Reliability Table put into array instead of doing calculations in code
	// double reliability [8]: {0.999999274,0.999923994,0.999848351, 0.98412732, 0.99995425, 0.995211502, 0.990445933};
}

