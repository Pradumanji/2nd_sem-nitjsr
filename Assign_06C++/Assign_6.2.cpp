    /* Name : Praduman
     roll no : 2021pgcaca001
     2) Implement the following multiple-inheritance hierarchy. Demonstrate overriding
        of printdata() and object slicing while showing a function call to the corresponding
        version of each parent class.
    Class : Student
          Member : Rollno, name, branch, institute, cgpa
          Function: constructors, destructor, printdata()
    Class: Employee
          Member : empid, name, organization, salary
          Functions : constructors, destructors, printdata()
    Class : WorkingStudent (Inherits Student and Employee)
          Members: (all inherited)
          Functions: constructors, destructors, printdata() */
#include<iostream>
using namespace std;
class Student
{
    protected:
    int Rollno;
    string sname,branch,institute;
    float cgpa;
public:
    Student() // default constructor
    {
        Rollno = 0;
        sname=""; branch=""; institute="";
        cgpa = 0.0;
    }
    Student(int roll, string name, string branch, string institute, float cgpa) // parameterized constructor
    {
        Rollno = roll;
        this->sname = name;
        this->branch = branch;
        this->institute = institute;
        this->cgpa = cgpa;
    }
   void print_data()
    {
        cout<<"\n Details of the student : ";
        cout<<"\n Roll no : "<<Rollno<<"\n Name : " <<sname<<"\n Branch : "<<branch<<"\n Institute : "<<institute<<"\n CGPA : "<<cgpa;
    }
    ~Student()
    {
        cout<<"\n Destructor of the student class is invoked ";
    }
};
class Employee
{
    protected:
    int empid;
    string ename, organization;
    float salary;
public:
    Employee()
    {
        empid=0;
        ename=""; organization = "";
        salary = 0.0;
    }
    Employee(int id, string na, string org, float sal)
    {
        empid = id;
        ename = na;
        organization = org;
        salary = sal;
    }
  void print_data()
    {
        cout<<"\n Details of Employee : ";
        cout<<"\n Employee id : "<<empid<<"\n Name : "<<ename<<"\n Organization name : "<<organization<<"\n salary : "<<salary;
    }
    ~Employee()
    {
        cout<<"\n Destructor of employee class ";
    }
};
class WorkingStudent : public Student,public Employee
{
public:
    WorkingStudent(int id, string mname , string org, float sal, int roll,  string branch, string institute, float cgpa)
    {
        this->empid = id;
        this->sname = mname;
        organization = org;
        salary = sal;
        Rollno = roll;
       // this->ename = sname;
        this->branch = branch;
        this->institute = institute;
        this->cgpa = cgpa;
    }
    void print_data()
    {
        cout<<"\n Details of working students : ";
        cout<<"\n Employee id : "<<empid<<"\n Name : "<<sname<< "\n Organization : "<<organization<<"\n Salary : "<<salary<<"\n Roll no :"<<Rollno<<"\n Branch :"<<branch<<"\n Institute : "<<institute<<"\n CGPA : "<<cgpa;
    }
    ~WorkingStudent()
    {
        cout<<"\n Destructor of working student class ";
    }
};

int main()
{
    Student *ptr=NULL,s(101,"Amit","mca","NIT Jamshedpur", 8.60);
    s.print_data();
    Employee e(123,"Amit", "TATA",26500.6);
   // ptr = &e;
    e.print_data();
    WorkingStudent ws(125,"aman","google",1865006.57,105,"computer science", "NIT Jamshedpur", 9.20);
    ws.print_data();  // overriding
    ptr=&ws;
    ptr->print_data();// object Slicing
}
