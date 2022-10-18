/*
 2) Write a function to merge two files s.t. the resulting file will contain all elements in
    sorted order. */
#include <bits/stdc++.h>
using namespace std;



// File Pointers
fstream fpsOne, fpsTwo, fpTarget;

// size variables for number of strings in file1 and file2
int size1, size2;


string fileOne = "file1.txt";
string fileTwo = "file2.txt";
string fileTarget = "copy.txt";





/////////////////////////////////////////////////
void input_file1()
{
    cout << "Enter number of strings you wanna insert in file1\n";
    cin >> size1;
    vector<string> file1(size1);


    cout << "Enter " << size1 << " strings separated with spaces"<<endl;
    for(int i = 0;  i < size1;  i++)
    {
        cin >> file1[i];
    }

    fpsOne.open(fileOne, fstream::out);

    for(int i = 0;  i < size1;  i++)
    {
        fpsOne << file1[i] << " ";
    }
    fpsOne.close();

}




/////////////////////////////////////////////////////
void input_file2()
{
    cout << "Enter number of strings you wanna insert in file2\n";
    cin >> size2;
    vector<string> file2(size2);


    cout << "\n\nEnter " << size2 << " strings separated with spaces\n";
    for(int i = 0;  i < size2;  i++)
    {
        cin >> file2[i];
    }

    fpsTwo.open(fileTwo, fstream::out);
    for(int i = 0;  i < size2;  i++)
    {
        fpsTwo << file2[i] << " ";
    }
    fpsTwo.close();


}




///////////////////////////////////
void merge_file()
{
    fpsOne.open(fileOne, fstream::in);
    fpsTwo.open(fileTwo, fstream::in);

    if((!fpsOne) || (!fpsTwo))
    {
        cout<<"\nError Occurred (First Source File)!";
        return ;
    }
    else
    {
        fpTarget.open(fileTarget, fstream::out);

        if(!fpTarget)
            cout<<"\nError Occurred (Target File)!";
        else
        {
            string s;
            for(int i = 0;  i < size1;  i++)
            {
                fpsOne >> s;
                fpTarget << s << " ";
            }

            for(int i = 0;  i < size2;  i++)
            {
                fpsTwo >> s;
                fpTarget << s << " ";
            }

            cout<<"\nContent of Two File Merged Successfully into Third!";
        }
    }

    // Closing file
    fpsOne.close();
    fpsTwo.close();
    fpTarget.close();
}


//////////////////////////////////////////////////
void sorting()
{

    fpTarget.open(fileTarget, fstream::in);

    if(!fpTarget)
    {
        cout<<"\nError Occurred (Target File)!";
        return;
    }

    vector<string> values;

    string s;
    for(int i = 0;  i < size1+size2;  i++)
    {
        fpTarget >> s;
        values.push_back(s);
    }

    sort(values.begin(), values.end());
    fpTarget.close();

////////////////////
    fpTarget.open(fileTarget, fstream::out);

    if(!fpTarget)
    {
        cout<<"\nError Occurred (Target File)!";
        return;
    }

    for(int i = 0;   i < size1+size2;  i++)
    {
        fpTarget << values[i] << " ";
    }
    fpTarget.close();


    cout<<endl;
}




//////////////////////////////////////////////
void print()
{
    fpTarget.open(fileTarget, fstream::in);
    if(!fpTarget)
    {
        cout << "File opening error" << endl;
        return;
    }

    string s;
    cout << "\n===============================================\n";
    for(int i= 0;  i < size1+size2;  i++)
    {
        fpTarget >> s;
        cout << s << " ";
    }
    cout << endl;
    fpTarget.close();
}





/////////////////////////////////////////////////////////
// Driver Code
int main()
{
    // Input in first file
    input_file1();

    // Input in second file
    input_file2();

    // merge both files
    merge_file();

    cout << "\n\nBEFORE SORTING";
    print();

    // sort target file
    sorting();

    // read from final file
    cout << "\n\nAfter SORTING" << endl;
    print();


    return 0;
}
