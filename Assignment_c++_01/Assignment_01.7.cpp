/*NAME -PRADUMAN
REG NO- 2021PGCACA001
7) Write a program in C++ to define a recursive and a non-recursive function for
computing sum of digits of a given integer n of any size.*/
#include <iostream>

using namespace std;

int digit_sum(int n) //NON RECURSIVE FUNCTION TO COMPUTE SUM OF DIGITS
{
    int sum=0;
    while(n>0)
    {
        int d = n%10;
        sum += d;
        n = n/10;
    }
    return sum;
}

int recursive_sum(int n)  //RECURSIVE FUNCTION TO COMPUTE SUM OF DIGITS
{
    if(n==0)
        return 0;
    return (n%10+recursive_sum(n/10));

}

int main()
{
    int n;
    cout<<"ENTER ANY NUMBER : ";
    cin>>n;
    int ans1 = digit_sum(n);
    int ans2 = recursive_sum(n);
    cout<<"\n SUM OF NON-RECURSIVE FUNCTION CALL : "<<ans1<<"\n"<<"\n SUM OF RECURSIVE FUNCTION CALL : "<<ans2<<endl;//SHOW THE OUTPUT
    return 0;
}
