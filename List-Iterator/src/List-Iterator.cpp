//============================================================================
// Name        : List-Iterator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<list>
#include<iterator>
using namespace std;

int main() {


	list<int>numlist;
	numlist.push_back(0);
	numlist.push_back(1);
	numlist.push_back(2);
	numlist.push_back(3);
	numlist.push_back(4);

	list<int>::iterator it=numlist.begin();
	it++;
	numlist.insert(it, 100);

	cout<<"position is "<<*it<<endl;

	for(auto it1=numlist.begin();it1 != numlist.end();it1++)
	{

		cout<<*it1<<endl;
	}


	return 0;
}
