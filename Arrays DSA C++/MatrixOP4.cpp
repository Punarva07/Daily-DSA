#include <iostream>
using namespace std;
// Transpose of a Matrix
int main()
{
    int transpose[3][3],  i, j;
    int a[3][3] = {{1, 2,6}, {3, 4,8}, {5, 6,4}};
    cout << "The matrix is:" << endl;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    cout << "The transpose of the matrix is:" << endl;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
            cout << transpose[i][j] << " ";
        cout << endl;
    }
    return 0;
}
