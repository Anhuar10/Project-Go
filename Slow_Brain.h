#pragma once
#ifndef SLOW_BRAIN_H
#define SLOW_BRAIN_H

class slow_brain: public PCTS// trying to do inheritence, PCTS is Base, slow_brain derived 
{
public:
	slow_brain();

private:
	int MTBF;
	double criticality;
	int priority[];

};




#endif 
