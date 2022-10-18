/*NAME- PRADUMAN
REGISTRATION NO- 2021PGCACA001
2) Define a structure named “product” that contains following data members
    a). product id, product name, current discount percentage, product label price,
        user rating.
    b). Define the following functions to perform the mentioned tasks.
       i). input_detail() : to input the data for product details.
       ii). output_detail(): to output the data of a product details.
       iii). computesalesprice(): the sales price of a product is = label price –
            current discount rate + SGST + CGST
    c. Define an array of structure for 5 product and demonstrate the above task.
    */
#include <iostream>
using namespace std;
#define MAX 4
void input_detail();
void output_detail();
float ComputeSalesPrice();

struct product  //DEFINE STRUCTURE
{
    string product_name;
    string product_id;
    string rating;
    float discount;
    float price;
} product_array[MAX];
void input_detail(int i)  //FUNCTION TO INPUT DETAILS
{
    cout<<"\n ENTER PRODUCT ID :";
    cin>>product_array[i].product_id;
    cin.get();
    cout<<"\n ENTER PRODUCT NAME :";
    getline(cin,product_array[i].product_name);
    cout<<"\n ENTER DISCOUNT PERCENT:";
    cin>>product_array[i].discount;
    cout<<"\n ENTER LABEL PRICE:";
    cin>>product_array[i].price;
    cout<<"\n ENTER USER RATING:";
    cin>>product_array[i].rating;

}
// TOTAL GST ON PRODUCT IS 12%
float ComputeSalesPrice(product product1)  //FUNCTION TO COMPUTE SALES PRICE
{
    float SGST = product1.price*0.06;  // 6% GST OF STATE GOVERMENT
    float CGST = product1.price*0.06;  // 6% GST OF CENTRAL GOVERMENT
    float Discount = product1.price*(product1.discount)*0.01;
    float sales=product1.price - Discount+SGST+CGST;

    return sales;
}

void output_detail(product product1)  //FUNCTION TO SHOW DETAILS OF PRODUCT
{
    cout<<" PRODUCT ID  ="<<product1.product_id<<endl;
    cout<<" PRODUCT NAME="<<product1.product_name<<endl;
    cout<<" DISCOUNT    ="<<product1.discount<<endl;
    cout<<" LABEL PRICE ="<<product1.price<<endl;
    cout<<" USER RATING ="<<product1.rating<<endl;
    cout<<"PRODUCT"<<" SALES PRICE="<<ComputeSalesPrice(product1)<<endl;
}

int main()
{
    for(int i=0; i<MAX; i++)
    {
        cout<<"\n ENTER DETAILS OF PRODUCT "<<i+1<<" : "<<endl;
        input_detail(i);   //FUNCTION CALL TO INPUT DETAILS
        cout<<"\n ==================================================================\n";
    }
    cout<<endl;

    for(int i=0; i<MAX; i++)
    {
        float data=ComputeSalesPrice(product_array[i]);
        cout<<"\n DETAILS OF THE PRODUCT "<<i+1<<" : "<<endl;
        output_detail(product_array[i]);   //FUNCTION TO SHOW DETAILS OF PRODUCT
        cout<<endl;
        cout<<"\n ==================================================================\n";
    }


    return 0;
}
