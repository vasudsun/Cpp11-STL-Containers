//============================================================================
// Name        : MultiMap-Example.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<map>
using namespace std;

int main() {

	multimap<char,int> MultiMap;
	MultiMap.insert(make_pair('a', 1));
	MultiMap.insert(make_pair('a', 2));
	MultiMap.insert(make_pair('a', 3));
	MultiMap.insert(make_pair('a', 4));
	MultiMap.insert(make_pair('a', 5));


	for(auto& element:MultiMap)
	{


		cout<<element.first<<"Second"<<element.second<<endl;
	}

	multimap<char, int>::iterator it;

	for(it=MultiMap.begin();it!=MultiMap.end();it++)
	{
cout<<"First--"<<it->first<<it->second<<endl;

	}






	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
