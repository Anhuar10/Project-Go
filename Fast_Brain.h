#pragma once
#ifndef FAST_BRAIN_H
#define FAST_BRAIN_H

class fast_brain: public PCTS// trying to do inheritence, PCTS is Base, slow_brain derived 
{
public:
	fast_brain();

private:
	int MTBF;
	double criticality;
	int priority[];

};




#endif 
