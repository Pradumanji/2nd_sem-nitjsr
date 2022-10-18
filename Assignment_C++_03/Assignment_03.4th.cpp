/*NAME -: PRADUMAN
  ROLL NO -: 2021PGCACA001

4) Declare a class Time having three data members; hour, minute, and second in
24 hour format. It consist of the following member functions.
ix. A default constructor
x. A parameterized constructor
xi. A destructor ( that diplays the statement “object destroyed for class Time”)
xii. Accesor functions : getTime() prints time in HH:MM:SS AM/PM format.
xiii. Mutator functions: setTime(int,int,int), to set data members where arguments
are passed by reference.
xiv. calcTimeDifference(Time, Time) : finds the time difference between two given
times and stores the result in the third object that has calls the function.
xv. resetTime() : it sets time to 00:00:00
*/
#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>

using namespace std;

class Time //class definition
{
     int hr,min,sec;
 public:
    Time() //default constructor
    {
        hr=0;
        min=0;sec=0;
    }
    Time(int h,int m,int s) //parameterised constructor
    {
        hr=h;
        min=m;
        sec=s;
    }

     ~Time() //destructor
    {

        cout<<"\nobject destroyed for class Point2D\n";
    }
   void getTime();
   void setTime(int,int,int);
   void calcTimeDifference(Time, Time);
   void resetTime();
   void dispTimediff();

};//class closed

//class member function definition*********

     void Time::getTime()
   {   if(hr>12)
       cout<<setw(2)<<setfill('0')<<hr-12<<":"<<setw(2)<<setfill('0')<<min<<":"<<setw(2)<<setfill('0')<<sec<<" PM"<<endl;
       else if(hr<=12)
       cout<<setw(2)<<setfill('0')<<hr<<":"<<setw(2)<<setfill('0')<<min<<":"<<setw(2)<<setfill('0')<<sec<<" AM"<<endl;
        else
        cout<<"invalid time"<<endl;
   }

   void Time::setTime(int a,int b,int c)
   {
      hr=a; min=b; sec=c;
   }
   void Time::calcTimeDifference(Time a1, Time a2)
   {
      int h1=a1.hr,m1=a1.min,s1=a1.sec;
      int h2=a2.hr,m2=a2.min,s2=a2.sec;
      if(s1<s2)
       {sec=s1+60-s2;
         m1--;
       }
       else
        sec=s1-s2;

         if(m1<m2)
       {min=m1+60-m2;
         h1--;
       }
       else
        min=m1-m2;
        hr=abs(h1-h2);


   }
   void Time::resetTime()
   {
       hr=0;
       min=0;
       sec=0;
   }
   void Time::dispTimediff()
   {
       cout<<setw(2)<<setfill('0')<<hr<<"hr "<<setw(2)<<setfill('0')<<min<<"min "<<setw(2)<<setfill('0')<<sec<<"sec "<<endl;

   }
//class member function definition closed*********

int main()
{
   Time obj1(5,0,0),obj2,obj3,obj4,obj5,result;
    int n,m,n1,m1,p,p1;
bool b;

   int ch;
   while(1)
   {
    cout<<"\n*******MENU********\n";
    cout<<"1.get Time\n";
    cout<<"2.set Time\n";
    cout<<"3.calculate Time difference\n";
    cout<<"4.reset Time\n";
    cout<<"5.exit\n";
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:

       obj1.getTime();
        break;
    case 2:

        cout<<"enter hour,min and second=";
        cin>>n>>m>>p;
        obj2.setTime(n,m,p);
        obj2.getTime();
        break;
    case 3:

        cout<<"enter hour,min and second=";
        cin>>n>>m>>p;
         obj3.setTime(n,m,p);
        cout<<"enter hour,min and second=";
        cin>>n1>>m1>>p1;
         obj4.setTime(n1,m1,p1);
         result.calcTimeDifference(obj3,obj4);
         result.dispTimediff();
       break;
    case 4:
         cout<<"enter hour,min and second=";
        cin>>n>>m>>p;
         obj5.setTime(n,m,p);
         obj5.resetTime();
         obj5.getTime();
        break;

    case 5:
        return 0;
        break;
    default:
        cout<<"wrong choice\n";


    }
   }
}
