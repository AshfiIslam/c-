#include <iostream>
using namespace std;
class student{
    public:
 int id;
 double gpa;
};
int main(){
student me;
me.id = 101;
me.gpa=3.71;

cout << me.id << "  "<< me.gpa;
}
