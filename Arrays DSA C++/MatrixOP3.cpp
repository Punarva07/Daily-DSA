#include <iostream>

using namespace std;
//Multiplication of two Matrices
int main()
{
    // declaring arrays
    int first[3][3];
    int second[3][3];
    int result[3][3];

    // input first matrix.
    cout << endl
         << "Input Matrix a"
         << "\n\n";
    for (int i = 0; i < 3; ++i)
    {

        for (int j = 0; j < 3; ++j)
        {
            cout << "Enter a" << i + 1 << j + 1 << " :\t ";
            cin >> first[i][j];
        }
    }
    // input second matrix.
    cout << endl
         << "Input Matrix b"
         << "\n\n";
    for (int i = 0; i < 3; ++i)
    {

        for (int j = 0; j < 3; ++j)
        {
            cout << "Enter b " << i + 1 << j + 1 << " :\t ";
            cin >> second[i][j];
        }
    }
    // displaying matrix first and second
    cout << "Entered Matrix a and b"
         << "\n\n";
    for (int i = 0; i < 3; ++i)
    {

        for (int j = 0; j < 3; ++j)
        {

            cout << first[i][j] << " ";
        }
        cout << "\t";
        for (int j = 0; j < 3; ++j)
        {

            cout << second[i][j] << " ";
        }

        cout << endl;
    }

    // Multiplying matrix first and second
    for (int i = 0; i < 3; ++i)
    {

        for (int j = 0; j < 3; ++j)
        {

            int sum = 0;
            for (int k = 0; k < 3; ++k)
            {
                sum += first[i][k] * second[k][j];
            }
            result[i][j] = sum;
        }
    }
    // Displaying the result array.
    cout << endl
         << "Resultant Matrix"
         << "\n\n";
    for (int i = 0; i < 3; ++i)
    {

        for (int j = 0; j < 3; ++j)
        {

            cout << " " << result[i][j];
        }
        cout << endl;
    }
    return 0;
}