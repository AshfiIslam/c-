#include<iostream>
using namespace std;
class cls{
public:
    int id;
    double cg;
    void disp(){
    cout << id << ' ' << cg;
    }
};
int main(){
cls ob1,ob2;
ob1.id= 101;
ob1.cg= 77.7;
ob1.disp();
//getch();
}
