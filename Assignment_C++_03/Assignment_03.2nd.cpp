/* NAME -: PRADUMAN
  ROLL NO -: 2021PGCACA001

  2) Declare a class Fraction having two data members; num and denom indicating
     numerator and denominator. It consists of the following member functions.
    i. A default constructor
    ii. A parameterized constructor
    iii. A destructor ( that displays the statement “object destroyed for class Fraction”)
    iv. Accessor functions : getFraction() to display the number in a/b format
    v. Mutator functions: setFraction(int,int) to set the values of a Fraction.
    vi. addFraction(Fraction,Fraction) : to add two Fraction objects passes as
      arguments and store the result in the third object that calls the function.
    vii. reduceFraction(Fraction) : to reduce a fraction to its equivalant form.
    viii. divFraction(Fraction,Fraction) : to divide two Fraction objects passed as
    arguments and store the result in the third object that calls the function. */

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


class Fraction  //class declaration
{   int num,denom;
public:
    Fraction()  //default constructor
    {
        num=0;denom=1;
    }
    Fraction(int n,int d) //parameterised constructor
    {
        num=n;denom=d;
    }
    ~Fraction()//destructor
    {
        cout<<"\nobject destroyed for class Fraction\n";
    }

    void getFraction(); //member function declaration
    void setFraction(int,int);
    void addFraction(Fraction,Fraction);
    void reduceFraction();
    void divFraction(Fraction,Fraction);
};//class close

//class member function definition*********
void Fraction::getFraction()
{
    cout<<"Fraction is="<<num<<"/"<<denom<<endl;
}

void Fraction::setFraction(int a,int b)
{
    num=a;denom=b;
}
void Fraction::addFraction(Fraction a,Fraction b)
{
    int p=a.num,q=a.denom,c=b.num,d=b.denom;
    num=p*d+c*q;
    denom=q*d;
}
 void Fraction::reduceFraction()
 {

     int t=__gcd(num,denom);
     num=num/t;
     denom=denom/t;
 }

 void Fraction::divFraction(Fraction f1,Fraction f2)
 {
     int p=f1.num,q=f1.denom,r=f2.num,s=f2.denom;
     num=p*s;
     denom=q*r;
 }
//class member function definition closed*********

int main() //main function
{
    Fraction obj1(8,7),obj2,obj3,obj4,obj5,result;
    int n,m,n1,m1;
bool b;

   int ch;
   while(1)
   {
    cout<<"\n*******MENU********\n";
    cout<<"1.get fraction\n";
    cout<<"2.set fraction\n";
    cout<<"3.add fraction\n";
    cout<<"4.reduce fraction \n";
    cout<<"5.divide fraction\n";
    cout<<"6.exit\n";
    cout<<"enter any no:";
    cin>>ch;
    switch(ch)
    {
    case 1:

       obj1.getFraction();
        break;
    case 2:

        cout<<"enter numerator and denominator=";
        cin>>n>>m;
        obj2.setFraction(n,m);
        obj2.getFraction();
        break;
    case 3:

        cout<<"enter numerator and denominator of 1st fraction=";
        cin>>n>>m;
         obj3.setFraction(n,m);

        cout<<"enter numerator and denominator of 2nd fraction=";
        cin>>n1>>m1;
         obj4.setFraction(n1,m1);
         result.addFraction(obj3,obj4);
         result.reduceFraction();
         result.getFraction();
        break;
    case 4:

         cout<<"enter numerator and denominator=";
        cin>>n>>m;
         obj5.setFraction(n,m);
         obj5.reduceFraction();
         obj5.getFraction();
        break;
    case 5:

        cout<<"enter numerator and denominator of 1st fraction=";
        cin>>n>>m;
         obj3.setFraction(n,m);

        cout<<"enter numerator and denominator of 2nd fraction=";
        cin>>n>>m;
         obj4.setFraction(n,m);
         result.divFraction(obj3,obj4);
         result.reduceFraction();
         result.getFraction();
        break;
    case 6:
        return 0;
        break;
    default:
        cout<<"wrong choice\n";


    }
   }
}
