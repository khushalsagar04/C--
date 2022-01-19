#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //1
    // int i=0;
    // while(i<n){
    //     cout<<"****"<<endl;
    //     i++;
    // }



    //2
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<i<<" ";
    //         j++;
    //     }

    //     cout<<endl;
    //     i++;

    // }

    
    //3
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //4
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<n-j+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //5
    // int i=1, count=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //6
    // int i=1;
    // char ch = 'A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         // cout<< ch<<" ";
    //         // j++;

    //         char ch='A' +i-1;
    //         cout<<ch<<" ";
    //         j++;

    //     }
    //     cout<<endl;
    //     i++;
    //     //ch++;
    // }


    //7
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while (j<=n){
    //         char ch='A' + j-1;
    //         cout<<ch<<" ";
    //         j++;
    //     }

    //     cout<<endl;
    //     i++;
        
    // }


    //8

    // int i=1;
    // char ch='A';
    // while(i<=n){

    //     int j=1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //9
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A' +i-1;
        while(j<=n){ 
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }

}