
#include<iostream>
using namespace std;
class emp{
int emp_id;
string name;
float basic_salary,trans_cost;
float gross_salary;

public:
    void input();
    void cal();
    void show();
};
void emp ::input(){
cout << emp_id << name >> basic_salary >> trans_cost >> gross_salary<< endl;
}
void emp ::cal(){
cout << gross_salary<< endl;
}
void emp::show(){
cout << emp_id << name >> basic_salary >> trans_cost >> gross_salary<< endl;
}
int main(){
emp ob[5];
for(int i=0; i<=5; i++)
   ob[5].input();
for(int i=0; i<=5; i++)
   ob[5].cal();
   for(int i=0; i<=5; i++)
   ob[5].show();
}
