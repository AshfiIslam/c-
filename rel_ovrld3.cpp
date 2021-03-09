#include<iostream>
using namespace std;
class exam{
    int mid,fin;
public:
    exam(){
mid=0; fin=0;
    cout<<"enter mark"<<endl;
        cin>>mid>>fin;
    }
    /*void dis()
    {

        cout<<"enter mark"<<endl;
        cin>>mid>>fin;
    }*/
    exam operator- ()
            {
                mid = -mid;
                fin = -fin;
                return exam(mid, fin);
                }
    int operator <(const exam& x)
    {
        if(mid<x.mid && fin<x.fin)
        {
            return true;
       }
       /*if(mid == x.mid && fin < x.fin)
                    {
                        return true;
                }*/ return false;
    }
    int operator ==(const exam& x)
    {
        if(mid==x.mid && fin==x.fin)
        {
            return true;
       }
       return false;
    }
};
int main()
{
    exam st1,st2;
   /*st1.dis();
    st2.dis();*/
    if(st1<st2){
        cout<<"st2 is greater"<<endl;
    }
    else if(st1==st2){
        cout<<"eqaul"<<endl;
    }
    else{
        cout<<"st1 is greater"<<endl;
    }
    return 0;
}
