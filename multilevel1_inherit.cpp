#include<iostream>
using namespace std;
class flower{
int x=9;
public:
     flower(){
    cout<<x<<endl;}};
class rose:public flower{
int y=8;
public:
    rose()
    {
    cout<<y<<endl;}
   };
class lily:public rose{
int z=7;
public:
     lily(){
    cout<<z<<endl;}};
int main(){
lily ob;
}
