#include<iostream>
using namespace std;

int pivot(int arr[], int n){
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    //int lsum=0, rsum=0;

    while(s<=e){
        int lsum=0, rsum =0;
        for(int i=0; i<mid; i++){
            lsum += arr[i];
        }
        for(int j=mid; j<n; j++){
            rsum += arr[j];
        }

        if(lsum == rsum){
            return mid;
        }
        else if(lsum > rsum){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;

    }
    return -1;
}
int main(){
    int arr[6] = {1,7,0,3,6,2};
    pivot(arr, 6);
}