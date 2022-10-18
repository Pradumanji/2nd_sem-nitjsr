/*NAME -PRADUMAN
REG NO- 2021PGCACA001
3) Write a C++ program to create 2-D integer arrays using pointer and new operator
and demonstrate the matrix multiplication. Use delete operator to free up memories.
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "\n Enter size of row and column for first matrix : ";
    int n1, m1;
    cin >> n1 >> m1;

    int *arr1[n1+1];
    for(int i = 1;  i <= n1;  i++)
    {
        arr1[i] = new int[m1+1];
    }

    cout << "\n Enter size of row and column for second matrix : ";
    int n2, m2;
    cin >> n2 >> m2;
    int *arr2[n2+1];

    for(int i = 1;  i <= n2;  i++)
    {
        arr2[i] = new int[m2+1];
    }

    // Take elements in first array
    cout << "\nEnter " << n1 << " * " << m1 << " elements in matrix...\n";

    for(int i = 1;  i <= n1;  i++)
    {
        for(int j = 1;  j <= m1;  j++)
        {
            cin >> arr1[i][j];
        }
    }


    // Take elements in second array
    cout << "\nEnter " << n2 << " * " << m2 << " elements in matrix...\n";

    for(int i = 1;  i <= n2;  i++)
    {
        for(int j = 1;  j <= m2;  j++)
        {
            cin >> arr2[i][j];
        }
    }

    // Corner Case
    if(m1 != n2)
    {
        cout << "Multiplication is not possible...\n";
        return 0;
    }

    int *ans[n1+1];
    for(int i = 1;  i <= n1;  i++)
    {
        ans[i] = new int[m2+1];
    }

    // Multiply two matrices
    for(int i = 1;  i <= n1;  i++)
    {
        for(int j = 1;  j <= m2;  j++)
        {

            ans[i][j] = 0;
            for(int k = 1;  k <= m2;  k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Display matrix elements
    for(int i = 1;  i <= n1;  i++)
    {
        for(int j = 1;  j <= m2;  j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 1;  i <= m1;  i++)
    {
        delete [] arr1[i];
    }

    for(int i = 1;  i <= m2;  i++)
    {
        delete [] arr2[i];
    }

    for(int i = 1;  i <= m2;  i++)
    {
        delete [] ans[i];
    }

    return 0;
}
