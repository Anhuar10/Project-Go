#include <iomanip>
#include <iostream>
#include <math.h>
#include "PCTS.h"// Call in PCTS header 
#include "Slow_Brain.h"// Call in Slow brain header file
#include "Public_Divisions.h"
using namespace std;

PCTS::PCTS(bool firstLight, bool secondLight, bool thirdLight)
	: Slow_Brain(int inputState,int previousState, int Priority), Public_Divisions(int Priority, bool lightStatus)
{
	bool lightStatus[3] = {true, true, true}; // Instantiate values to all true
	state = 0;
	prevState = 0;
	priority = 0;
	lightStatus[0] = firstLight;
	lightStatus[1] = secondLight;
	lightStatus[2] = thirdLight;

	state = Determine_State(lightStatus[0], lightStatus[1], lightStatus[2]);

	Start_Calculations();
	contact_division();
}

void PCTS::contact_division()// defining fucntions
{
	Public_Divisions divisions(priority, lightStatus[priority-1]);

}

void PCTS::Start_Calculations()
{
	Slow_Brain brain1(state, prevState, priority);
	
}
int PCTS::Determine_State(bool x, bool y, bool z)
{
	if(x == true && y == true && z == true){
		state = 0;
	}
		else if(x == true && y == true && z == false){
			state = 1;
		}
			else if(x == true && y == false && z == true){
				state = 2;
			}
				else if(x == true && y == false && z == false){
					state = 3;
				}
					else if(x == false && y == true && z == true){
						state = 4;
					}
						else if(x == false && y == true && z == false){
							state = 5;
						}
							else if(x == false && y == false && z == true){
								state = 6;
							}
								else if(x == false && y == false && z == false){
									state = 7;
								}	

	return state;
}
void PCTS::New_State()
{
	prevState = state;
	state = Determine_State(lightStatus[0], lightStatus[1], lightStatus[2]);

}
