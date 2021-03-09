
#include <iostream>
using namespace std;
class emp{
public:
    int total_day;
    int absent_day;
    int pay_per_day;

       emp( int a=0, int b=0)
        {
           total_day = a;
            absent_day = b;
             }
             virtual int day(){
             cout<<"enjoy";
             }
};
class clerk:public emp{
public:
    clerk(int a=0,int b=0):emp(a,b){}
    int day(){
        int z=total_day-absent_day;
    cout<<z;
    }
};
/*class manag:public emp{
};*/
int main(){
emp *p;
clerk c(10,8);
p= &c;
cout<<p->day();
return 0;
}
