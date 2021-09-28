//============================================================================
// Name        : set-example.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<set>
#include<string>
using namespace std;

class person{

public:

	person():age(1),name("sunil")
	{



	}
	float age;

	string name;
	bool operator<(const  person &p1)const
	{
		return age<p1.age;

	}
};

int main() {

	 const person p;

	person p2;

	p2.age=10;
	p2.name="Festo";

	bool result=p<p2;

	cout<<result<<endl;


#if 0
	set<person>object1={{21.3,"AAKASH"},{23.3 ,"Madhu"},{24.5,"vasiht"}};

	for(auto m:object1)
	{

		cout<<"Age is"<<m.age<<"Name is "<<m.name<<endl;
	}
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
#endif
	return 0;
}
