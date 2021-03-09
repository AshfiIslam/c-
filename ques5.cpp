#include<iostream>
using namespace std;
class polygon{
protected:
    int width,height;
public:
    void set_val(int a,int b)
    {

        width=a;
        height=b;
    }
    };
    class output1{

public:
    void output(int i)
    {

        cout<<i<<endl;
    }
    };
class rectangle:public polygon,public output1{
public:
    int area()
    {
        return (width*height);
    }
    };
    int main(){
    rectangle rect;
    rect.set_val(4,5);
    rect.output(rect.area());
    return 0;
    }
