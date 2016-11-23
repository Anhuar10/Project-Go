#pragma once
#ifndef PCTS_H
#define PCTS_H

class PCTS: public Slow_Brain, public Fast_Brain, public Divisions
{
public:
	PCTS();// muthafucking constructor 
	void contact_division();
	void Start_Calculations();
	void Input_State(int);
	void New_State();
	void Light_Prolong(); 
private:
	double criticality;
	int priority[];

};

#endif