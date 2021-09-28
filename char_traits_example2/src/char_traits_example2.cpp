//============================================================================
// Name        : string-example-cpp.cpp
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

class Entity: public char_traits<char>
{

public:
	static bool eq(char c,char d)
	{
		return tolower(c)== tolower(d);



	}

	static const char* find(const char* s,size_t n, char c)
	{


		cout<<" n is"<<n<<endl;
		while(n-- && (!eq(*s,c)))
		{
cout<<*s<<endl;
			++s;
		}

		return s;
	}
};

int main() {

basic_string<char,Entity>str("test");

cout<<"Found at position"<<str.find('s');





	return 0;
}
