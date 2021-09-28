//============================================================================
// Name        : dynamic_cast_example.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



class Person
{
	//content of Person
};


class Employee:public Person
{
public:
	Employee(string fName, string lName, double sal)
	{
		FirstName = fName;
		LastName = lName;
		salary = sal;
	}
	string FirstName;
	string LastName;
	double salary;
	virtual void show()
	{
		cout << "First Name: " << FirstName << " Last Name: " << LastName << " Salary: " << salary<< endl;
	}
	void addBonus(double bonus)
	{
		salary += bonus;
	}
};

class Manager :public Employee
{
public:
	Manager(string fName, string lName, double sal, double comm) :Employee(fName, lName, sal)
	{
		Commision = comm;
	}
	double Commision;
	double getComm()
	{
		return Commision;
	}
};


int main() {



	Employee e1("Peter", "Green", 1400);
	Employee *e2;
	Manager m1("Steve", "Kent", 3000, 0.2);
	e2=&m1;
	Manager* m3 = dynamic_cast<Manager*>(e2);
	if (m3)
	{
		cout<<"Dynamic cast is ok"<<endl;
		cout << m3->getComm() << endl;
	}
	else
		cout << "Can't  cast from Employee to Manager" << endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
