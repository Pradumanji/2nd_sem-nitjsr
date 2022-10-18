//2>>>>>>>>>>>>
#include<iostream>
using namespace std;
class Fraction
{
    int num, denom;
public :
    Fraction(int n, int d)
    {
        num = n;
        denom = d;
    }
    void show_data()
    {
        cout<<"\n Fraction : "<<num<<"/"<<denom<<endl;
    }
    friend Fraction operator +=(Fraction f , int a);
    friend Fraction operator -=(Fraction f , int a);
};

Fraction operator +=(Fraction f , int a)
{
    int nu = f.num + f.denom *a;
    int de = f.denom;
    cout<<nu<<"/"<<de;
    //return (nu/de);
}
Fraction operator -=(Fraction f , int a)
{
    int nu = f.num - f.denom *a;
    int de = f.denom;
    cout<<nu<<"/"<<de;
   // return (nu,de);
}
int main()
{
    Fraction f1(2,5),f2(3,5);
    f1.show_data();
    int a = 6;
    cout<<"\n After adding "<<a<<"\n Fraction is :";
    f1+=a;

   // f1.show_data();
   f2.show_data();
   cout<<"\n After subtracting "<<a<<"\n Fraction is :";
    f2-=a;

   // f2.show_data();

}
