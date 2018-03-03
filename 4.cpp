#include<iostream>

using namespace std;
class A;
class B;
class A {
	private:int a;
	public:
		    void geta(int x)
		    {
		    	x=a;
		    	
			}
			friend int sum(A,B);
};

class B{
	private:int b;
	public:
			void getb(int x)
			{
				x=b;
			}
			friend int sum(A,B);
};

int sum(A a1,B b1)
{	int c=a1.a+b1.b;
	
	return c;
}

int main()
{
	A a1;
	B b1;
	a1.geta(4);
	b1.getb(4);
	int c=sum(a1,b1); 
//	cout<<c;
}
