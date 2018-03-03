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
				if(n<=B.n)
				{
					return true;
				}				
				return false;
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
	cout<<"A<=B is ";
	C.disp();
	getch();
return 0;	
}
