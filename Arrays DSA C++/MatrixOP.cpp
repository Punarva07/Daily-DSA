#include<iostream>
using namespace std;

int main(){
    int a[3][3], i , j;
    

    for(int i = 0; i<3; i++){

        for(int j = 0; j < 3; j++ ){
            cout<<"Enter Elements in Pocket["<<i<<"]["<<j<<"] ";
            cin>>a[i][j];

        }
    }

    cout<<"Matrix is..."<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
