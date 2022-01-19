#include<iostream>
#include<vector>
using namespace std;

void reverse(int arr[], int n){
    int s=0, e=n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return;
}
int main(){
    int arr[8] = {5,3,6,7,4,1,9,0};
    reverse(arr, 8);

    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
}