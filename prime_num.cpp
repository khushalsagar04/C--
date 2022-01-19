#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool isPrime=1;
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            cout<<"Not a prime number";
            isPrime=0;
            break;
        }
    }

    if(n>=2 && isPrime==1){
        cout<<"Prime Number";
    }
}