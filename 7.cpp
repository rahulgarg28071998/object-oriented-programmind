#include<iostream>
#include<conio.h>
using namespace std;

class num{
	private : int n;
	public: num(int a)
			{
				n=a;
			};
			num()
			{
				
			};
			num operator - (num B)
			{
				int c=n+B.n;
				return c;
			}
			void get()
			{
				cin>>n;
			}
			void disp()
			{
				cout<<n;
			};
};

int main()
{
	num A(6),B(9);
	num C=A-B;
	cout<<"A=6\n"<<"B=9\n";
	cout<<"A-B=";
	C.disp();
	getch();
return 0;	
}
