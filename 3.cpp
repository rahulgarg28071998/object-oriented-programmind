#include<iostream>
using namespace std;

int area(int ,int );
int area(int);
float area(float);

int main()
{	
	int ch=0;
	cout<<"Menu\n";
	cout<<"1.area of rectangle\n";
	cout<<"2.area of circle\n";
	cout<<"3.area of square\n";
	cout<<"4.exit\n";
	cin>>ch;
	switch(ch)
	{
		case 1: int n,m;
				cout<<"enter the length and breadth of rectangle\n";
				cin>>n>>m;
				cout<<"area of rectangle "<<area(n,m);
				break;
		case 2:float r;
				cout<<"enter the radius of circle\n";
				cin>>r;
				cout<<"the area of circle is "<<area(r);
				break;
		case 3:int s;
				cout<<"enter the side of the square\n";
				cin>>s;
				cout<<"\n the area of the square is "<<area(s);
				break;
		default:;
		
	};cin>>ch;
	return 0;
}

int area(int l,int b)
{
	return(l*b);
}

int area(int s)
{
	return (s*s);
}

float area(float r)
{
	return (r*3.14*r);
}
