#include<iostream>
#include<string>
using namespace std;

class word{
	private:string s;
	public: word()
			{getline(cin,s);}	
			string operator + (word w2)
			{
				string b=s+w2.s;
				return b;
			}
	
};
int main()
{
cout<<"enter the string: ";
word w1;
cout<<"\nenter the string: ";
word w2;
cout<<"\nconcated string is: ";
string c=w1+w2;
cout<<c;
return 0;
}
