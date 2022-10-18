/*NAME -: PRADUMAN
  ROLL NO -: 2021PGCACA001

3) Declare a class Poin2D having two data members; xCo & yCo stands for xcoordinate
and y-coordinate. The class consists of the following members functions.
i. A default constructor
ii. A parameterized constructor
iii. A destructor ( that diplays the statement “object destroyed for class Point2D”)
iv. Accesor functions : getPoint() to display the 2D point in (xCo, yCo) format
v. Mutator functions: setPoint(xco,yco) to set the values of 2D point.
vi. bool insideCircle(int r, Point2D cen) : to check and returns whether the point
object that calls this member function is inside the circle defined by the radius r
and center cen passed as arguments to this function.
vii. bool checkCollinear(Point2D,Point2D): check whether given three 2D points are
collinear .
viii. bool onAxis() : return true is the point is on one of the axis.
*/
#include <iostream>

using namespace std;


class Point2d //class declaration
{
    int xco,yco;
public:
    Point2d() //default constructor
    {
        xco=0;
        yco=0;
    }
    Point2d(int a,int b) //parameterised constructor
    {

        xco=a;
        yco=b;
    }
    ~Point2d() //destructor
    {

        cout<<"\nobject destroyed for class Point2D\n";
    }
    void getPoint();
    void setPoint(int a,int b);
    bool insideCircle(int r, Point2d cen);
    bool checkCollinear(Point2d,Point2d);
    bool onAxis();

};//class closed

//class member function definition*********
   void Point2d::getPoint()
   {
       cout<<"X co-ordinate="<<xco<<"\nY co-ordinate="<<yco<<endl;
   }

   void Point2d::setPoint(int a,int b)
   {
       xco=a;
       yco=b;
   }
   bool Point2d::insideCircle(int r, Point2d cen)
   {   bool b;
       int x=cen.xco;
       int y=cen.yco;
       int t=(x-xco)*(x-xco)+(y-yco)*(y-yco)-r*r;
       if(t<0)
        b=true;
       else
        b=false;
       return b;
   }
    bool Point2d::checkCollinear(Point2d p1,Point2d p2)
   {
       int p=p1.xco;
       int q=p1.yco;
       int a=p2.xco;
       int b=p2.yco;
       int ans=(yco-q)*(a-p)-(b-q)*(xco-p);
       if(ans==0)
        return true;
       else
       return false;
   }
   bool Point2d::onAxis()
   {
       if(xco==0 || yco==0)
         return true;
       else
        return false;

   }

   //class member function definition closed*********

int main()
{
  Point2d obj1(5,5),obj2,obj3,obj4,obj5,result;
    int n,m,n1,m1,r;
bool b;

   int ch;
   while(1)
   {
    cout<<"\n************MENU************\n";
    cout<<"1.get co-ordinates of Point\n";
    cout<<"2.set co-ordinates of Point\n";
    cout<<"3.check point is inside circle or not\n";
    cout<<"4.check collinear \n";
    cout<<"5.check point is on axis or not\n";
    cout<<"6.exit\n";
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:

       obj1.getPoint();
        break;
    case 2:

        cout<<"enter x and y co-ordinate=";
        cin>>n>>m;
        obj2.setPoint(n,m);
        obj2.getPoint();
        break;
    case 3:
         cout<<"enter x and y co-ordinates of a point=";
        cin>>n1>>m1;
         obj4.setPoint(n1,m1);
        cout<<"enter x and y co-ordinates of center=";
        cin>>n>>m;
         obj3.setPoint(n,m);
        cout<<"enter radius=";
        cin>>r;
       b=obj4.insideCircle(r,obj3);

        if(b==true)
            cout<<"point is inside circle"<<endl;
        else
            cout<<"point is not inside circle"<<endl;

        break;

    case 4:

        cout<<"enter x and y co-ordinates of point 1=";
        cin>>n>>m;
         obj3.setPoint(n,m);
          cout<<"enter x and y co-ordinates of point 2=";
        cin>>n>>m;
         obj4.setPoint(n,m);
        cout<<"enter x and y co-ordinates of point 3=";
        cin>>n>>m;
         obj5.setPoint(n,m);
         b=obj3.checkCollinear(obj4,obj5);
           if(b==true)
            cout<<"these points are collinear"<<endl;
        else
            cout<<"these points are not collinear"<<endl;

        break;
    case 5:
        cout<<"enter x and y co-ordinates of point=";
        cin>>n>>m;
         obj3.setPoint(n,m);
          b=obj3.onAxis();
           if(b==true)
            cout<<"point is on axis"<<endl;
        else
            cout<<"point is not on axis"<<endl;
            break;

    case 6:
        return 0;
        break;
    default:
        cout<<"wrong choice\n";


    }
   }
}
