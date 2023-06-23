//Intersection of the two arrays:

#include <iostream>
using namespace std;
int main()
{
    int arr1[6];
 
    cout << "Enter the elements of the 1st array: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr1[i];
    }

    int arr2[6];

    cout << "Enter the elements of the 2nd array: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr2[i];
    }

    /* printing elements that are common in both the arrays */
    cout << "\nThe intersection of the two arrays: ";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }

    return 0;
}
