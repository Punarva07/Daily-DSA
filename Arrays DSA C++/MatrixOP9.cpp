#include <iostream>
using namespace std;
//Reverse of a Matrix
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
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 2; j >= 0; j--)
        {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
