//virtual class
#include<iostream>
#include<conio.h>
using namespace std;

class parentClass{
	private :void show(){
		cout<<"ths is parent class show\n";
	}
	
};


class childClass:public virtual parentClass{
	public: void show(){
		cout<<"this is child class show\n";
	}
	
};

int main()
{
	childClass c;
	c.show();
}

