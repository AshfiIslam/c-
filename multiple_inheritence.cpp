#include<iostream>
using namespace std;
 class info{
 int id;
 public:
     //void set_id(){cin>>id;}
     void get_id(){
     cin>> id; cout<<id<<endl;}
 };
 class result{
 int mark;
 public:
     void get_mark(){ cin>> mark; cout<<mark<<endl;}
 };
 class student: private info,private result{
 public:
     void print()
     {
     get_id();
     get_mark();
     }
 } ;
 int main(){
 student ob;
 ob.print();
 return 0;
 }
