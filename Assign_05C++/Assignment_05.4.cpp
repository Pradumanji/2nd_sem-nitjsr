#include <bits/stdc++.h>

using namespace std;
class MixFraction
{
    int data,num,denom;
public:
    MixFraction()
    {
        data=0;
        num=0;
        denom=1;
    }
    MixFraction(int d,int n,int m)
    {
        data=d;
        num=n;
        denom=m;
    }
    void showdata()
    {
        cout<<"fraction="<<data<<"*"<<num<<"/"<<denom<<endl;
    }

    friend class Fraction;
};
class Fraction
{
    int num,denom;
public:
    Fraction()
    {
        num=0;
        denom=1;
    }
    Fraction(int n,int m)
    {
        num=n;
        denom=m;
    }
    operator float()
    {
        float temp;
        temp=(float)num/denom;
        return temp;
    }
    operator MixFraction()
    {
        MixFraction temp;

        int g=num/denom;
        temp.data=g;
        temp.denom=denom;
        temp.num=num-g*temp.denom;

        return temp;
    }

    friend void operator<<(ostream&,Fraction&);
    friend void operator>>(istream&,Fraction&);
};
void operator<<(ostream& out,Fraction& f)
{
    cout<<"\nFRACTION="<<f.num<<"/"<<f.denom;
}

void operator>>(istream& in,Fraction& f)
{
    cout<<"ENTER FRACTION=";
    cin>>f.num>>f.denom;
}

int main()
{
    Fraction f1,f2,f3;
    MixFraction m;
    int ch,n;
    while(1)
    {
        cout<<"\n****MENU**"<<endl;
        cout<<"1) FRACTION TO FLOAT : "<<endl;
        cout<<"2) FRACTION TO MIX FRACTION : "<<endl;
        cout<<"3) EXIT "<<endl;
        cout<<"ENTER YOUR CHOICE = ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cin>>f1;
            float f;
            f=f1;
            cout<<f;
            break;
        case 2:
            cin>>f1;
            m=f1;
            m.showdata();
            break;

        case 3:
            return 0;
        default:
            cout<<"WRONG CHOICE"<<endl;

        }
    }
    return 0;
}
