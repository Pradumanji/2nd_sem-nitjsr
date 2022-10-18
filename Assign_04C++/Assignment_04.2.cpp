#include<iostream>
using namespace std;
class Account
{
    int accountno;
    int balance;
    static int totalbal; // static member variable
public:
    Account(int a, int b)
    {
        accountno = a;
        balance = b;
        cout<<"\n Your account no is : "<<accountno<<" and  your current account balance is :"<<balance;
    }
    ~Account()
    {
        cout<<"\n Deleted account balance from total balance ";
    }
    void deposit(int amt)
    {
        addtobank(amt);
        balance = balance + amt;
        cout<<"\n deposit balance is : "<<amt<<"\n Current Account balance is :" <<balance;
    }
    void withdraw(int amt)
    {
        deductfrombank(amt);
        balance = balance - amt;
        cout<<"\n Withdrawal amount is : "<<amt<<"\n Current Account balance is :"<<balance;
    }
    static void addtobank(int amt)
    {
        totalbal = totalbal + amt;
        cout<<"\n Credited amount is : "<<amt;
    }
    static void deductfrombank(int amt)
    {
        totalbal = totalbal - amt;
        cout<<"\n Deducted amount is :"<<amt;
    }

};
int Account::totalbal=0;
int main()
{
    Account c1(12345, 15000);
    int ch;
    c1.deposit(500);
    c1.withdraw(100);
    c1.addtobank(5000);
    c1.deductfrombank(1000);
}
