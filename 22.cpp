#include<iostream>
#include<conio.h>

using namespace std;

class base {
	public:base(){
		cout<<"this is base class\n";
	}
};

class container{
	base b;
	public : container()
	{
		cout<<"this is container class\n";
	}
};

int main()
{
	container c;
}
