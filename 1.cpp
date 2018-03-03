#include<iostream>
using namespace std;

class matricMutilp{
	private :int A[3][3],B[3][3];
	public :
		void inputA()
		{cout<<"enter the matric 1\n";
			for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
		    	cin>>A[i][j];
		}
 		void inputB()
		{cout<<"enter the matric 2\n";
			for(int i=0;i<3;i++)
		    for(int j=0;j<3;j++)
		    	cin>>B[i][j];
		}
		void multiply()
		{	int C[3][3];
					for(int i=0;i<3;i++)
		    for(int j=0;j<3;j++)
		    	C[i][j]=0;
				for(int i=0;i<3;i++)
		    {
			for(int j=0;j<3;j++)
		    {cout<<A[i][j]<<" ";}
			cout<<endl;
			}cout<<endl;
			
					for(int i=0;i<3;i++)
		    {
			for(int j=0;j<3;j++)
		    {cout<<B[i][j]<<" ";}
			cout<<endl;
			}cout<<endl;
			for(int i=0;i<3;i++)
		    {
			for(int j=0;j<3;j++)
		    {
			for(int k=0;k<3;k++)
		    {
		    	C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
			}
			cout<<C[i][j]<<" ";	
		}
		cout<<endl;
		}
	}
	
}obj;

int main()
{
	obj.inputA();
	obj.inputB();
	obj.multiply();
	
	return 0;
}
