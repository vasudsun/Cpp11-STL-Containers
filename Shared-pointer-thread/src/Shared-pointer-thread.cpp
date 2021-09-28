//============================================================================
// Name        : Shared-pointer-thread.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<thread>
#include<mutex>
using namespace std;

class ABC{

	int x;
public:

	ABC(int param):x(param){}

	int getX()
	{

		return x;
	}
	~ABC(){

		cout<<"destructor"<<endl;
	}



};

void fun(shared_ptr<ABC>&sharedValue,mutex &mtxptr,int count)
{
unique_lock<mutex>lock(mtxptr);

cout<<"thread"<<"count:  "<<count<<"Use_count"<<sharedValue.use_count()<<endl;



}

int main() {

	mutex mtx;
	shared_ptr<ABC>obj(new ABC(100));
	thread t1(fun,ref(obj),ref(mtx),1);
	thread t2(fun,ref(obj),ref(mtx),10);
	thread t3(fun,ref(obj),ref(mtx),10);


	t1.join();


	return 0;
}
