/*NAME - PRADUMAN
REG NO-2021PGCACA001
1) Define a structure named “KYC” that contains following data members
     a. name, date of birth, PAN No., Adhaar No., Address, Annual Income, saving
       under tax scheme
     b. Define the following functions to perform the mentioned tasks.
        i. input_data() : to input the data for KYC details.
       ii. output_data(): to output the data of a KYC details.
      iii. computeIncomeTax(): The rule of income tax caluculation is as
                                follows.
                                Upto 5 lakhs – No tax
                                Between 5 – 10 lakhs – 10% on (Total income – saving under
                                tax scheme ( upto max. of 1.5 lakhs) )
                                above 10 lakhs 20% on (Total income – saving under tax
                                scheme ( upto max. of 1.5 lakhs) )
    c. Define an array of structure for 7 KYC to perform the above tasks.

*/
#include <iostream>
using namespace std;
#define MAX 7
void input_data();
void output_data();
float ComputeIncomeTax();

struct kyc    //global structure
{
    string name;
    string dob;
    string pan_no;
    string aadhar_no;
    string address;
    float annual_income;
    float tax_saving;
} user[MAX];
void input_data(int i)   //input function
{
    if(i>0) cin.get();
    cout<<"\n Enter name: ";
    getline(cin,user[i].name);
    cout<<"\n Enter date of birth: ";
    cin>>user[i].dob;
    cout<<"\n Enter your pan no: ";
    cin>>user[i].pan_no;
    cout<<"\n Enter your aadhar no: ";
    cin>>user[i].aadhar_no;
    cin.get();
    cout<<"\n Enter your address: ";
    getline(cin,user[i].address);
    cout<<"\n Enter your Annual income: ";
    cin>>user[i].annual_income;
    cout<<"\n Enter tax saving amount: ";
    cin>>user[i].tax_saving;

}

float ComputeIncomeTax(kyc user)  //function for computing income tax
{
    float final_tax;
    float annual_income=user.annual_income;
    float saving=user.tax_saving;
    if(annual_income<=500000)
        final_tax=0;
    else if(annual_income<=1000000)
    {
        if (saving<=150000)
        {
            final_tax=(annual_income - saving)*0.1;
        }
        else
        {
            final_tax=(annual_income - 150000)*0.1;
        }

    }
    else if (annual_income>1000000)
    {
       if (saving<=150000)
        {
            final_tax=(annual_income - saving)*0.2;
        }
        else
        {
            final_tax=(annual_income - 150000)*0.2;
        }

    }

    return final_tax;
}

void output_data( kyc user)    // output funtion
{
    cout<<"Name  = "<<user.name<<endl;
    cout<<"Date of birth  ="<<user.dob<<endl;
    cout<<"Pan No    = "<<user.pan_no<<endl;
    cout<<"Aadhar no = "<<user.aadhar_no<<endl;
    cout<<"Address   = "<<user.address<<endl;
    cout<<"Annual_income    = "<<user.annual_income<<endl;
    cout<<"Saving    = "<<user.tax_saving<<endl;
    float data=ComputeIncomeTax(user);
    cout<<"Customer Annual_income Tax Amount ="<<data<<endl;


}
int main()  //main function
{
    for(int i=0; i<MAX; i++)
    {
        cout<<"\n Enter details of the customer "<<i+1<<" : "<<endl;
        input_data(i);  //calling input function to enter info of customer.
        cout<<"\n ==================================================================\n";
    }
    cout<<endl;
    for(int i=0; i<MAX; i++)
    {
        cout<<"\n Information of the customer "<<i+1<<" : "<<endl;
        output_data(user[i]);  //function call to show user info.
        cout<<endl;
        cout<<"\n ==================================================================\n";
    }

    return 0;
}
