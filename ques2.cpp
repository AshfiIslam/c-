#include<iostream>
using namespace std;
class exmpl{
int a;
public:
    void getData()
    {
        cout<<"enter value a";
        cin>>a;
    }
    void findmax();
};
void exmpl::findmax(){
//if ((e1.a)>(e2.a))
    cout<<"e1 greater";
   // else if((e1.a)<(e2.a))
        //cout<<e2 greater;

    //else
        cout<<"equal";

}
int main(){
exmpl e1,e2;
cout<<"enter for e1"<<endl;
e1.getData();
cout<<"enter for e2"<<endl;
e2.getData();
//findmax(e1,e2);
return 0;
}
