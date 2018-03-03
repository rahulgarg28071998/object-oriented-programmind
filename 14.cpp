#include<iostream>
#include<conio.h>
using namespace std;

class parentClass{
	private : int a=1;
	public  :int b=2;
	protected:int c=3;
	
};

class childClass1 : parentClass{//default is private
	private :int p=4;
	public  :int q=5;
			 childClass1(){
			 	cout<<"\nprivate p="<<p<<":q="<<q;
			 }
};

class childClass2 :public  parentClass{
	private : int p=4;
	public  :int q=5;
				childClass2(){
					cout<<"\npublic p="<<p<<":q="<<q<<":b="<<b<<":c="<<c;;
				}
};

class childClass3 :protected parentClass{
	private : int p=4;
	public  :int q=5;
		childClass3(){
					cout<<"\nprotected p="<<p<<":q="<<q<<":b="<<b;
				}
};

int main()
{
	childClass1 c1;
	childClass3 c3;
	childClass2 c2;
	
//	cout<<"size of childClass1 :"<<sizeof(childClass1);
//		cout<<"\nsize of childClass2 :"<<sizeof(childClass2);
//			cout<<"\nsize of childClass3 :"<<sizeof(childClass3);
}
