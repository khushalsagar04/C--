#include<iostream>
using namespace std;

//1 -> Even
//0 -> Odd
bool isEven(int a){
    if(a%2==0){
        return true;
    }
    return false;
}

int main(){
    int a;
    cin>>a;

    cout<<isEven(a);
}