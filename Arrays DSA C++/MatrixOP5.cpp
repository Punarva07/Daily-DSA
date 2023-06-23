#include <iostream>
using namespace std;
//Sum of Diagonal Elements
int main()
{
    int a[3][3], i, j;
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "Enter Elements in Pocket[" << i << "][" << j << "] ";
            cin >> a[i][j];
        }
    }

    cout << "Matrix is..." << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i] == a[j])
            {
                sum += a[i][j];
            }
        }
    }

    cout << "The Sum of Diagonal elements is: " << sum;
    return 0;
}