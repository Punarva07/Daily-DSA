// Find Unique Element

#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;

    for(int i = 0; i<size; i++)
    {
        ans = ans^arr[i];
           // ^ --> XOR Operator --> a^a = 0; 0^a =a (Convert Into Binary then Operate)
    }
    return ans;
} 


int main(){

    int myArray[7] = {1,5,1,3,5,6,3};

    cout<<"The unique element is: "<<findUnique(myArray, 7);

    return 0;
}

/*#include <iostream>
using namespace std;*/

/*int main()
{
    int array1[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int s1 = sizeof(array1)/sizeof(array1[0]);

    cout << "Original array: ";

    for (int i=0; i < s1; i++)
    cout << array1[i] <<" ";

    cout <<"\nUnique elements of the said array: ";
    for (int i=0; i<s1; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (array1[i] == array1[j])
               break;
         if (i == j)
          cout << array1[i] << " ";
    }
    return 0;
}*/

/*#include <iostream>
using namespace std;
int non_repeating_elements(int arr[], int n)
{
    int i, j;
    int count = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
                break;
        }
        if (j == n)
        {
            cout << "\nNon-repeating element [" << count << "]"
                 << " : " << arr[i] << endl;
            ++count;
        }
    }
    return -1;
}
int main()
{
    int n, i;
    cout << "\nEnter the number of elements : ";
    cin >> n;
    int arr[n];

    cout << "\nInput the array elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    non_repeating_elements(arr, n);
    return 0;
}*/
