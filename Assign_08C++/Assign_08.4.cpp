/*

4) Demonstrate the recursive handling of exception during function call.*/
#include<bits/stdc++.h>
using namespace std;

void fun(int t)
{
    if(t==0)
        return;
    try
    {
        if(t%2!=0)
            throw string("not divisible by 2\n");

    }
    catch(string strr)
    {
        cout<<t<<" is "<<strr;
    }
    fun(t/2);
}

int main()
{
    int n;
    cout << "\n Enter any number : ";
    cin>>n;
    fun(n);
}
