
#include<iostream>
using namespace std;
class programmimg
{
        int variable;
private:
    void input_value()
    {
        cout << "kkkkk\n";
        cin>> variable;
    }
public:
    void output_value(int a)
{
    variable = a;
    cout<< "variable\n";
    cout << variable << "\n";
}
};



/*void output_value()
{
    cout<< "variable\n";
    cout << variable << "\n";
}*/
int main(){
programmimg object;
//cout<< object.variable;
object.input_value();
cout<< object.variable;
return 0;
}
