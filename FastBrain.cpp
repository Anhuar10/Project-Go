// FastBrain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include <iostream>


int main()
{
	
	int prioritize; // priority received by slow brain
	double priority[7];
	for (int i = 0; i <= 7; i++) // i = state //counter for states
	{
		cout << "State: " << i << endl;
		//priority[i] = prioritize; // priority placed into array
		cout << "Priority: "<< priority[i]<<endl;
		
	}
    return 0;
}

