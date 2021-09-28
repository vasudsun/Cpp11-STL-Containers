//============================================================================
// Name        : Rvalue-Example.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class ABC
{


public:
	ABC()
	{



	}


};


void TempFunction(ABC&& param)
{

cout<<"Inside the TEmpFunction"<<endl;



}

int main() {

	TempFunction(ABC());


	return 0;
}
