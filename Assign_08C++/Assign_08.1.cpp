/*
1) Design a program to handle multiple exceptions. i.e. divide by zero, divide by
very large numbers and divide by negative numbers. */
#include <iostream>
using namespace std;
int digit(long long n)
{
    int d,c=0;
    while(n>0)
    {
        d=n%10;
        c++;
        n/=10;
    }

    return c;

}

int main()
{
    long long num,denom;
    try
    {
        cout << "\n Enter numerator and denominator of fraction : ";
        cin>>num>>denom;
        if(denom==0)
        {
            throw 0;

        }

        else if(denom<0)
            throw 'a';
        else if(digit(denom)>9)
            throw 1.0;
        cout<<"\n Division of "<<num<<" ans "<<denom<<" is : "<<num*1.0/denom;
    }
    catch(int )
    {
        cout<<"\n Attempted to divide by 0 "<<endl;
    }
    catch(char )
    {
        cout<<"\n Attempted to divide by a negative number"<<endl;
    }
    catch(double )
    {
        cout<<"\n Attempted to divide by very large no";
    }



    return 0;
}
