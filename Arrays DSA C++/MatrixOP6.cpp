#include <iostream>
using namespace std;
// Intersection of two Matrix
int main()
{

    int a[3][3];

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

    int b[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the elements[" << i << "] [" << j << "] ";
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "The Intersection is: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == b[i][j])
            {
                cout << a[i][j] << " ";
            }
        }
    }

    return 0;
}