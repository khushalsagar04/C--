#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> v1, int m, vector<int> v2, int n){
    int i=0, j=0;

    while(i<=m && j<n){
        if(v1[i] <= v2[j]){
            i++;
        }
        else{
            v1[i+1] = v1[i];
            v1[i] = v2[j];
            i++;
            j++;
        }
    }

    while(i < (m+n)){
        v1[i] = v2[j];
        i++;
        j++;
    }
    while(j<n){
        v1[i] = v2[j];
        i++;
        j++;
    }
    //return;

    for(int k:v1){
        cout<<k<<" ";
    }

    return;

}
int main(){
    vector<int> v1;

    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(0);

    vector<int> v2;

    v2.push_back(2);
    v2.push_back(9);
    v2.push_back(6);

    merge(v1, v1.size(), v2, v2.size());
    
}