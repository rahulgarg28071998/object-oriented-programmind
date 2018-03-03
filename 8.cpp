#include<iostream>

using namespace std;

class student {
	private : int id;
			 
	public:  static int count;
		    student(int n)
			{   id=n;
				count++;
			}		  
			void putid()
			{
				cout<<"student id is :"<<id;
				cout<<"number of student in class:"<<count<<"\n";
			}
};
int student::count=0;
int main()
{
	student a1(45);
	a1.putid();
	student a2(50);
	a2.putid();
	student a3(54);
	a3.putid();
return 0;	
}
