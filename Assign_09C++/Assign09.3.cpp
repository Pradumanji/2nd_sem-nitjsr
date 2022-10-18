/*
3) Queue implementation using a Vector of STL */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ch,n;
    vector<int> que;
    while(1)
    {
        cout<<"\n**MENU**"<<endl;
        cout<<"1.insert"<<endl;
        cout<<"2.delete"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice=";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"enter no to insert=";
            cin>>n;
            que.push_back(n);
            break;
        case 2:
        {
            auto it=que.begin();
            cout<<"deleted element="<<*it<<endl;
            que.erase(it);
            break;
        }
        case 3:
            if(que.size()==0)
            {
                cout<<"queue is empty";
            }
            else
            {
                cout<<"queue elements are as:-\n";
                for(auto it:que)
                    cout<<it<<" ";
                cout<<endl;
            }
            break;
        case 4:
            return 0;
        default:
            cout<<"wrong choice";
        }
    }
}
