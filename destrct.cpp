#include<iostream>
using namespace std;
class Line{
public:
    void setLength(double len);
    double getLength(void);
    Line();
    ~Line();
private:
    double length;
};
Line::Line(void){
cout<< "created"<<endl;
}

Line::~Line(void){

cout<< "deleted"<<endl;
}
void Line::setLength(double len){
length = len;
}
double Line::getLength(void){
return length;
}

/*Line::~Line(void){

cout<< "deleted"<<endl;
}*/
int main()
         {
             Line line;
             line.setLength(12.0);
             cout<< "length of line :"<< line.getLength()<< endl;
             return 0;
         }
