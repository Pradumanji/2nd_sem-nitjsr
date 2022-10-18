/*
3) Write a program to handle the exception when substring function is applied to an
empty string.*/
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string str,str1;

    try
    {
        getline(cin,str);
        if(str.size()==0)
            throw 1;
        str1=str.substr(0,str.size()/2);
        cout<<str1;
    }
    catch(int n)
    {
        cout<<"\n String is empty. ";
    }
    return 0;
}
