#pragma once
#ifndef SLOW_BRAIN_H
#define SLOW_BRAIN_H

class Slow_Brain: public PCTS// trying to do inheritence, PCTS is Base, slow_brain derived 
{
public:
	Slow_Brain();

private:
	int MTBF;
	double criticality;
	int priority[];

};




#endif 
