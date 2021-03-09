#include<iostream>
#include<string>
using namespace std;
template<typename T>
inline T const&add(T const& a, T const& b)
{
    return a+b;
    }
int main ()
{
    int i =39;
    int j =20;
    cout <<"add(i, j): "<<add(i, j)<< endl;

    return 0;
    }
