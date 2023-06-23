#include<iostream>
#include<climits>
using namespace std;

// Max and Min Element of an Array
int main(){

    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];             
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);
    }

    cout<< "Max No is: "<< maxNo<<endl;
    cout<< "Min No is: "<< minNo;
    
    return 0;
}
