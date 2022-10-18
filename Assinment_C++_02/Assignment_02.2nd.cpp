/*NAME -PRADUMAN
REG NO- 2021PGCACA001
 2) Write a program in C++ to define a structure ‘product’ with data members :
    productid and rating (in range 1 to 5). Input productid and rating for ‘n’ number of
    products. Write a function to return the number of TOP rated, AVERAGE rated, and
    LOW rated products using reference arguments, where criteria for each category is
    given as follows:
     i. TOP rated : rating >= 4
     ii. AVERAGE rated : 3 <= rating < 4
     iii. LOW rated : below 3  */
#include<iostream>
using namespace std;
#define N 5
struct product
{
    string product_id;
    int product_rating;
} b[N];
void input(int i)
{
    if(i>0) cin.get();
    cout<<"\n Enter product id : ";
    cin>>b[i].product_id;
    cout<<"\n Enter product rating : ";
    cin>>b[i].product_rating;
}
int rating(struct product b)
{
    if(b.product_rating>=4)
    {
        cout<<"TOP rated";
        return 0;
    }
    else if(b.product_rating>=3 && b.product_rating<4)
    {
        cout<<"AVERAGE rated";
        return 0;
    }
    else if(b.product_rating <3)
    {
        cout<<"LOW rated";
        return 0;
    }
}
int main()
{
    for (int i=0; i<N; i++)
    {
        cout<<"\n Enter the details of the product "<<i+1<<".\n";
        input(i);
        cout<<"\n ==================================================================\n";
    }
    for (int i=0; i<N; i++)
    {
        cout<<"\n The Rating of product "<<b[i].product_id<<" is : ";
        rating (b[i]);
        cout<<"\n ==================================================================\n";
    }

}


