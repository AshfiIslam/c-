#include<fstream>
#include<iostream>
using namespace std;
int main ()
{
    string data;
ofstream file;
file.open("abc.text");

for(int i=0;i>5;i++){
cout<<"enter:"<<endl;
getline(cin,data);

file<<"hi"<<data<<endl;
cin.ignore();
file.close();
}

ifstream file2;
file2.open("abc.txt");
cout<<"here"<<endl;
file2>>data;
cout<<data;

/*file2>>data;
cout<<data;

file2>>data;
cout<<data;*/


file2.close();
return 0;
}
