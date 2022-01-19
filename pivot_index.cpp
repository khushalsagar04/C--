#include<iostream>
using namespace std;

int pivotIndex(int arr[], int n){
    int s=0, e=n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        int lsum=0, rsum=0;
        for(int i=0; i<mid; i++){
            lsum += arr[i];
        }
        for(int j=mid+1; j<n; j++){
            rsum += arr[j];
        }

        // for(int i=0, j=mid+1; i<mid, j<n; i++, j++){
        //     lsum += arr[i];
        //     rsum += arr[j];
        // }

        if(lsum == rsum){
            return mid;
        }
        else if(lsum>rsum){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

        mid = s + (e-s)/2;
    }
    return -1;
}
int main(){
    int arr[6] = {4,16,31,14,-65,65};
    int a[3] = {2,1,-1};
    cout<<pivotIndex(arr,6);
}