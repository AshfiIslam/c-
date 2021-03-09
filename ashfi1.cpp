#include <fstream>
#include <iostream>
using namespace std;
int main ()
{
    float x=0,y;
    char data[100];
    char data1[100];
    // opening a file in write mode.
    ofstream myfile;
    myfile.open("E:\\message.txt");

    for(int i=1;i<=2;i++){
    cout << "Enter your "<<i<<"st student information" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    myfile << data << endl;

    cout << "Enter your id: "; cin >> data;
    cin.ignore();
    myfile << data << endl;

    cout << "Enter your cgpa: "; cin >> data1;
    cin.ignore();
    myfile << data1 << endl<<endl;
    }
    // close the opened file.
    myfile.close();
// open a file in read mode.
   ifstream infile;
   infile.open("afile.dat");

   //cout << "Reading from the file" << endl;
   infile >> data;
   infile >> data1;

   // close the opened file.
   infile.close();


    return 0;
}
