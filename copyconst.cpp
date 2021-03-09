
#include <iostream>
using namespace std;
class Student
{
    public:
 int rollno;
 string name;
 public:
 Student(int x)
 {
  rollno=x;
  name="None";

 }
 Student(int x, string str)
 {
  rollno=x ;
  name=str ;
  //cout<<rollno<<" "<<name;
 }
};
int main()
{
 Student A(10);
 Student B(11,"Ram");

 cout<<A.rollno<<" "<<A.name<<endl;
 cout<<B.rollno<<" "<<B.name<<endl;
}
