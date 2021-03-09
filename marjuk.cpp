#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    double cg[10];
    string name[10],id[10];

    for(int i=1; i<=5; i++)
    {
        cout<<"Enter name: ";
        cin>>name[i];
        cout<<"Enter id: ";
        cin>>id[i];
        cout<<"Enter CGPA: ";
        cin>>cg[i];
    }

    ofstream myFile;
    myFile.open("output.txt");

    for(int i=1; i<=5; i++)
        myFile<<name[i]<<" "<<id[i]<<" "<<cg[i]<<endl;

    cg[0] = 0;
    freopen("output.txt", "r", stdin);
    for(int i=1; i<=5; i++)
    {
        cin>>name[i]>>id[i]>>cg[i];
        cg[i] = cg[i]+cg[i-1];
    }

    double avg = cg[5]/5.0;
    cout<<"Average CGPA: "<<avg<<endl;

}
