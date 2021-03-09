#include<fstream>
#include<iostream>
using namespace std;
int main ()
{
string data;
ifstream file("ash.txt");
//file.open("ashfi.dat");
//cout<<"enter:"<<endl;
while(getline(file,data))
{
    cout<< data<<endl;
}
//file>>data;
//cout<<file;
file.close();
}
