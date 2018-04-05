

#include <iostream>

#include <fstream>

#include <cstdlib>

using namespace std;

int main()

 

{

 

    ifstream infile;

 

    istream& ignore (streamsize n = 2, int delim = EOF);

 

    infile.open("data10.txt");
   
    char output;

 

    if (infile.fail())

    {

        cout << "Unable to open file data10.txt. \n";

        exit(1);

    }

 

    while(infile.get(output))

    {

        cout << output;

    }

 

    infile.close();

 

}  

