/*NAME -PRADUMAN
REG NO- 2021PGCACA001
4) Write a C++ program to input an integer array and define a function to count the
number of integers having duplicate value. use reference argument for this purpose .*/
#include <iostream>
using namespace std;

int duplicate(int *&a,int &n) //FUNCTION TO COUNT DUPLICATE VALUES
{
    int t;
    int duplicate_array[n],k=0;
    for(int i=0; i<n; i++)
    {
        t=a[i];
        for(int j=i+1; j<n; j++)
        {
            if(t==a[j])
            {
                int temp=0;
                for(int l=k; l>=0; l--)
                {
                    if(t==duplicate_array[l]) temp=1;
                }
                if(temp==0)
                    duplicate_array[k++]=t;
            }
        }
    }
    return k;
}

int main()
{
    int n;
    cout <<"ENTER SIZE OF ARRAY=";
    cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"ENTER ELEMENT["<<i+1<<"] :"; //INPUT ARRAY ELEMENTS
        cin>>arr[i];
    }
    int count=duplicate(arr,n);
    cout<<"\n NUMBER OF ELEMENTS HAVING DUPLICATE VALUE = "<<count<<endl; //SHOW NO OF DUPLICATE ELEMENTS
    return 0;
}
