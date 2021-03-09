#include<iostream>
using namespace std;
class Line{
    int a;
public:
    void setval(int n);
    int getval();
};
void Line::setval(int n){
a=n;
}
int Line::getval(){
return a;
}
int main(){
Line ob;
ob.setval(10);
cout<<ob.getval();
return 0;
}
