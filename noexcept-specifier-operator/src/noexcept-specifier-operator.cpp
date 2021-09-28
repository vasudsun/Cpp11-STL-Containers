//============================================================================
// Name        : noexcept-specifier-operator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <utility>
#include<string>
using namespace std;




void func1()
{

}

void func2() noexcept
{

}


void func3() noexcept(true)
{
 throw 8;
}


void func4() noexcept(false)
{

}





int main() {


constexpr bool is_fun1_nothrow=noexcept(func1());
constexpr bool is_fun2_nothrow=noexcept(func2());
constexpr bool is_fun3_nothrow=noexcept(func3());
constexpr bool is_fun4_nothrow=noexcept(func4());


std::cout<<"Does function1 not throws  "<<is_fun1_nothrow<<endl;
std::cout<<"Does function2 not throws  "<<is_fun2_nothrow<<endl;
std::cout<<"Does function3 not throws  "<<is_fun3_nothrow<<endl;
std::cout<<"Does function4 not throws  "<<is_fun4_nothrow<<endl;


try
{
	func3();
}
catch (...)
{


	cout<<"Exception caught"<<endl;

}





	return 0;
}
