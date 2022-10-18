/*NAME -PRADUMAN
REG NO- 2021PGCACA001
5) Write a program in C++ to input the body temperature of n persons in Farenheit and
display the name of the person and their body temperature in Centigrate format. Use
the width size for name as 15 and fill character as ‘_’ ( underscore). Show
temperature up to one decimal places.*/
#include <iostream>
#include<iomanip>
using namespace std;

struct temperature  //DECLARE STRUCTURE
{
    string name;
    float temp;
};
int main()
{
    int n;
    cout<<"\n ENTER NUMBER OF PERSONS : ";
    cin>>n;
    cout<<endl;
    temperature person[n];

    for(int i=0; i<n; i++) //INPUT DATA OF PERSON
    {
        cin.get();
        cout<<"\n ENTER NAME OF PERSON "<<i+1<<" : ";
        getline(cin,person[i].name);
        cout<<"\n ENTER FARENHEIT TEMPERATURE OF PERSON "<<i+1<<" : ";
        cin>>person[i].temp;
        cout<<endl;
    }
    for(int i=0; i<n; i++)
    {
        float far=person[i].temp;
        person[i].temp=5*(far-32)/9;  //CALCULATE  TEMPERATURE IN CENTIGRATE
    }

    cout<<"NAME OF PERSON\t\tCELCIUS\n";
    for(int i=0; i<n; i++)
    {
        cout<<setfill('_')<<setw(15)<<person[i].name<<"\t\t"<<fixed<<setprecision(1)<<person[i].temp<<endl; //SHOW THE OUTPUT
        //cout<<"CELCIUS="<<person[i].temp;

    }

    return 0;
}
