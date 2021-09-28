//============================================================================
// Name        : sting-sorting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

const string WHITESPACE="\n\r\t\f\v";

string ltrim(const string &param1)
{

	size_t start=param1.find_first_not_of(WHITESPACE);
	return(start==string::npos)?"":param1.substr(start);


}

string rtrim(const string &param2)
{
	size_t end=param2.find_last_not_of(WHITESPACE);
		return(end==string::npos)?"":param2.substr(0,end+1);

}

string trim(const string& s)
{

	return rtrim(ltrim(s));
}

int main() {


	string inputstring;
	getline(cin,inputstring);

	string result= trim(inputstring);
	cout<<"Printing the substring::  "<<result<<endl;

	return 0;
}
