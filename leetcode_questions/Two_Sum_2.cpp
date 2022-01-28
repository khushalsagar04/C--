#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> v, int target){

    vector<int> ans;

    int i=0, j=v.size()-1;
    while(i<j){
        if(v[i] + v[j] == target){
            ans.push_back(i+1);
            ans.push_back(j+1);
            return ans;
        }
        else if(v[i] + v[j] > target){
            j--;
        }
        else{
            i++;
        }
    }
    ans.push_back(-1);
    return ans;
}
int main(){

    vector<int> v;

    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(15);

    int target = 10;
    vector<int> ans = twoSum(v, target);

    for(int i:ans){
        cout<<i<<" ";
    }

}