// C++ program without declaring the
// move constructor
#include <iostream>
#include<cstring>


using namespace std;

class MoveClass
{

public:

	char* schoolname=NULL;
	int charcount=0;

public:


	MoveClass(char *ptr);

	MoveClass(const MoveClass &ref1);

	MoveClass(MoveClass &&ref2);

	MoveClass& operator=(const MoveClass &ref1);

	~MoveClass();

};



MoveClass::MoveClass(char *ptr)
{

	cout<<"Default constructor is called"<<endl;

	schoolname=new char[50];
	charcount=strlen(ptr);

	strcpy(schoolname,ptr);

}

MoveClass::MoveClass(const MoveClass &ref1)
{
	cout<<"Copy constructor is called"<<endl;
	schoolname=new char[7];
	charcount=strlen(ref1.schoolname);

	std::copy(ref1.schoolname,ref1.schoolname+strlen(ref1.schoolname),schoolname);
}

MoveClass::MoveClass(MoveClass &&ref2):charcount(ref2.charcount),schoolname(ref2.schoolname)
{

	cout<<"Move constructor is called"<<endl;
	ref2.schoolname=NULL;


}

MoveClass & MoveClass::operator =(const MoveClass &ref1)
{

	cout<<"Assignment operator is called"<<endl;
	schoolname=new char[50];
		charcount=strlen(ref1.schoolname);

		std::copy(ref1.schoolname,ref1.schoolname+strlen(ref1.schoolname),schoolname);
		return *this;
}
MoveClass::~MoveClass()
{

	if(schoolname !=NULL)
	delete schoolname;
}
int main()
{

	MoveClass obj1("railway");

	MoveClass obj2(obj1);

	MoveClass obj3("olavakk");

	obj3=obj1;
	 for (int i = 0; i < 6; i++)
		        cout << obj3.schoolname[i];

	MoveClass obj4(std::move(obj3));
	 for (int i = 0; i < 6; i++)
	        cout << obj4.schoolname[i];

return 0;
}
