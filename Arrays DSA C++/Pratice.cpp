#include<iostream>
using namespace std;

int main(){
    int a[3][3], i, j;

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<"Enter Matrix Elements: ["<<i<<"]["<<j<<"] ";
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
           
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int sum = 0;
     for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
           if(a[i][j]==a[j][i])
            sum += a[i][j];
        }
    }
    cout<<sum;
    return 0;
}