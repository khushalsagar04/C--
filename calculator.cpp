#include<iostream>
using namespace std;

int main(){
    int a, b;
    char oper;
    cin>>a>>b;
    cin>>oper;

    switch(oper){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        case '%':
            cout<<a%b;
            break;
        default:
            cout<<"Invalid operation";
    }
}