//============================================================================
// Name        : Function-template-withLvaluereference.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


#if 0
template<typename T, typename arg>
T create(const arg& a)
{


}
template<typename T, typename arg>
T create( arg& a)
{
cout<<"normal L value reference"<<endl;

}

#endif


void func(int&& rvalue)
{

cout<<"RValue is-->"<<rvalue<<endl;
}
void func(int& rvalue)
{

cout<<"lValue is-->"<<rvalue<<endl;
}
template<typename arg>
void create(arg&& a)
{

func(std::forward<arg>(a));

}
int main() {

	int val=9;

	create(5);
	//int five=5;
	  //int myFive= create<int>(five);
	return 0;
}
