//============================================================================
// Name        : Share_pointer_thread-Exam.cpp
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
	ABC(int param):x(param)
	{


	}
	int getX()
	{
		return x;
	}
	~ABC()
	{



	}
};

//Thread Function
void work(shared_ptr<ABC>&objptr,mutex &mtr,int count)
{

unique_lock<mutex>lock(mtr);
cout<<"Shared pointer reference"<<objptr.use_count()<<endl;




}

int main() {

	shared_ptr<ABC>objPtr(new ABC(121));
	mutex mtx;
	thread t1(work,ref(objPtr),ref(mtx),1);
	thread t2(work,ref(objPtr),ref(mtx),2);
	thread t3(work,ref(objPtr),ref(mtx),3);
	t1.join();
	t2.join();
	t3.join();




	return 0;
}
