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
class child1:public parentClass1{
	private : int p;
	protected:int q;
	public  :int r;
				child1()
				{	cout<<"\n child class1 constructor\n";
					p=4;
					q=5;
					r=6;
					cout<<"\n"<<"p="<<p<<":q="<<q<<":r="<<r<<":b="<<b<<":c="<<c;;
				}
	
};

class child2:public child1{
	public: child2()
				{	cout<<"\nchild Class2 constructor\n";
				cout<<"\n"<<"b="<<b<<":c="<<c;
					cout<<":q="<<q<<":r="<<r;;;
				}
	
};

int main()
{
	child2 c;
}

