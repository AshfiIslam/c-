#include<iostream>
using namespace std;
template<class X,class T,class S>
double Max(X a,T b,S c){
if((a>b)&&(a>c)) return a;
/*else if(a>c) return a;*/
else if((b>a)&&(b>c)) return b;
//else if(b>c) return b;
else return c;
}
int main()
{
    int i=8;
    float j=10.4;
    int k=12;

    cout<< Max(i,j,k);
    return 0;
}
