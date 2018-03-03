#include<iostream>
using namespace std;

# define area(a) a+1
inline int areacal(int length)
{
return (length++);				
};
		
	
int main()
{
int a=4,b=4;
cout<<"call by inline function:"<<areacal(a);
cout<<"\ncall by macro function:"<<area(b);
cin>>a;
return 0;
}

