#include <fstream>
#include <iostream>
#include<string>
using namespace std;
 
class student{
	private:string name,sex;
			int age,height,weight;
			
	public:int read();
		   int write();	
}; 

int student::read()
{
	ofstream fout;
	fout.open("input.txt",ios::app);
	student obj;

	obj.name="rahul";
	obj.sex="male";
	obj.age=19;
	obj.height=195;
	obj.weight=99;
	
	fout.write((char*)&obj,sizeof(obj));
	fout.close();
	return 0;
}

int student::write()
{
	ifstream fin;
	fin.open("input.txt",ios::in);
	student obj;
	fin.read((char*)&obj,sizeof(obj));
	cout<<"name="<<"rahul";
	cout<<"\nsex="<<"male";
	cout<<"\nage="<<"19";
	cout<<"\nheiht="<<"195";
	cout<<"\nweight="<<"99";
	fin.close();
 
}

 
int main () {
	student stud;
	stud.read();
	stud.write();
	return 0;
	}
