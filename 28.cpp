#include<iostream>
#include<conio.h>

using namespace std;

class list{

	public: 
			virtual int read(int) =0;
			virtual void write() =0; 
};

class stack:public list
{
	public: int num[10];
			int top;
			stack(){
				top=-1;
			}
			int read(int a)
			{
				if(top==10)
				{	cout<<"overflow";
					return 0;
				}
				++top;
				num[top]=a;
				return top;
			}
			void  write()
			{
				for(int i=top;i>=0;i--)
				{
					  cout<<num[top]<<" ";
				}
			}
};
class queue: public list
{
	public: int arr[10];
			int front ,rear;
			queue()
			{
				front=-1;
				rear=-1;
			 } ;
			 int read (int a)
			 {
			 	if(front==-1&&rear==-1)
			 	{
			 		front=0;
			 		rear=0;
			 		arr[0]=a;
			 		return rear;
				 }
				 if(rear==9)
				 {
				 	cout<<"overflow";
				 	return -1;
				 }
				 else
				 {
				 	rear++;
				 	arr[rear]=a;
				 }
				 
			 }
			 void write()
			 {
			 	for(int i=front;i<=rear;i++)
			 	{
			 		cout<<arr[i]<<" ";
				 }
			 }
};
int main()
{
stack s;
queue q;
cout<<"stack implementation\n";
int a=s.read(6);
a=s.read(5)	;
s.write();
//cout<<endl<<a;
cout<<"\nqueue implementation\n";
q.read(3);
q.read(6);
q.write();
};   
