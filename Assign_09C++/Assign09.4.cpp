/*
4) Contact List implementation using Map of STL. */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
map<string,string> mobile;

int main()
{
    int ch;
    string name,number;
    while(1)
    {
        cout<<"\n***MENU***"<<endl;
        cout<<"1.insert mobile no"<<endl;
        cout<<"2.search mobile no by name"<<endl;
        cout<<"3.display list"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice=";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"enter name to insert=";
            cin>>name;
            cout<<"enter mobile no to insert=";
            cin>>number;
            mobile.insert({name,number});
            break;
        case 2:
        {
            cout<<"enter name to search=";
            cin>>name;
            auto it=mobile.find(name);
            if(it==mobile.end())
                cout<<"not found"<<endl;
            else
            {
                cout<<"mobile no found\n";
                cout<<"name="<<it->first<<"    mobile="<<it->second<<endl;
            }
            break;
        }
        case 3:
        {
            if(mobile.size()==0)
            {
                cout<<"list is empty"<<endl;
            }
            else
            {
                cout<<"name    mobile"<<endl;
                for(auto it:mobile)
                {
                    cout<<it.first<<"\t "<<it.second<<endl;
                }
            }
            break;
        }
        case 4:
            return 0;
        default:
            cout<<"wrong choice";
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
