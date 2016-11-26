#pragma once

class Slow_Brain
{
public:
	// Constructor
	Slow_Brain(int current_state, double input_reliability)
	{
		state = current_state;
		reliability = input_reliability;
	}

	double Calculate_Criticality(Slow_Brain s)
	{
		double r, c;
		// r = reliability
		// c = criticality
		r = s.reliability;
		c = (0.999999274 - r) / 2;
		return c;
	}

	int Calculate_Priority(Slow_Brain s)
	{
		int priority[2] = {};
		switch (s.state)
		{
		case 0:
		{
			return priority[0];
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
			return priority[0-1];
		}
		case 4:
		{
			return priority[0] = 1;
		}
		case 5:
		{
			priority[0] = 3;
			priority[1] = 1;
			return priority[0-1];
		}
		case 6:
		{
			priority[0] = 2;
			priority[1] = 1;
			return priority[0-1];
		}
		case 7:
		{
			priority[0] = 2;
			priority[1] = 3;
			priority[2] = 1;
			return priority[0-2];
		}
		}
	}
private:
	int state;
	double reliability;
};