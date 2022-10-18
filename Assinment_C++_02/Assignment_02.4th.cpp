/*NAME -PRADUMAN
REG NO- 2021PGCACA001
4) Write a program in C++ to define an overloaded functions “plusoverloaded” that
   returns result depending on the type of inputs
 i. if two floats are passed, then addition operation to be performed on inputs.
 ii. if two strings are passed, then concatenation of two strings is performed.
 iii. if an integer array, its size and an integer is passed then the given integer is
      added to all the elements of the array.
 iv. If two integer arrays are passed, the both the arrays are merged by eliminating
     duplicate entries.*/
#include <iostream>
using namespace std;
#define MAX 100
float plusoverloaded(float a,float b)
{
    float result = a+b;
    return result;
}
string plusoverloaded(string a,string b)
{
    string str = a+b;
    return str;
}

void plusoverloaded(int* a,int n,int key)
{
    for(int i=0; i<n; i++)
        a[i]+=key;
}
void plusoverloaded(int* a,int n,int* b,int m)
{
    int k=0;
    int merge[MAX];
    for(int i=0; i<n; i++)
        merge[k++]=a[i];
    for(int i=0; i<m; i++)
    {
        int temp=0;
        for(int j=0; j<n; j++)
        {
            if(b[i]==a[j])
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
            merge[k++]=b[i];
    }

    for(int i=0; i<k; i++)
        cout<<merge[i]<<" ";
}

int main()
{

    int ch;

    while(1)
    {
        cout<<"\n**********************MENU************************\n"<<endl;
        cout<<" 1) ADDING FLOAT VALUES :"<<endl;
        cout<<" 2) CONCATENATE STRINGS :"<<endl;
        cout<<" 3) ADD ELEMENT TO ARRAY :"<<endl;
        cout<<" 4) MERGE ARRAY :"<<endl;
        cout<<" 5) EXIT. "<<endl;
        cout<<"\n ENTER YOUR CHOICE : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            float a,b,sum;
            cout<<"\n ENTER TWO FLOAT VALUES = ";
            cin>>a>>b;
            sum=plusoverloaded(a,b);
            cout<<" SUM OF "<<a<<" AND "<<b<<" = "<<sum<<endl;
            break;
        }
        case 2:
        {
            string s1,s2,str;
            cout<<"\n ENTER TWO STRING VALUES = ";
            cin>>s1>>s2;
            str=plusoverloaded(s1,s2);
            cout<<" CONCATENATION OF "<<s1<<" AND "<<s2<<" = "<<str<<endl;
            break;
        }
        case 3:
        {
            int size,k;
            cout<<" ENTER SIZE OF ARRAY = ";
            cin>>size;
            int arr[size];
            cout<<" ENTER "<<size<<" ARRAY ELEMENTS = ";
            for(int i=0; i<size; i++)
                cin>>arr[i];
            cout<<" ENTER ANY INTERGER TO ADD IN ARRAY = ";
            cin>>k;

            plusoverloaded(arr,size,k);
            cout<<"\n THE RESULT ARRAY AFTER ADDING "<<k<<" IS AS :- "<<endl;
            for(int i=0; i<size; i++)
                cout<<arr[i]<<" ";
            cout<<endl;
            break;
        }
        case 4:
        {
            int n,m;
            cout<<" ENTER SIZE OF 1ST ARRAY= ";
            cin>>n;
            int arr1[n];
            cout<<" ENTER "<<n<<" ARRAY ELEMENTS= ";
            for(int i=0; i<n; i++)
                cin>>arr1[i];
            cout<<"\n ENTER SIZE OF 2ND ARRAY= ";
            cin>>m;
            int arr2[n];
            cout<<" ENTER "<<m<<" ARRAY ELEMENTS= ";
            for(int i=0; i<m; i++)
                cin>>arr2[i];
            plusoverloaded(arr1,n,arr2,m);
            cout<<endl;
            break;
        }
        case 5:

        {

            return 0;
        }
        default:
            cout<<"WRONG CHOICE:"<<endl;
        }
    }

    return 0;
}

