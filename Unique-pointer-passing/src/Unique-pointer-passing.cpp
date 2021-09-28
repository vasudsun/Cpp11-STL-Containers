//============================================================================
// Name        : Unique-pointer-passing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<memory>
using namespace std;

class ABC{
	int x,y,z,param;
public:
	ABC(int par):x(0),y(0),z(0)
	{
param=par;

	}

	void print()
	{


		cout<<"Param is:"<<param<<", X is - "<<x<<", Y is-"<<y<<", Z is-"<<z<<endl;
	}


};

void sink(unique_ptr<ABC>& uniqptr)
{

	uniqptr->print();
	uniqptr.reset(new ABC(2013));
	uniqptr->print();
}

int main() {

	auto v2 = make_unique<ABC>(2000);
	unique_ptr<ABC>&& v10=move(v2);
	v10->print();
	//sink(move(v2));
	sink(v2);

	return 0;
}
