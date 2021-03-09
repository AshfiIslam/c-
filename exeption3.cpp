#include<iostream>
using namespace std;
int main ()
{
    try{
    throw 10;
    }
    catch (int i){
    cout<< i;
    }
}
