#pragma once
#include "Slow_Brain.h"
#include "Public_Divisions.h"
#ifndef PCTS_H
#define PCTS_H

class PCTS
{
public:
	PCTS(bool, bool, bool);// muthafucking constructor
	void contact_division();
	void Start_Calculations();
	//Changing way the state is determined
	int Determine_State(bool,bool,bool);
	void New_State(); 
	int priority;
private:
	static int state;
	static int prevState;
	static bool lightStatus[3];
	double criticality[3];
	
	

};

#endif

