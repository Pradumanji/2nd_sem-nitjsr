/*
 Name : Praduman
 Roll no : 2021pgcaca001
     2) Implement the following class hierarchy using virtual function. Create base class
         pointers to hold address of base class as well as derived class objects and call the
         corresponding about() function of the assigned object.
    Class : FamilyMember
         Members : name, familyname, origin
         Functions: constructor, destructor, about() //prints about father object
    Class : Citizen
         Members : name, country, year
         Functions: constructor, destructor, about() //prints about mother object
    Class : Employee (inherits FamilyMember and Citizen)
        Members : name
        Functions: constructor, destructor, about() //prints all about the child including
        parent info
*/
#include<bits/stdc++.h>
using namespace std;
class FamilyMember
{
protected:
    string name,familyname,origin;
public:
    FamilyMember()
    {
        name = ""; familyname = ""; origin = "";
    }
    FamilyMember(string a, string b, string c)
    {
        name = a; familyname = b; origin = c;
        cout<<"\n Name : "<<name<< " Familyname : "<<familyname<<" origin : "<<origin;
    }
    ~FamilyMember()
    {
        cout<<"\n Destructor of Familymember ";
       // cout<<"\n Name : "<<name<< " Familyname : "<<familyname<<" origin : "<<origin;
    }
   virtual void about()
    {
        cout<<"\n Name : "<<name<< " Familyname : "<<familyname<<" origin : "<<origin;
    }
};
class Citizen
{
    protected:
    string name, country, year;
public:
    Citizen()
    {
        name = "";
        country = "";
        year = "";
    }
    Citizen(string nam, string coun, string ye)
    {
        name = nam;
        country = coun;
        year = ye;
        cout<<"\n Name : "<<name<<" country name : "<<country<<" Year : "<<year;
    }
   virtual void about()
    {
        cout<<"\n Name : "<<name<<" country name : "<<country<<" Year : "<<year;
    }
    ~Citizen()
    {
        cout<<"\n Destructor of citizen ";
        //cout<<"\n Name : "<<name<<" country name : "<<country<<" Year : "<<year;
    }
};
class Employee: public FamilyMember, public Citizen
{
    string name;
public :
    Employee(string name, string familyname, string origin, string country, string year)
    {
        this->name = name;  this->familyname = familyname; this->origin = origin; this->year = year;

    }
    Employee()
    {
        cout<<"\n Name : "<<name<<"\n Familyname : "<<familyname<<"\n Origin : "<<origin<<"\n Year : "<<year;
    }
    ~Employee()
    {
        cout<<"\n Destructor of employee ";
    }
   virtual void about()
    {
        cout<<"\n Details of employee : ";
        cout<<"\n Name : "<<name<<"\n Familyname : "<<familyname<<"\n Origin : "<<origin<<" Country : "<<country<<"\n Year : "<<year;
    }
};
int main()
{
    FamilyMember f("Nandan", "madan", "2001"),*ptr;
  //  f.about();
    Citizen c("Aman","India", "1995");
 //   c.about();
    Employee e("Arjun","rj","1947","America","2006");
    e.about();
   ptr = &f;
    cout<<"\n Address of base class ";
   // ptr->about();
  //  ptr = &c;
    ptr->about();
    ptr = &e;
    cout<<"\n Address of employee class :";
    ptr->about();


}
