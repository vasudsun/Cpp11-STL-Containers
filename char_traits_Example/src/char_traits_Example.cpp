//============================================================================
// Name        : char_traits_Example.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<cctype>
#include<cstddef>
using namespace std;



class customn_traits:public char_traits<char>
{
	static bool eq(char c , char d)
	{

		return tolower(c)== tolower(d);
	}



};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
