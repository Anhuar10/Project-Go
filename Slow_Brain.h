#pragma once
#ifndef SLOW_BRAIN_H
#define SLOW_BRAIN_H

class Slow_Brain : public Fast_Brain // trying to do inheritence, PCTS is Base, slow_brain derived 
{
public:
	// Constructor
	Slow_Brain(int current_state, double input_reliability[])
	{
		state = current_state;
		*reliability = input_reliability[9];//allocating 9 element spaces with "reliability being the pointer"
	};
	double Calculate_Criticality(Slow_Brain s);
	int Calculate_Priority(Slow_Brain s);

protected:
	int state;
	double *reliability;// pointer to an element of an array 
};




#endif 
