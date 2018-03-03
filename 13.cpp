#include<iostream>
#include<conio.h>
using namespace std;

class increment{
				private : int num;
				public  : void getnum(int n)
							{
								num=n;
							};
						  int operator ++ ()
						  { int n=num--;
						  	return (n);
						  };
						  void put()
						  {
						  	cout<<num;
						  };
				};
				
int main()
{
	increment i;
	i.getnum(5);
	cout<<"intial value of number : ";
	i.put();
	++i;
	cout<<"\nfinal value of number : ";
	i.put();
	return 0;
}
