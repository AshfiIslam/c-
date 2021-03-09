#include<iostream>
using namespace std;
class info{

int id;
public:
    int getid(){cin>>id; return id;}
    };
class lab{
int lmark;
public:
    int getlmark(){cin>>lmark; return lmark;}
};

class exam:public lab{
int mark;
public:
    int getmark(){cin>>mark; return mark+getlmark();}
};
class result:private info,public exam{
    public:
void getresult(){
int sid=getid();
int res=getmark();
cout<<sid<<res<<endl;}
};
int main(){
result ob;
ob.getresult();
return 0;
}
