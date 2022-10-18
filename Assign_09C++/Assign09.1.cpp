/*
1) To print an array of elements, use a function template for arrays of i. integers, ii.
doubles, iii.Strings, and iv. Complex numbers*/
#include <iostream>

using namespace std;
class complex
{
    int real,img;
public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(int a,int b)
    {
        real=a;
        img=b;
    }
    friend ostream & operator<<(ostream&,complex&);
    friend void operator>>(istream&,complex&);
};
ostream & operator<<(ostream& out,complex& c)
{
    out<<c.real<<"+"<<c.img<<"i";
    return out;
}
void operator>>(istream& in,complex& c)
{
    in>>c.real>>c.img;
}
template <class T>
void print(T arr[],int n)
{
    cout<<" Array elements are as :- "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
}
int main()
{
    int ch,sz;
    while(1)
    {
        cout<<"\n 1) Integer array";
        cout<<"\n 2) Double array";
        cout<<"\n 3) String array";
        cout<<"\n 4) Complex array";
        cout<<"\n 5) Exit";
        cout<<"\n Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            cout<<"\n Enter size of array : ";
            cin>>sz;
            int a[sz];
            for(int i=0; i<sz; i++)
            {
                cout<<" Enter element ["<<i<<"]=";
                cin>>a[i];
            }
            print(a,sz);
            break;
        }
        case 2:
        {
            cout<<"\n Enter size of array : ";
            cin>>sz;
            double a[sz];
            for(int i=0; i<sz; i++)
            {
                cout<<" Enter element ["<<i<<"]=";
                cin>>a[i];
            }
            print(a,sz);
            break;
        }
        case 3:
        {
            cout<<"\n Enter size of array=";
            cin>>sz;
            string a[sz];
            for(int i=0; i<sz; i++)
            {
                cout<<" Enter element ["<<i<<"]=";
                cin>>a[i];
            }
            print(a,sz);
            break;
        }
        case 4:
        {
            cout<<"\n Enter size of array=";
            cin>>sz;
            complex a[sz];
            for(int i=0; i<sz; i++)
            {
                cout<<" Enter element ["<<i<<"] as(real,img)=";
                cin>>a[i];
            }
            print(a,sz);
            break;
        }
        case 5:
            return 0;
        default:
            cout<<"wrong choice";
        }
    }
}
