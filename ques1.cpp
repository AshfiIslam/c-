#include<iostream>
using namespace std;
class programmimg
{
public:
    int variable;

    void input_value()

    {
        //variable=n
        cout << "kkkkk\n";
        cin>> variable;
    }
};
void output_value()
{int variable;
    cout<< "variable\n";
    cout << variable << "\n";
}
int main(){
programmimg object;
cout<<object.variable;
object.input_value();
return 0;
}
