//============================================================================
// Name        : shared-pointer-passing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<memory>
using namespace std;

class ABC{
	 int numvalue;
public:
	ABC(int val)
	{
numvalue=val;

	}


};

void shared(shared_ptr<ABC>sharedparam)
{

cout<<"Shared pointer reference count is "<<sharedparam.use_count()<<endl;

}

int main() {


auto globalshared=make_shared<ABC>(1018);

shared(globalshared);
	return 0;
}
