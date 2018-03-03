#include<iostream>
#include<conio.h>
using namespace std;

class num{
	private : int r,c;
	public  : void getnum(int real,int complex)
				{
					r=real;
					c=complex;
				};
				num operator + (num n2)
				{
					num n3;
					n3.r=r+n2.r;
					n3.c=c+n2.c;
					return n3;
				};
				void putnum()
				{
					cout<<r<<" + i"<<c;
				};
		};

int main()
{
num n1,n2,n3;
n1.getnum(1,2);
n2.getnum(3,4);
n3=n1+n2;
cout<<"a=";n1.putnum();
cout<<"\nb=";n2.putnum();
cout<<"\nsum of two complex number is : ";
n3.putnum();
return 0;
}		
