#include <iostream>
using namespace std;
class num{
int n;
public:
    void read()
    {
        cout<<"enter num"<<endl;
        cin>>n;
    }
    int operator <(const num& d){
    if(n<d.n){
        return 1;
    }
    else{
        return 0;
    }
    }

     int operator >( const num& d){
    if(n>d.n){
        return 1;
    }
    else{
        return 0;
    }
    }

     int operator ==(const num& d){
    if(n==d.n){
        return 1;
    }
    else{
        return 0;
    }
    }
};
int main()
{
    num n1,n2;
    n1.read();
    n2.read();
    if(n1>n2)
    {
        cout<<"n1 greater"<<endl;
    }
    else if(n1<n2)
    {
        cout<<"n2 greater"<<endl;
    }
    else{
        cout<<"equal"<<endl;
    }
}
