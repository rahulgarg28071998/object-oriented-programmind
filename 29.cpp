#include <iostream>
using namespace std;

int main()
{
	int num[5];
	int i=0;
	try{
		while(i>=0){
			cin>>num[i];
			i++;
			if(i>5)
			{
				throw "null pointing exception\n";
			}
		}
	}
catch (const char* msg) {
     cerr << msg << endl;
     cout<<"array is full :";
     for(i=0;i<5;i++)
     {
     	cout<<num[i]<<" ";
	 }
   }
}
