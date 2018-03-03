#include<iostream>
#include<conio.h>
using namespace std;

class shape{//abstact class
public:	
		virtual void side() =0;//abstract function;
	
};

class triangle: public shape{
public:	void side()
	{
		cout<<"side of triangle = 3";
	};
};

class quadrilateral: public shape{
public:	void side()
	{
		cout<<"side of quadlietal = 4";
	};
};

int main()
{
	triangle t;
	quadrilateral q;
	t.side();cout<<endl;
	q.side();
	return 0;
}
