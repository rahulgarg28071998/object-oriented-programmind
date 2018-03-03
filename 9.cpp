#include<iostream>

using namespace std;

class numbers{
	private:int num1,num2,sum;
	
	public:numbers()
			{	num1=0;
				num2=0;
				sum=0;
				cout<<"\nthis was default constructor\n";
			}
			numbers(int n1 ,int n2)
			{
				num1=n1;
				num2=n2;
				sum=0;
				cout<<"\nthis was parametrised constructor\n";
			}
			int add()
			{
				cout<<(num1+num2);
			}
			~numbers()
			{
				cout<<"\ndestructor was called here\n";
			}
};

int main()
{
	numbers number1;
	number1.add();
	numbers number2(7,8);
	number2.add();
	return 0;
}
