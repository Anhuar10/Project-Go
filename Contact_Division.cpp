#include <iomanip>
#include <time.h>
#include <math.h>
#include <iostream>
#include <Windows.h>
#include <random>
using namespace std;

int priority_item;
int Priority_Array[3] = { 2,1,3 };// each number in the element defines the intersection oto fix first 

void Contact_Division()
{
	int call_ticket;
	cout << "This is the priority of which intersections to fix first" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Intersection";
		cout << Priority_Array[i] << endl;

		if (i = 0)
			call_ticket = 1;
		else if(i=1 || i=2)
	}
	

}

void main()
{
	Contact_Division();

	system("pause");
}