#include<fstream>
#include<iostream>
using namespace std;
int main ()
{
string data;
ofstream file;
file.open("ashfi.text",ios::out|ios::app);
cout<<"enter:"<<endl;
getline(cin,data);

file<<"hi"<<data<<endl;

cout<<"enter:"<<endl;
getline(cin,data);

file<<"hi"<<data<<endl;
cin>>data;
cin.ignore();
cout<<"stored:";
file.close();
}
