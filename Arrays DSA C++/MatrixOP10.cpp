#include<iostream> 
using namespace std;
// Function to print Half Pascal's Triangle
void printPascalTriangle(int n)
{
    for (int line = 1; line <= n; line++)
    {
        int C = 1; // Represents the value of C(line, i)
        for (int i = 1; i <= line; i++)
        {
            cout << C << " ";
            C = C * (line - i) / i;
        }
        cout << endl;
    }
}

int main()
{
    int n = 10; // Number of rows to print

    printPascalTriangle(n);

    return 0;
}