/* Name : Praduman
 Roll no : 2021pgcaca001
     1) ) Implement the abstract class and override the functions of the abstract class in
         the provided derived classes.
    Class : Shape2D
          Members: type
          Functions: area()=0, perimeter()=0
    Class: Circle (inherits Shape2D)
          Members: center, radius
          Functions: area(), perimeter(), print()
    Class: Triangle (inherits Shape2D)
          Members: base, height
    Functions: area(), perimeter(), print()
    */
#include<iostream>
#include<math.h>
#define pie 3.14
using namespace std;

class Shape2D
{
    protected:
    int type;
public:
    virtual void area()=0;
    virtual void perimeter()=0;
};
class Circle : public Shape2D
{
    protected:
    //Shape2D center;
    int center;
    float radius;
    public :
    Circle():radius(0){}
    Circle(float r):radius(r){}
    void area()
    {
        cout<<"\n Area of circle is : "<<pie*radius*radius<<endl;
    }
    void perimeter()
    {
        cout<<"\n Perimeter of circle is : "<<2*pie*radius<<endl;
    }
    void print ()
    {
        cout<<"\n Radius of circle is :"<<radius;
    }
};
class Triangle : public Shape2D
{
    float base,height;
public:
    Triangle():base(0),height(0) {}
     Triangle(int b,int h):base(b),height(h) {}

    void area()
    {
        cout<<"\n Area of triangle is : "<<0.5*base*height<<endl;
    }
    void perimeter()
    {
        float a = sqrt(pow(height,2)+pow(base/2,2));
        cout<<"\n Perimeter of triangle is : "<<a+a+base<<endl;
    }
    void print ()
    {
        cout<<"\n Base of the triangle is :"<<base<<" and Height of the triangle is :"<<height<<endl;
    }

};
int main()
{
    //Shape2D s(2,5);
    Circle c(2.5);
    c.area();
    c.perimeter();
    c.print();
    Triangle t(4,5);
    t.area();
    t.perimeter();
    t.print();
}
