/* NAME -: PRADUMAN
  ROLL NO -: 2021PGCACA001

 1) Declare a class Number having one data member: num and consist of the
      following member functions.
      i. A default constructor
      ii. A parameterized constructor
      iii. A destructor ( that displays the statement “object destroyed for class Num”)
      iv. Accesor functions : getNumber() to return the number
      v. Mutator functions: changeNumber(int) to set the values of the number.
      vi. bool isArmstrong() : to check whether num is an armstrong number.
      vii. bool isPrime() : to test primality of the number
      viii. int nextCoprime() : to compute and return next number in the number series
          that is coprime with this number.
      ix. int reverse() : to reverse the number
      */
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Number //class definition
{
    int num;
public:
    Number()//constructor
    {
        num=0;
    }
    Number(int no)//parameterised constructor
    {

        num=no;
    }
    ~Number() //destructor
    {

        cout<<"\nobject destroyed for class Num\n";
    }
   int getnumber();
    void changenumber(int);
    bool isArmstrong();
    bool isPrime();
    int isnextCoprime();
    int reverse();

};//class close

//class member function definition*********
int Number::getnumber()
{
    return num;
}

void Number::changenumber(int n)
{
   num=n;
}

bool Number::isArmstrong()
{   int s=0,i=num;
	while(i>0)
	{
		int d=i%10;
		s=s+d*d*d;
		i=i/10;
	}
	if(s==num)
	return true;
	else
        return false;
}

bool Number::isPrime()
{   int temp=0;
    for(int j=2;j<=sqrt(num);j++)
	     {
	     	if(num%j==0)
	     	{
	     		temp=1;
	     		break;
			}
	     }
			 if(temp==0)
			return true;
	      else
        return false;
}

 int Number::isnextCoprime()
 {
     int q=num+1;
     int g=__gcd(num,q);
     while(g>1)
      {  q++;
         int g=__gcd(num,q);
      }

        return q;
 }

 int Number::reverse()
 {
      int r=0,t=num;
     while(t>0)
	{
		int d=t%10;
		r=r*10+d;
		t=t/10;
	}
	return r;
 }
//class member function definition closed*********

int main()
{ Number obj1(87);
bool b;
int n,p,ch;
   while(1)
   {
    cout<<"\n*******MENU********\n";
    cout<<"1.change number\n";
    cout<<"2.get number\n";
    cout<<"3.check Armstrong\n";
    cout<<"4.check Prime\n";
    cout<<"5.find next Co prime\n";
    cout<<"6.number reverse\n";
    cout<<"7.exit\n";
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:

       cout<<"enter any no:";
       cin>>n;
        obj1.changenumber(n);
        p=obj1.getnumber();
        cout<<"number="<<p<<endl;
        break;
    case 2:
        cout<<"number="<<obj1.getnumber()<<endl;
        break;
    case 3:
         cout<<"enter any no:";
       cin>>n;
        obj1.changenumber(n);
         b=obj1.isArmstrong();
        if(b==true)
            cout<<obj1.getnumber()<<" is Armstrong no"<<endl;
        else
            cout<<obj1.getnumber()<<" is Not Armstrong no"<<endl;
        break;
    case 4:
         cout<<"enter any no:";
       cin>>n;
        obj1.changenumber(n);
        b=obj1.isPrime();
        if(b==true)
            cout<<obj1.getnumber()<<" is Prime no"<<endl;
        else
            cout<<obj1.getnumber()<<" is Not Prime no"<<endl;
        break;
    case 5:
        cout<<"enter any no:";
        cin>>n;
        obj1.changenumber(n);
        n=obj1.isnextCoprime();
        cout<<n<<" is Next co prime no"<<endl;
        break;
    case 6:
         cout<<"enter any no:";
       cin>>n;
        obj1.changenumber(n);
        cout<<"Reverse of "<<obj1.getnumber()<<" is="<<obj1.reverse()<<endl;
        break;
    case 7:
        return 0;
        break;
    default:
        cout<<"wrong choice\n";


    }
   }

}
