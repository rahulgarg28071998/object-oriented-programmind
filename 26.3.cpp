#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   char data[100];
   cout<<"eneter the word\n";
   cin.getline(data,100);
   ofstream fout;
   fout.open("afile.txt");
   fout<<data<<endl;
   fout.close();
   
   fstream fin;
   fin.open("afile.txt");
   fin>>data;
   cout<<data<<endl;
   	

return 0;
}
