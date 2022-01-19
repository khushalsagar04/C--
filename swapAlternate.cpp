#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }

    }
    return;
}
int main(){
    int arr[10] ={2,4,3,1,56,76,84,16,93,20};

    swapAlternate(arr, 10);
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    } 
}