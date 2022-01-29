#include<iostream>
using namespace std;

void rowSum(int arr[][4], int row, int col){
    
    //int sum=0;
    int temp=0;
    int tempIndex=0;

    for(int i=0; i<row; i++){
        int sum = 0;

        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        
        if(temp < sum){
            temp=sum;
            tempIndex = i+1;
        }
    }

    cout<<"The largest sum is: "<<temp<<endl;
    cout<<"Row with largest sum is: "<<tempIndex;

    cout<<endl;
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
}