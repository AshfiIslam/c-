#include<iostream>
using namespace std;
template<class X,class T>
X Max(X a,T b){
if(a>b) return a;
else return b;
}
int main()
{
    cout<< Max(3,4.4);
}
