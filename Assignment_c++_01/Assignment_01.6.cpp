/*NAME -PRADUMAN
REG NO- 2021PGCACA001
6) Write a program using C++ to input an interger array of n elements by creating it
using pointer, and define a function to input an index position, ‘pos’ of the array and
prints number of elements on the left of ‘pos’ that are less than the element at ‘pos’,
and number of elements on the right of the ‘pos’ that are greater than the element at
‘pos’.*/
#include <iostream>
using namespace std;

void fun_array(int a[],int n)  //FUNCTION TO FIND THE NO. OF ELMENTS LESS OR GREATER THAN THE ARRAY POSITION
{
    int pos,left_count=0,right_count=0;
    cout<<"\n ENTER ANY POSITION( 0 BASED INDEX OF ARRAY ):";
    cin>>pos;
    if(pos>=n)
    {
        cout<<"\n ARRAY POSITION IS NOT VALID "<<endl;
        return;
    }
    int key = a[pos];
    for(int i=0; i<pos; i++)
    {
        if(a[i]<key) left_count++;  //COUNT LEFT ELEMENTS LESS THAN ELEMENT WHOSE POSITION IS SPECIFIED BY USER

    }
    for(int i=pos; i<n; i++)
    {
        if(a[i]>key) right_count++;  //COUNT RIGHT ELEMENTS GREATER THAN ELEMENT WHOSE POSITION IS SPECIFIED BY USER

    }
    cout<<endl;
    cout<<"LEFT < ARRAY["<<pos<<"]="<<left_count<<endl;  //SHOW RESULT
    cout<<"RIGHT > ARRAY["<<pos<<"]="<<right_count<<endl; //SHOW RESULT

}

int main()
{
    int n;
    printf("ENTER SIZE OF ARRAY:");
    cin>>n;
    int *ptr=new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"ENTER ELEMENT "<<i<<"=";
        cin>>*(ptr+i);        //INPUT ARRAY ELEMENT
    }
    fun_array(ptr,n);
    delete [] ptr;
    return 0;
}
