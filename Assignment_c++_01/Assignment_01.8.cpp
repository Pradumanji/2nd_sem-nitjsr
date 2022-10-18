/*NAME -PRADUMAN
REG NO- 2021PGCACA001
8) Write a program to print the value of Gamma, Beta, and Psi function using math library.*/
#define _STDCPP_WANT_MATH_SPEC_FUNCS_ 1
#include <iostream>
#include<cmath>
using namespace std;

int main()
{   double x;
    cout << "\n ENTER VALUE OF X = ";
    cin>>x;
    cout<<"\n GAMMA OF X = "<<tgamma(x)<<endl;//GAMMA FUNCTION

    double a,b;
     cout << "\n ENTER VALUE OF a AND b = ";
    cin>>a>>b;
    cout<<"\n BETA OF A AND B = "<<beta(a,b)<<endl;//BETA FUNCTION

     double y;
    cout << "\n ENTER VALUE OF Y = ";
    cin>>y;
    cout<<"\n PSI OF X = "<<lgamma(y)<<endl;//PSI FUNCTION
    return 0;
}
