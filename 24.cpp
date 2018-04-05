#include<iostream>
using namespace std;
template <typename T>
T square(T x)
{
    return (x*x);
}

int main()
{
    cout<<"\nfor integer type i= 3 square is:"<<square(3);
    cout<<"\nfor float type i= 3.5 square is:"<<square(3.5);
    cout<<"\n";
}


