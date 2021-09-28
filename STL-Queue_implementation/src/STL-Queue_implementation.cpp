//============================================================================
// Name        : STL-Queue_implementation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<queue>
using namespace std;


template<typename E>
class QueueApp
{
	int _maxsize;
	queue<E>que;
	condition_variable cnd;
	mutex mtx;

public:

	QueueApp(int maxparam):_maxsize(maxparam)
	{


	}

	void push(E param)
	{

		unique_lock<mutex>lock(mtx);
		//Push operation to be handled with care in a critical section
		cnd.wait(lock,[this](){
return que.size()<_maxsize;
		});

		que.push(param);
		cout<<"Pushing::"<<param<<endl;
		lock.unlock();

		cnd.notify_one();



	}


	E pop()
	{
		unique_lock<mutex>lock1(mtx);
		//Push operation to be handled with care in a critical section
		cnd.wait(lock1,[this](){
			return !que.empty();
		});

		E obj=que.front();
		cout<<"popping"<<endl;
		que.pop();
		lock1.unlock();
		cnd.notify_one();

		return obj;

	}






};

int main() {

	QueueApp<int>quy(5);

	thread t1([&](){

		for(int i=0;i<10;i++)
		{

			quy.push(i);
		}


	});

	thread t2([&](){

		for(int i=0;i<10;i++)
		{

			auto item=quy.pop();
			cout<<item<<endl;
		}


	});

	t1.join();

	t2.join();
	return 0;
}
