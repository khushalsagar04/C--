#include<iostream>
using namespace std;

void rowSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;

        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }

        cout<<"Sum of row is : "; 
        cout<<sum<<endl;
    }

    cout<<endl;
    return;
}

void colSum(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        int sum = 0;

        for(int j=0; j<row; j++){
            sum += arr[j][i];
        }
        cout<<"Sum of column is: ";
        cout<<sum<<endl;
    }

    return;
}
int main(){
    int arr[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    rowSum(arr, 3, 4);
    colSum(arr, 3, 4);
}