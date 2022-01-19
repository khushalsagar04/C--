#include<iostream>
#include<climits>
using namespace std;

void selection_sort(int arr[], int n){
    // for(int i=0; i<n-1; i++){
    //     int min = arr[i];
    //     for(int j=i+1; j<n; j++){
    //         if(arr[j] < min){
    //             min = arr[j];
    //         }
    //     }
    //     swap(min, arr[i]);
    // }
    // return;

    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    } 
}
int main(){
    int arr[5] = {64,25,13,22,11};
    selection_sort(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
}