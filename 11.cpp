#include<iostream>
#include<string>
using namespace std;

class word{
	private:string s;
	public: word()
			{getline(cin,s);}	
			int operator = (word w2)
			{
				int b=(s==w2.s);
			
				return b;
			}
	
};
int main()
{
cout<<"enter the string: ";
word w1;
cout<<"\nenter the string: ";
word w2;
int b=(w1=w2);
if(b==1)
{
	cout<<"equals";
}
else cout<<"not equals";

return 0;
}
