#include<iostream>
using namespace std;
class IntStack
{
    int top;
    int *ptr;
    int capacity;
    public:
    IntStack()
    {
        top = -1;
        ptr = new int[10];
        capacity = 10;
    }
    IntStack(int size)
    {
        ptr = new int[size];
        top = -1;
        capacity = size;
    }
    IntStack ( const IntStack &obj2)// copy constructor
    {
           int *temp = obj2.ptr;
           int n = capacity;
           int *arr = new int[n];
           for (int i=0; i<n; i++)
           {
               arr[i] = temp[i];
           }
    }
    void push();
    int pop();
    void show();
};
void IntStack::push()
{
    if (top==capacity-1)
    {
        cout<<"\n stack overflow ";
        return;
    }
    int n;
    cout<<"\n Enter no : ";
    cin>>n;
    top++;
    ptr[top] = n;

}
int IntStack::pop()
{
    if (top==-1)
    {
        cout<<"\n stack underflow";
        return -1;
    }
    int temp = ptr[top];
    top--;
    return temp;
}
void IntStack::show()
{
    if (top==capacity-1)
    {
        cout<<"\n stack is empty";
        return;
    }
    for (int i=top; i>=0; i--)
    {
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
}
int main()
{
    IntStack obj;
    int choice;
    while(1)
    {
        cout<<"\n 1) push \n 2) pop \n 3) copy data \n 4) Exit ";
        cout<<"\n Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            obj.push();
            obj.show();
            break;
        case 2:
            obj.pop();
            obj.show();
            break;
        case 3:
            {
             IntStack obj1 = obj;
            obj1.show();
            break;
            }
        case 4:
            exit(0);
            break ;
        default :
            cout<<"\n Wrong choice";
        }
    }
}
