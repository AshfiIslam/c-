#include<iostream>
using namespace std;
class person{
protected:
    string name="ashfi",prof="eng";
    int age=22;
public:
    person(){
    cout<<name<<" "<<prof<<" "<<age<<endl;
    }
};
class cricketer:public person{
string hobby="singing";
public:
    void show(){
    cout<<hobby<<" "<<name<<" "<<prof<<" "<<age<<endl;
    }
};
class doctor:public person{
int id=101;
public:
    void show2(){
cout<<id<<" "<<name<<" "<<prof<<" "<<age<<endl;
    }
};
class law:public person{
int num=45;
public:
    void show3(){
cout<<num<<" "<<name<<" "<<prof<<" "<<age<<endl;
    }
};
int main(){
cricketer ob;
ob.show();
doctor ob2;
ob2.show2();
law ob3;
ob3.show3();
}
