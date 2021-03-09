#include<iostream>
using namespace std;
class base{
public:
    int m_value;
    base(int nvalue=0):m_value(nvalue){
    cout<<"base"<<endl;
    }
};
class derived:public base{
public:
    double m_dvalue;
    derived(double dvalue=0.0):m_dvalue(dvalue){
    cout<<"derived"<<endl;
    }
};int main(){
base cbase;
//cout<<"jjbase"<<endl;
derived cder;
//cout<"jjderived"<<endl;
return 0;

}
