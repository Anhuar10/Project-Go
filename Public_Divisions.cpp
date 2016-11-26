#include <iomanip>
#include <time.h>
#include <math.h>
#include <iostream>
#include <Windows.h>
#include <random>
#include "Public_Divisions.h"
using namespace std;


Public_Divisions::Public_Divisions()
{

}

Public_Divisions::Receive_Call(int call)
{

}

Public_Divisions::Report_Progress(int lightValue)
{
    srand(time(0));
    int x = rand() % 10 + 5;

    cout << "Maintenance in progress: \n"
    for (int i=x; i >=0; i--)
    {
        cout << i << endl;
        Sleep(1000);
    }

    cout << "Intersection " << lightValue << " has been repaired." << endl;

}