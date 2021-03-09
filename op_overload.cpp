#include<iostream>
using namespace std;
class box{
double length;
double breadth;
double height;
public:
void setlen(double len){
length=len;
}
void setbrd(double b){
breadth=b;
}
void setht(double h){
height=h;
}
double getvolume(void){
return length*breadth*height;
}
box operator+(const box& b){
box ob;
ob.length=this->length+b.length;

ob.breadth=this->breadth+b.breadth;

ob.height=this->height+b.height;
return ob;
}

box operator-(const box& b){
box ob;
ob.length=this->length-b.length;

ob.breadth=this->breadth-b.breadth;

ob.height=this->height-b.height;
return ob;
}
};
int main(){
box a;
box b;
box c;
double volume=0.0;
a.setlen(10.0);
a.setbrd(20.0);
a.setht(2.0);

b.setlen(6.0);
b.setbrd(5.0);
b.setht(2.0);

volume=a.getvolume();
cout<<"box1 "<<volume<<endl;

volume=b.getvolume();
cout<<"box2 "<<volume<<endl;

//c=a+b;
volume=
(a+b).getvolume();
cout<<"volume "<<volume<<endl;

volume=
(a-b).getvolume();
cout<<"volume "<<volume<<endl;
return 0;
}

