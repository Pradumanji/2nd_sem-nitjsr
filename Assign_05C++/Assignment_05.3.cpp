//3???????????????
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
    void operator ++(); // pre increment
    void operator ++(int); // post increment
    friend void operator --(Fraction &);//pre decrement
    friend void operator --(Fraction &, int); // post decrement
};
void Fraction :: operator ++()
{
    num = num+denom;
    denom = denom;
}
void Fraction :: operator ++(int)
{
    num = num+denom;
    denom = denom;
}
void operator --(Fraction &f)
{
    f.num = f.num- f.denom;
    f.denom = f.denom;
}
void operator --(Fraction &f, int)
{
    f.num = f.num- f.denom;
    f.denom = f.denom;
}

int main()
{
    Fraction f1(3,5), f2(4,5);
    f1.show_data();
    f2.show_data();
    f1++; ++f2;
    cout<<"\n pre and post increment of above fraction is ";
    f1.show_data();
    f2.show_data();
    f1--; --f2;
    cout<<"\n pre and post decrement of above fraction is ";
    f1.show_data();
    f2.show_data();



}
