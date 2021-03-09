#include<iostream>
using namespace std;
int main ()
{
    try{
    throw 10.8;
    }
    catch (double i){
    cout<< i;
    }
}
