//============================================================================
// Name        : unique-pointer-File-Operation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cassert>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <memory>
#include <stdexcept>
using namespace std;


/*Program Link
 *
 *  https://en.cppreference.com/w/cpp/memory/unique_ptr
 */


void close_file(FILE* fp)
{

	cout<<"Closing file"<<endl;
	fclose(fp);
}



struct B{
	virtual ~B()=default;
	virtual void bar(){cout<<"B::bar\n";}
};


struct D: B
{

	D(){ cout<<"D::D\n";}
	~D(){

		cout<<"D::`D\n";
	}

	void bar() override {
		cout<<"D::bar()\n";
	}
};


unique_ptr<D>pass_through(unique_ptr<D>p)
{
p->bar();
}

struct List{


	struct Node{
		int data;
		unique_ptr<Node>next;
	};
	unique_ptr<Node>head;


	void push(int data)
	{
		head=unique_ptr<Node>(new Node{data,move(head)});
	}
};

int main() {

#if 0

cout<<"1\n";
{
	//unique_ptr  p = make_unique<D>();
unique_ptr <D> p = std::make_unique<D>();

auto  b = pass_through(move(p));

cout<<"Program has been terminated"<<endl;
}
#endif
{

//part2
//using unique_file_t = unique_ptr<FILE, decltype(&close_file)>;
//unique_file_t fp(fopen("demo.txt", "r"), &close_file);

unique_ptr<FILE, decltype(&close_file)> fp(fopen("demo.txt", "r"), &close_file);

if (fp)
            std::cout << char(std::fgetc(fp.get())) << '\n';

}




	return 0;
}
