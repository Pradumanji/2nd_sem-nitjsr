/*NAME -PRADUMAN
REG NO- 2021PGCACA001
1) Write a function in C++ to print the following pattern by taking number of lines, and
   difference as parameters with default arguments.
         no. of lines =5, difference =1
         1
         2 3
         4 5 6
         7 8 9 1
         2 3 4 5 6
         no. of lines =4, difference =2
         1
         3 5
         7 9 1
         3 5 7 9
   i. The default value of number of lines is 5
   ii. The default value of difference is 1
   */
 #include<iostream>
 using namespace std;
 int pattern (int line=5, int diff = 1) // function defintion with default paramter
 {
     int num=1;
     for (int i=1; i<=line; i++)
     {
         for (int j=1; j<=i; j++)
         {
             if (num>9)
             {
                 num = 1;
             }
             cout<<num<<" ";
             num +=diff;

         }
         cout<<endl;

     }
 }
 int main()
 {
     pattern();   // fuction call with default parameter
     int line; int dif;
     cout<<"\n Enter no of line = "; cin>>line;
     cout<<"\n Enter difference = "; cin>>dif;
     cout<<endl;
     pattern(line,dif); // funtion call with user parameter
    // pattern(line);
 }
