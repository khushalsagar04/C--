#include<iostream>
using namespace std;

int search(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid]>key){
            end = mid-1;
        }else{
            start = start+1;
        }
        mid = start + (end-start)/2;

    }
    return -1;
}
int main(){
    int arr[7] = {5, 11, 13, 17, 19, 23, 29};

    int key;
    cin>>key;

    cout<<search(arr, 7, key);
}