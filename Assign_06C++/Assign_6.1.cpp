/* Name : Praduman
 roll no : 2021pgcaca001
     1) Implement the following class hierarchy by defining all functions of each class.
         Demonstrate the call of each function and access to each data member using an
         object of bottom most class. In addition to all operations, show the order of
          execution for constructors and destructors for multi-level inheritance.
    Class : Point
          Members: xco, yco
          Functions: constructors, destructors, print()
    Class : Circle (inherits Point)
          Members : radius
          Functions: consturctors, destructors, print(), float area()
    Class: Cylinder (inherits Circle)
          Members : height
          Functions: constructors, destructors, print, float surarea(), float volume() */
#include<iostream>
#define pie 3.14
using namespace std;
class point
{
protected:
    int Xco, Yco;
public:
    point():Xco(0),Yco(0){}
    point(int, int);
    ~point();
};
class Circle : public point
{
protected:
    double radius;
public:
    Circle():radius(0){}
    Circle(double, int, int) ;

    void Circle_area()
    {
        cout<<"\n Area of circle is : "<<pie*radius*radius<<endl;
    }
    ~Circle();
};
class Cylinder: public Circle
{
protected:
    int height;
public:
    Cylinder(int, double);

    void  Surface_area()
    {
        cout<<"\n Surface area of cylinder is : " << 2*pie*radius*height<<endl;
    }
    void Cylinder_vollume()

    {
        cout<<"\n Volume of cylinder is : "<<pie*radius*radius*height<<endl;
    }
    ~Cylinder();
};
point::point(int a, int b): Xco(a), Yco(b)
{
    cout<<"\n point constructor : "<<"["<<Xco<<','<<Yco<<"]";
}
point::~point()
{
    cout<<"\n point destructor : "<<"["<<Xco<<','<<Yco<<"]";
}
Circle::Circle(double r, int a, int b):point(a,b),radius(r)
{
    cout<<"\n Circle constructor : rad "<<radius<<endl<<"["<<Xco<<','<<Yco<<"]";
}
Circle::~Circle()
{
    cout<<"\n Circle destructor : rad "<<radius<<endl<<"["<<Xco<<','<<Yco<<"]";
}
Cylinder::Cylinder(int h, double r) :  height(h)
{   radius=r;
    cout<<"\n Height of cylinder : "<<height<<" and radius : "<<radius<<endl;
}
Cylinder::~Cylinder()
{
    cout<<"\n Height of cylinder : "<<height<<" and radius : "<<radius<<endl;
}
int main()
{
    point p(10,11);
    Circle c(4.0,3,4);
    Cylinder cy(5,6.5);
    c.Circle_area();
    cy.Surface_area();
    cy.Cylinder_vollume();
       return 0;
}
