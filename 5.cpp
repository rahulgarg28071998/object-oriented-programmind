#include<iostream>
#include<conio.h>
using namespace std;

class A;
class B;

class A {
	private: int num;
	public : void getnum(int n)
				{
					num=n;
				};
				int  putnum()
				{
					return num;
				}
				friend void swap(A a,B b); 
};

class B{
	private :int num;
	public: void getnum(int n)
			{
			num =n;	
			};
			int  putnum()
			{
			return num;
			}
			friend void swap(A a,B b);
};

void swap(A *a,B *b)
{
	int temp=a->putnum();
	a->getnum(b->putnum());
	b->getnum(temp);

};

int main()
{
	A a;
	B b;
	a.getnum(23);
	b.getnum(76);
	swap(&a,&b);
	cout<<"swapped values of a and b are "<<a.putnum()<<" and "<<b.putnum()<<" respectively \n";
	return 0;
}
