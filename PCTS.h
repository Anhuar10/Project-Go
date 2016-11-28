#pragma once
#include "Slow_Brain.h"
#include "Public_Divisions.h"
#ifndef PCTS_H
#define PCTS_H

class PCTS
{
public:
	PCTS(int, int, int);// muthafucking constructor
	void contact_division();
	void Start_Calculations();
	//Changing way the state is determined
	int Determine_State(int,int,int);
	void New_State(); 
	int priority;
	int lightStatus[3];
	int state;
private:
	int prevState;
	double criticality[3];
};

#endif

