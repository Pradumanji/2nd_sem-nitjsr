/*
2) Use a function template to perform insertion sort on the arrays of i. integers, ii.
doubles, iii. Distances (feet, inches) */
#include <iostream>
using namespace std;

class Dist
{
    int feet,inch;
public:
    Dist()
    {
        feet=0;
        inch=0;
    }
    Dist(int a,int b)
    {
        feet=a;
        inch=b;
    }
    friend void operator>>(istream&,Dist&);
    friend void operator<<(ostream&,Dist&);
    friend bool operator>(Dist &,Dist&);

};

void operator>>(istream& in,Dist& d)
{
    in>>d.feet>>d.inch;
}
void operator<<(ostream& out,Dist& d)
{
    out<<d.feet<<"feet "<<d.inch<<"inch";
}

bool operator>(Dist &d1,Dist &d2)
{
    if(d1.feet>d2.feet)
        return 1;
    else if(d1.feet==d2.feet && (d1.inch>d2.inch))
        return 1;
    return 0;

}

template <class T>
void insertion_sort(T a[],int n)
{
    int j;
    T temp;
    for(int i=0; i<n; i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"sorted list is:-\n";
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
        cout<<endl;
    }

}


int main()
{
    int ch;
    int n,temp,j;
    while(1)
    {
        cout<<"\n1.sort integer array"<<endl;
        cout<<"2.sort double array"<<endl;
        cout<<"3.sort distance array"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice=";
        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            cout << "enter size of array=";
            cin>>n;
            int a[n];
            for(int i=0; i<n; i++)
            {
                cout<<"enter element["<<i<<"]=";
                cin>>a[i];
            }
            insertion_sort(a,n);
            break;
        }
        case 2:
        {
            cout << "enter size of array=";
            cin>>n;
            double a[n];
            for(int i=0; i<n; i++)
            {
                cout<<"enter element["<<i<<"]=";
                cin>>a[i];
            }
            insertion_sort(a,n);
            break;
        }
        case 3:
        {
            cout << "enter size of array=";
            cin>>n;
            Dist a[n];
            for(int i=0; i<n; i++)
            {
                cout<<"enter element["<<i<<"] in (feet,inches) =";
                cin>>a[i];
            }
            insertion_sort(a,n);
            break;
        }
        case 4:
            return 0;
        default:
            cout<<"wrong choice";

        }
    }

    return 0;
}
