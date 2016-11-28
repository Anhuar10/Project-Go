#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <math.h>
#include "PCTS.h"// Call in PCTS header 
#include "Slow_Brain.h"// Call in Slow brain header file
#include "Public_Divisions.h"
using namespace std;

PCTS::PCTS(int firstLight, int secondLight, int thirdLight)
	
{
	state = 0;
	prevState = 0;
	priority = 0;
	lightStatus[0] = firstLight;
	lightStatus[1] = secondLight;
	lightStatus[2] = thirdLight;

	

	state = Determine_State(lightStatus[0], lightStatus[1], lightStatus[2]);

	while (state != 0) {
		cout << "The current working intersections are: \n";
		for (int i = 0; i < 3; i++) {
			if (lightStatus[i] == 1) {
				cout << i + 1 << endl;
			}
		}

		Start_Calculations();
		contact_division();

		New_State();
	}

	cout << "\nAll intersections are now operational.\n"  << endl;
}

void PCTS::contact_division()// defining fucntions
{
	Public_Divisions divisions(lightStatus[priority], priority);
	lightStatus[priority] = divisions.Report_Progress(lightStatus[priority-1], priority);

}

void PCTS::Start_Calculations()
{
	Slow_Brain brain1(state, prevState, priority);
	priority = brain1.Calculate_Priority(state, priority);
	
	
}
int PCTS::Determine_State(int x, int y, int z)
{
	if(x == 1 && y == 1 && z == 1){
		state = 0;
	}
		else if(x == 1 && y == 1 && z == 0){
			state = 1;
		}
			else if(x == 1 && y == 0 && z == 1){
				state = 2;
			}
				else if(x == 1 && y == 0 && z == 0){
					state = 3;
				}
					else if(x == 0 && y == 1 && z == 1){
						state = 4;
					}
						else if(x == 0 && y == 1 && z == 0){
							state = 5;
						}
							else if(x == 0 && y == 0 && z == 1){
								state = 6;
							}
								else if(x == 0 && y == 0 && z == 0){
									state = 7;
								}	

	cout << "\n\nThe current state is " << state << ".\n" << endl;
	return state;
}
void PCTS::New_State()
{
	prevState = state;
	state = Determine_State(lightStatus[0], lightStatus[1], lightStatus[2]);

	cout << "\nAfter repairs, the current state is: " << state << endl;


}
