// Project_Go.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PCTS.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	int i = 0;
	cout << "Welcome to the Pomona PCTS system.\n" << endl;

	while (i == 0) 
	{
		cout << "\nInput the status of the three intersections (1 = running, 0 = failed)" << endl;
		cin >> x >> y >> z;

		PCTS Pomona(x, y, z);
	}

	system("pause");
    return 0;
}

