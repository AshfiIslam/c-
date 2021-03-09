#include<fstream>
#include<iostream>
using namespace std;
int main ()
{
string data;
ifstream file;
file.open("ashfi.dat");
cout<<"enter:"<<endl;
getline(file,data);
file>>data;
cout<<file;
file.close();
}
