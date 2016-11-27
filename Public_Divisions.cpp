#include <iomanip>
#include <time.h>
#include <math.h>
#include <iostream>
#include <Windows.h>
#include <random>
#include "Public_Divisions.h"
using namespace std;


Public_Divisions::Public_Divisions(bool lightStatus, int Priority)
{
	cout << "Public divisions has been contacted";
    Sleep(1000);
    cout << '.';
    Sleep(1000);
    cout << '.';
    Sleep(1000);
    cout << '.' << "\n\n";

    Report_Progress(Priority, lightStatus);
}


void Public_Divisions::Report_Progress(bool lightStatus,int Priority)
{
    srand(time(0));
    int x = rand() % 10 + 5;

    switch(Priority)
    {
        case 1:
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
        case 2:
        {
            cout << "\nConducting maintenance on traffic light " << Priority << '.' << endl;
            break;
        }
        case 3:
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

    lightStatus = true;
    cout << "\nLight " << Priority << " has been repaired" << endl;

}