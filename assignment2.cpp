#include <iostream>
using namespace std;

class Shape
{
    protected:
        int width, height;
        public:
        Shape( int a=0, int b=0)
        {
            width = a;
             height = b;
             }
             virtual int area()=0;
   /*virtual int area()
    {
        cout << "Parent class area :" <<endl;
         return 0;
         }*/
         };
          class circle: public Shape
         {
             public:
                 circle( int a=0):Shape(a){}
                  int area ()
                  {
                      cout << "circle class area :" <<endl;
                      return (2*width*width);
                      }};
         class Rectangle: public Shape
         {
             public:
                  Rectangle( int a=0, int b=0):Shape(a, b)
                  {
                  }
                  int area ()
                  {
                      cout << "Rectangle class area :" <<endl;
                      return (width * height);
                      }
                      };
    class Triangle: public Shape
    {
        public:
            Triangle( int a=0, int b=0):Shape(a, b) { }
            int area ()
            {
                cout << "Triangle class area :" <<endl;
                return (width * height / 2);
                 }
                  };
    int main( )
    {
        Shape *shape;
        circle cir(5);
        Rectangle rec(7,8);
        Triangle  tri(9,7);

      shape = &rec;
      cout<<shape->area()<<endl;

    shape = &tri;
    cout<<shape->area()<<endl;

    shape = &cir;
    cout<<shape->area();

    return 0;

    }
