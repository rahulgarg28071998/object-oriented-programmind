#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
char  a[150];
  char ch;
  int count=0;
  cout<<"Enter text"<<endl;
  gets(a);
  ofstream file("EXAMPLE.txt");
  for(int i=0; a[i]!='\0'; i++)
  {
    file.put(a[i]);
  }
  file.close();
  ifstream fin("EXAMPLE.txt");
  ofstream fout("NEW.txt");
  while(fin)
  {
    ch=fin.get();
    while(ch==8||ch==9||ch==11||ch==32||ch==' ')
    {
       if(count==0)
          fout.put(ch);
       ch=fin.get();
       count++;
     }
     fout.put(ch);
     count=0;
  }
  fin.close();
  fout.close();
  ifstream fil("NEW.txt");
  while(fil)
  {
     ch=fil.get();
     cout<<ch;
  }
	return 0;
}
