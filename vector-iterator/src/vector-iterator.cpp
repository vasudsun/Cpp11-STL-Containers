//============================================================================
// Name        : vector-iterator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<map>
using namespace std;





int main() {

	vector<int> param{0,1,2,3,4,5,6};

	for(auto &it:param)
	{
it*=2;
		cout<<it<<endl;
	}



	for(auto it1:param)
		{

			cout<<it1<<endl;
		}


	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!



	map<int, int> mapparam;


	mapparam[1]=2;
	mapparam[2]=4;
	mapparam[3]=6;


for(auto it:mapparam)
{


	cout<<it.first<<it.second<<endl;
}






	return 0;
}
