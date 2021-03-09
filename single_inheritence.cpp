#include<iostream>
using namespace std;
 class info{
 int id;
 public:
     //void set_id(){cin>>id;}
     void get_id(){
     cin>> id; cout<<id<<endl;}
 };
 class student: private info{
 public:
     void print(){
     get_id();}
 } ;
 int main(){
 student ob;
 ob.print();
 return 0;
 }
