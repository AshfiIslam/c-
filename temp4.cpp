#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
void print(T1 a,T2 b,T3 c){
cout<<a<<"   "<<b<<"   "<<c<<endl;
}
int main(){
print(5,6.2,5);
return 0;
}
