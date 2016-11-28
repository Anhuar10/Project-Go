#include "stdafx.h"
#include <iomanip>
#include <time.h>
#include <math.h>
#include <iostream>
#include <Windows.h>
#include <random>
#include "Public_Divisions.h"
using namespace std;


Public_Divisions::Public_Divisions(int lightStatus, int Priority)
{
	cout << "Public divisions has been contacted";
    Sleep(1000);
    cout << '.';
    Sleep(1000);
    cout << '.';
    Sleep(1000);
    cout << '.' << "\n\n";

  
}


int Public_Divisions::Report_Progress(int lightStatus,int Priority)
{
	int light = Priority + 1;
    srand(time(0));
    int x = rand() % 10 + 5;

    switch(Priority)
    {
        case 0:
        {
            cout << "\nContacting Pomona Traffic Safety";
            Sleep(1000);
            cout << '.';
            Sleep(1000);
            cout << '.';
            Sleep(1000);
            cout << '.' << "\n\n";
            break;
        }
        case 1:
        {
            cout << "\nConducting maintenance on traffic light " << light << '.' << endl;
            break;
        }
        case 2:
        {
            cout << "\nContacting Pomona Traffic Safety";
            Sleep(1000);
            cout << '.';
            Sleep(1000);
            cout << '.';
            Sleep(1000);
            cout << '.' << "\n\n";
            break;
        }
    }
    
    for (int i=x; i >=0; i--)
    {
        cout << i << endl;
        Sleep(1000);
    };

	//Dummy outputs for testing light values
	cout << "\n\nOld light value is " << lightStatus << "\n" << endl;


	
    cout << "\nLight " << light << " has been repaired" << endl;


	return 1;

}