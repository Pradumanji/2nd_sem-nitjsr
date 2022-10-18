/*

1) Write a file program to copy one file into another file. Use exception handling to
raise and handle exception for source file not found. */
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
        ifstream fs;
        ofstream ft;
       // char ch, fname[20], fname2[20];
       string ch,fname,fname2;
        cout<<"Enter source file name with extension (like files.txt) : ";
        cin>>fname;
        try
        {
            fs.open(fname);
            if(!fs)
                throw 1;
                cout<<"Enter target file name with extension (like filet.txt) : ";
        cin>>fname2;
        ft.open(fname2);
        if(!ft)
        {
                cout<<"Error in opening target file..!!";
                fs.close();

                exit(2);
        }
        while(fs.eof()==0)
        {
                fs>>ch;
                ft<<ch<<' ';
        }
        cout<<"File copied successfully..!!";
        fs.close();
        ft.close();
        }
        catch(int a)
        {
            cout<<"\n source file does not found ";
        }



        return 0;
}
