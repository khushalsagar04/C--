#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i=2; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}
int nCr(int n, int r){
    // int num = fact(n);
    // int denom = fact(r) * fact(n-r);
    //return num/denom;

    return fact(n)/(fact(n-r)*(fact(r)));

    //Both the above methods are correct
    
}
int main(){
    int n,r;
    cin>>n>>r;

    cout<<nCr(n,r);
}