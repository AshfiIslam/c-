#include<iostream>
using namespace std;
class stu{
protected:
    int r_no;
        public:int get1(){
        cin>>r_no;
        cout<<"enter roll:"<< r_no;
        }
};
class test:public stu{
protected:
    float b,c;
        public:int get2(){
        cin>>b;
        // return b;
        cin>>c;
        return b,c;
        }
};
class sports{
protected:
    float score;
        public:int get3(){
        cin>>score;
        return score;
        }
};
class result:public sports,public test{
protected:
    float t;
        public:
            int print(){
        t=get2()+get3();
        cout<<t;
        }
};
int main(){
result ob;
ob.print();
return 0;
}

