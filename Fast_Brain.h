#pragma once
#ifndef FAST_BRAIN_H
#define FAST_BRAIN_H

//Base class Fast_Brain
class Fast_Brain:  
{
public:
	Fast_Brain(int inputState);
	void Store_Criticality();
	void Store_Priority();
private:
	int MTBF;
	double criticality;
	int priority;

};




#endif 
