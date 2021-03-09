#include<iostream>
using namespace std;
template<class T,class S>
double add(T a,S b){
    return a+b;
}
int main(){
    int n1=5; float n2=6.7;
cout<<add(n1,n2);
return 0;
}
