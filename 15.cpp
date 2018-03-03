#include<iostream>
#include<conio.h>
using namespace std;

class parentClass1{
	private : int a;
	protected:int c;
	public  :int b;
				parentClass1()
				{	cout<<"\nparentClass1 constructor\n";
					a=1;
					b=2;
					c=3;
					cout<<"\n"<<"a="<<a<<":b="<<b<<":c="<<c;;
				}
	
};
class parentClass2{
	private : int p;
	protected:int q;
	public  :int r;
				parentClass2()
				{	cout<<"\nparentClass2 constructor\n";
					p=4;
					q=5;
					r=6;
					cout<<"\n"<<"p="<<p<<":q="<<q<<":r="<<r;;
				}
	
};

class childClass:public parentClass1,parentClass2{
	public: childClass()
				{	cout<<"\nchildClass constructor\n";
				cout<<"\n"<<"b="<<b<<":c="<<c;
					cout<<":q="<<q<<":r="<<r;;;
				}
	
};

int main()
{
	childClass c;
}

