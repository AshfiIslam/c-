#include<iostream>
#include<string>
using namespace std;
template<class T1,class T2>
void Max(T1 const& a, T2 const& b)
{
    return a < b  ? b:a;
    }
int main ()
{
int i=3;
double j=4.4;

    cout << "Max(i, j): " <<Max(i,j)<< endl;

    }
