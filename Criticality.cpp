#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;
const int n = 8;// number of rows
const int m = 3;// number of columns
double criticality_table[n][m];// creating 2d array for criticality values
//const int n= sizeof(criticality_table)/sizeof(int);



void find_highest()// function to return highest priority(index) for each row (state)
{
	// pre calculated values
	criticality_table[1][2] = 1;
	criticality_table[2][1] = 1;
	criticality_table[3][1] = 0.008;
	criticality_table[3][2] = 0.008;
	criticality_table[4][0] = 1;
	criticality_table[5][0] = 0.005;
	criticality_table[5][2] = 0.0025;
	criticality_table[6][0] = 0.0025;
	criticality_table[6][1] = 0.005;

	for (int i = 0; i<n; i++)
	{
		double max = *std::max_element(criticality_table[i], criticality_table[i] + m);
		//int max_index= distance(criticality_table[i], max)
		auto it = std::find(std::begin(criticality_table[i]), std::end(criticality_table[i]), max);
		if (it != std::end(criticality_table[i]))
		{
			cout << "Index "<< std::distance(std::begin(criticality_table[i]), it) << " with "<<max<<" in state "<<i<<endl;
		}
		//cout<<max<<endl;
	}

}

int main(int argc, char**argv)
{

	find_highest();
	//cout<<"Index of max element"
	//<<distance(criticality_table, max_element(criticality_table,criticality_table+n))
	//<<endl;

	system("pause");
	return 0;
}