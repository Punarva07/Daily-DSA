#include <iostream>
using namespace std;

// Column sum of Matrix
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

    // finding column sum
    for (int i = 0; i < 3; i++)
    {
        sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += a[j][i]; // adding each element of column
        }
        cout << "Addition of column " << i + 1 << " is: " << sum << endl;
    }
    return 0;
}