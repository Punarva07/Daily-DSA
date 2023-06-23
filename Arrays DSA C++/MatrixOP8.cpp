#include <iostream>
using namespace std;
// Row Sum of Matrix

int main()
{
    int a[3][3], i, j;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the elements[" << i << "][" << j << "] ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int sum;

    // finding row sum
    for (int i = 0; i < 3; i++)
    {
        sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j]; // adding each element of row
        }
        cout << "Addition of row " << i + 1 << " is: " << sum << endl;
    }
    return 0;
}