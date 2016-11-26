#pragma once
#include <queue>

class Slow_Brain : public Fast_Brain // trying to do inheritence, PCTS is Base, slow_brain derived 
{
public:
	// Constructor
	Slow_Brain(int current_state, double input_reliability[])
	{
		this.state = current_state;
		this.reliability = input_reliability;
	}

	double Calculate_Criticality(Slow_Brain s)
	{
		double r, c;
		// r = reliability
		// c = criticality
		r = s.reliability[s.state];
		c = (0.999999274 - r) / 2;
		return c;
	}

	int Calculate_Priority(Slow_Brain s)
	{
		double priority[2] = {};
		switch (s.state)
		{
		case 0:
		{
			return priority;
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
			return priority;
		}
		case 4:
		{
			return priority[0] = 1;
		}
		case 5:
		{
			priority[0] = 3;
			priority[1] = 1;
			return priority;
		}
		case 6:
		{
			priority[0] = 2;
			priority[1] = 1;
			return priority;
		}
		case 7:
		{
			priority[] = { 2,3,1 };
			return priority;
		}
		}
	}
};
//	http://www.cplusplus.com/reference/queue/priority_queue/priority_queue/
