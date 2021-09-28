//============================================================================
// Name        : vector-move-constructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

class ABC{

public:
	ABC();
	ABC(const ABC &ref1);
	ABC(ABC &&ref2) noexcept ;





};

ABC::ABC()
{

	cout<<"Default constructor is called"<<endl;
}



ABC::ABC(const ABC &ref1)
{

cout<<"copy constructor is called"<<endl;

}


ABC::ABC(ABC &&ref2)noexcept
{

	cout<<"Move constructor is called"<<endl;

}

int main() {

ABC obj1;
	vector<ABC>v1;
	v1.push_back(std::move(obj1));
	//v1.push_back(obj1);
	//vector<ABC>v2(std::move(v1));

	return 0;
}
