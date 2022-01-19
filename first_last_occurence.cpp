#include<iostream>
using namespace std;

int first(int arr[], int n, int key){
	int s=0, e=n-1;
	int mid = s + (e-s)/2;
	int ans = -1;
	
	while(s<=e){
		if(arr[mid] == key){
			ans = mid;
			e=mid-1;
		}else if(arr[mid] < key){
			s=mid+1;
		}else{
			e=mid-1;
		}
		
		mid = s + (e-s)/2;
	}
	return ans;
}
int last(int arr[], int n, int key){
	int s=0, e=n-1;
	int mid = s + (e-s)/2;
	int ans = -1;
	
	while(s<=e){
		if(arr[mid] == key){
			ans = mid;
			e=mid+1;
		}else if(arr[mid] < key){
			s=mid+1;
		}else{
			e=mid-1;
		}
		
		mid = s + (e-s)/2;
	}
	return ans;
}

int main(){
	int arr[9] = {1,2,2,3,3,3,3,4,4};
	//cout<<"First occurence of 3 is at index: "<<first(arr,9,3)<<endl;
	cout<<"Last occurence of 3 is at index: "<<last(arr,9,3);
	
}
