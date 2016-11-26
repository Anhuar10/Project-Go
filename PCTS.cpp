#include <iomanip>
#include <iostream>
#include <math.h>
#include "PCTS.h"// Call in PCTS header 
#include "Slow_Brain.h"// Call in Slow brain header file 
using namespace std;

PCTS::PCTS()
{

}

void PCTS::contact_division(int x, int y)// defining fucntinos
{
	if (x = 1)//contact traffic maintnance 
	{
		cout << "System will now contact Pomona Traffic Maintinence" << endl;
		if (y=0)
		{
			cout << "Intersection have been fixed by Traffic Maintinence" << endl;
		}

	}
	else if (x = 0)// contact public safety
	{
		cout << "System will contact Pomona Traffic Safety" << endl;
	}
	else
		cout<< "Error, you have shitty software"<<endl;

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
