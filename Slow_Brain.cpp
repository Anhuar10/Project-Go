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
	
	double reliability [8]= {0.999999274,0.999923994,0.999848351, 0.98412732, 0.99995425, 0.995211502, 0.990445933,0};//r1,r2,r3,r4,r5,r6,r7,r8
	double criticality [] = {};
	double crit[]={};
			
	crit[0] = reliability[0]-reliability[1];		 // Previous = S1 CurrentFail = S2
	crit[1] = (crit[0] + (reliability[1]-reliability[3]))/2  // Previous = S2 CurrentFail = S4
	crit[2] = (crit[0] + (reliability[1]-reliability[5]))/2	 // Previous = S2 CurrentFail = S6
	crit[3] = (crit[1] + (reliability[3]-reliability[7]))/2  // Previous = S4 CurrentFail = S8
	crit[14]=(crit[2] + (reliability[5]-reliability[7]))/2  //  Previous = S4 CurrentFail = S8
			
	crit[4] = reliability[0] - reliability[2];		 // Previous = S1 CurrentFail = S3
	crit[5] = (crit[4] + (reliability[2]-reliability[3]))/2  // Previous = S3 CurrentFail = S4
	crit[6] = (crit[4] + (reliability[2]-reliability[6]))/2  // Previous = S3 CurrentFail = S7
	crit[7] = (crit[5] + (reliability[3]-reliability[7]))/2  // Previous = S4 CurrentFail = S8
	crit[8] = (crit[6] + (reliability[6]-reliability[7]))/2  // Previous = S6 CurrentFail = S8
				
	crit[9] = reliability[0] - reliability[4];		 // Previous = S1 CurrentFail = S5
	crit[10] = (crit[9] + reliability[4]-reliability[5]))/2  // Previous = S5 CurrentFail = S6
	crit[11] = (crit[9] + reliability[4]-reliability[6]))/2  // Previous = S5 CurrentFail = S7
	crit[12] = (crit[10] + reliability[5]-reliability[7]))/2 // Previous = S6 CurrentFail = S8
	crit[13] = (crit[11] + reliability[6]-reliability[7]))/2 // Previous = S7 CurrentFail = S8
	
	for(int i = 0; i<= reliability.Length; i++)
	{
		int previousState;

		if((previousState == 0)&&(s.state == 1))
			criticality = crit[0];
		else if((previousState == 1)&&(s.state == 3))
			criticality = crit[1];
		else if((previousState == 1)&&(s.state == 5))
			criticality = crit[2];
		else if((previousState == 3)&&(s.state == 7))
			criticality = crit[3];
		else if((previousState == 5)&&(s.state == 7))
			criticality = crit[14];
		
		else if((previousState == 0)&&(s.state == 3))
			criticality = crit[4];
		else if((previousState == 2)&&(s.state == 3))
			criticality = crit[5];
		else if((previousState == 2)&&(s.state == 6))
			criticality = crit[6];
		else if((previousState == 3)&&(s.state == 7))
			criticality = crit[7];
		else if((previousState == 6)&&(s.state == 7))
			criticality = crit[8];
		
		else if((previousState == 0)&&(s.state == 4))
			criticality = crit[9];
		else if((previousState == 4)&&(s.state == 5))
			criticality = crit[10];
		else if((previousState == 4)&&(s.state == 6))
			criticality = crit[11];
		else if((previousState == 5)&&(s.state == 7))
			criticality = crit[12];
		else if((previousState == 6)&&(s.state == 7))
			criticality = crit[13];
				
		
		
			

			
		//cout<<"State: "<<i<<" Reliability: "<<reliability[i]<<endl;
		}
	}
	
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
