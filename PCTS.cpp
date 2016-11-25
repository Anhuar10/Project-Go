#include <iomanip>
#include <iostream>
#include <math.h>
#include "PCTS.h"// Call in PCTS header 
#include "Slow_Brain.h"// Call in Slow brain header file 
using namespace std;

PCTS::PCTS(bool x, bool y, bool z)
{
	Slow_Brain slowBrain;
	Fast_Brain fastBrain;
	bool lightStatus[3] = {true, true, true}; // Instantiate values to all true
	lightStatus[0] = x;
	lightStatus[1] = y;
	lightStatus[2] = z;
	state = 0;


}

void PCTS::contact_division()// defining fucntinos
{
	//how will we contact division 
}

void PCTS::Start_Calculations()
{

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

}
void PCTS::Light_Prolong()
{
}
