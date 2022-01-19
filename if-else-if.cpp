#include<iostream>
using namespace std;

int main(){
    // char ch;
    // cin>>ch;


    // if(ch>=48 && ch<=57){
    //     cout<<"This is numeric";
    // }else if(ch>=65 && ch<=90){
    //     cout<<"Uppercase alphabet";
    // }else if(ch>=97 && ch<=122){
    //     cout<<"Lowercase alphabet";
    // }else{
    //     cout<<"Invalid input";
    // }

    int n;
    cin>>n;
    
    int sum=0, i=2;

    while(i<=n){
        sum += i;
        i +=2;
    }

    cout<<"Sum is : "<<sum;
}