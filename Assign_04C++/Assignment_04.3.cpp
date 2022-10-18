#include<bits/stdc++.h>
using namespace std ;

class Employee;
class MyDate;

class MyDate
{
    int day;
    int month;
    int year;
public:
    void set_data(int a, int b, int c)
    {
        day = a; month =b; year = c;
    }
    void show_data()
    {
        cout<<"\n MyDate:- "<<day<<"/"<<month<<"/"<<year;
    }
};


class Employee
{
    int empno;
    MyDate doj;
    double salary;

public:
    Employee(){};
    Employee(int a, MyDate d, double s){
        empno = a;
        doj = d;
        salary = s;
    }

    void setempdata(int a, MyDate d, double s)
    {
        empno = a;
        doj = d;
        salary = s;
    }




    void showempdata(){
        cout<<"\n Employee no : "<<empno<<"\n Salary : "<<salary<<"\n Date of joining";
        doj.show_data();
    }

    Employee (const Employee &obj)
    {
        this->empno = obj.empno;
        this->salary = obj.salary;
        this->doj = obj.doj;
    }
    friend void tax(Employee);

};

void tax(Employee e)
{
    if (e.salary<100000)
    {
        cout<<"\n No tax ";
    }
    else if (e.salary>=100000 && e.salary<200000)
    {
        e.salary = (e.salary)*0.1;
        cout<<"\n Tax amount is : "<<e.salary;
    }
    else if (e.salary>=200000 && e.salary<500000)
    {
      e.salary = (e.salary)*0.15;
      cout<<"\n Tax amount is : "<<e.salary;
    }
    else
    {
        cout<<"\n Tax amount is : "<<(e.salary)*0.2<<endl;
    }
}
int main()
{
    MyDate d;
    d.set_data(16,07,2001);
    Employee e1(123, d, 450080.45);
    Employee e2;
    Employee e3 = e1;// copy constructor
    e2.setempdata(124, d , 256000.50);
    e2.showempdata();

    e3.showempdata();
    tax(e2);
    tax(e3);
}
