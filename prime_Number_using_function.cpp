#include<iostream>
using namespace std;

//1 -> Prime
//0 -> Not Prime

bool isPrime(int n){
    for(int i=2; i<=(n/2); i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;

    cout<<isPrime(n);
}