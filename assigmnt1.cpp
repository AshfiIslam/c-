#include<fstream>
#include<iostream>
using namespace std;
int main ()
{
    string name;
    int ID;
    double cgpa;
    ofstream outfile;

    outfile.open("afile.dat");


    cout <<"Enter your name: ";
    getline(cin,name);
    outfile << name << endl;

    cout <<"Enter your ID ";
    cin >> ID;

     cout <<"Enter your cgpa";
    cin >> cgpa;

    outfile.close();


   ifstream infile;
   infile.open("afile.dat");


   cout <<"Reading from the file"<< endl;
    infile >> name;
    cout << name << endl;

    infile >> ID;
    cout << ID << endl;

    infile >> cgpa;
    cout << cgpa << endl;


     infile.close();

     return 0;
     }
