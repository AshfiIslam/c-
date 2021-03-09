#include<fstream>
#include<iostream>
using namespace std;
int main ()
{
    string data;
ofstream file;
file.open("ashfi.text");
cout<<"enter:"<<endl;
getline(cin,data);

file<<"hi"<<data<<endl;
file.close();

ifstream file2("ashfi.txt");

while(getline(file2,data))
{
    cout<< data<<endl;
}

file2.close();
}
