/*
2) Write a program to handle array index out of bound exception, and using userdefined exception objects.
*/
#include <iostream>
#include<exception>
using namespace std;
class MyException : public exception{
    public:
        const char * what() const throw()
        {
            return "\nArray out of bounds.";
        }
};
int main()
{   int n,p,ex;
    cout << " Enter size of array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
            cout<<"enter array element=["<<i<<"]=";
            cin>>a[i];

        }

        try
        {
            cout<<"\n Enter any index to get the value : ";
            cin>>p;
            if(p<0 || p>=n)
                {
                    MyException ex;
                    throw ex;
                }
                cout<<"value="<<a[p];
        }
        catch(exception& e)
        {
            cout<<e.what();
        }

    return 0;
}
