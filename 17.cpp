#include<iostream>
#include<conio.h>
using namespace std;

class parentClass1{
public:void virtual vfunc()
{
	cout<<"this is parent class parentClass1\n";
}
	
};
class parentClass2:public parentClass1{
public:void vfunc()
{
	cout<<"this is derived class parentClass2\n";
}
	
};

class childClass:public parentClass2{
public:void vfunc()
{
	cout<<"this is derived class childClass\n";
}
};

int main()
{   parentClass1 p1;
	parentClass2 p2;
	childClass c;
	p1.vfunc();
	p2.vfunc();
	c.vfunc();
}

