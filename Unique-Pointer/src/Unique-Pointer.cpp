//============================================================================
// Name        : Unique-Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<memory>

using namespace std;


class Entity
{

public:

	Entity()
	{

		cout<<"Constructor has been implemented"<<endl;
	}
	~Entity()
	{

		cout<<"Destructor has been implemented"<<endl;

	}
	void print()
	{

		cout<<"Print Function from Entity class"<<endl;
	}


};

int main()
{

	auto v3 = make_shared<Entity>();

	{

	auto v2 = make_unique<Entity>();
	v2->print();
	v3->print();

	}

	cout<<"came out of scope"<<endl;
	return 0;

}
