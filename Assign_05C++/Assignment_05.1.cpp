//1>>>>>
#include<iostream>
using namespace std;
int gcd (int a, int b)
{
    if (b==0)
        return a;
    return gcd(b,a%b);
}
class Fraction
{
    int num;
    int denom;
public:
    Fraction()
    {
        num =0;
        denom = 0;
    }
    Fraction (int a, int b)
    {
        num = a;
        denom = b;
    }
    void show_data()
    {
        cout<<"\n Fraction is : "<<num<<"/"<<denom;
    }
    friend Fraction operator + (Fraction, Fraction);
    friend Fraction operator - (Fraction, Fraction);
   // friend Fraction operator * (Fraction, Fraction);
   Fraction operator * ( Fraction f2)
{
    Fraction temp;
     temp.num = num *(f2.num);
    temp.denom  = denom * (f2.denom);
   // int g = gcd(nu,de);
    //return Fraction(nu/g,de/g);
    return temp;
}
    friend Fraction operator / (Fraction, Fraction);
   friend ostream & operator << (ostream &out,const Fraction &f);
   friend istream & operator >> (istream &in, Fraction &f);

};
 ostream & operator << (ostream &out, const Fraction &f)
    {
        out<<f.num<<"/"<<f.denom<<endl;
   // return out;
    }
  istream & operator >> (istream &in, Fraction &f)
    {
        in>>f.num>>f.denom;
//   return in;
    }
Fraction operator + (Fraction f1, Fraction f2)
{
    int nu = (f1.num)*(f2.denom) + (f2.num)*(f1.denom);
    int de = (f1.denom) * (f2.denom);
    int g = gcd(nu,de);
    return Fraction(nu/g,de/g);
}
Fraction operator - (Fraction f1, Fraction f2)
{
    int nu = (f1.num)*(f2.denom) - (f2.num)*(f1.denom);
    int de = (f1.denom) * (f2.denom);
    int g = gcd(nu,de);
    return Fraction(nu/g,de/g);
}
/*Fraction operator * (Fraction f1, Fraction f2)
{
    int nu = (f1.num)*(f2.num);
    int de = (f1.denom) * (f2.denom);
    int g = gcd(nu,de);
    return Fraction(nu/g,de/g);
}*/

Fraction operator / (Fraction f1, Fraction f2)
{
    int nu = (f1.num)*(f2.denom);
    int de = (f1.denom) * (f2.num);
    int g = gcd(nu,de);
    return Fraction(nu/g,de/g);
}
int main()
{
   // Fraction f1(7,3), f2(5,3);
   Fraction f1(1,2),f2;
  // cout<<"\n Enter fraction 1 :";
  // cin>>f1;
   cout<<"\n Enter fraction 2 :";
   cin>>f2;
    Fraction f3 = f1 + f2;
    Fraction f4 = f1 - f2;
    Fraction f5 = f1 * f2;
    Fraction f6 = f1/f2;
   f1.show_data();
    f2.show_data();
    cout<<"\n Addition of above  two given number : ";
    cout<<f3;
   // f3.show_data();
    cout<<"\n subtraction of above  two given number : ";
    cout<<f4;
   // f4.show_data();
    cout<<"\n Multiplication of above  two given number : ";
    cout<<f5;
   // f5.show_data();
    cout<<"\n Division of above  two given number : ";
    cout<<f6;
   // f6.show_data();

}
