/*
 * main.cpp
 *
 *  Created on: 10-Jun-2021
 *      Author: in0suv
 */
#include<iostream>
#include <utility>
using namespace std;

void fun(const int &lref) // lvalue arguments will select this
{
  std::cout << "l-value reference to const\n";
}
void fun(int &&rref) // rvalue arguments will select this function
{
  std::cout << "rref \n"<<rref;
}
int main()
{

	int number=0;

	fun(number);

	fun(std::move(number));



	return 0;
}



