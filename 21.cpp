#include<iostream>
#include<conio.h>

using namespace std;

class base {
	public:base(){
	}
			virtual void show()
			{
			cout<<"this is base class";
				
			}
};

class derived:public base{

	public:derived(){
	};
			void show()
	{
		cout<<"this is derived class";
	}
};

int main()
{
	derived d;
	base b;
	d.show();
	d.show();
	return 0;
}
