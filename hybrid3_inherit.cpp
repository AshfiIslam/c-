#include<iostream>
using namespace std;
class base{
int base_var=3;
public:
base(){
cout<<"base_var "<<base_var<<endl;
}
int get(){
return base_var;
}
};
class derived:public base{
int des_var=2;
public:
    derived(){
cout<<"des_var "<<des_var<<endl;;
    }
    int show(){
        int a;
        a=des_var+get();
    cout<<a<<endl;}
};
class derived2:public derived{
int des2_var=4;
public:
derived2(){
cout<<"des2_var "<<des2_var<<endl;
}
int show2()
{
return des2_var+show()+get();
}
};
int main(){
    derived o;
    o.show();
derived2 ob;
ob.show2();
return 0;
}
