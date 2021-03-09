#include<iostream>
using namespace std;
class contst{
public:
    int a;
    int b;
     contst();

};
contst::contst(){
a=10;
b=20;
}
int main(){
contst c;
cout<<c.a<<c.b;
return 0;
}
