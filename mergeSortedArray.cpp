#include<iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr3[]){

    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(arr1[i]  >= arr2[j]){
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        else{
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    }
    
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }

    return;

}

int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8];

    merge(arr1, 5, arr2, 3, arr3);

    for(int i=0; i<8; i++){
        cout<<arr3[i]<<" ";
    } 

     
    

}