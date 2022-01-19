#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //1
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //2
    // int i=1;
    // while (i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i=1;

    
    //3
    // int i=1;
    // int count=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //4
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i+j-1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //5
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i-j+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;   
    // }


    
    //6
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         char ch='A' +i-1;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }



    //7
    // int i=1;
    // char ch = 'A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //8
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     char ch='A' +i-1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //9
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         char ch = 'A' + n-i+j-1;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //10
    /*
    1111
     222
      33
       4
    */

    // int i=1;
    // while(i<=n){
    //     int space = i-1;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }

    //     int j=1;
    //     while(j<=n-i+1){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //11
    /*
        1
       22
      333
     4444
    55555
    */

//    int i=1;
//    while(i<=n){
//        int space = n-i;
//        while(space){
//            cout<<" ";
//            space--;
//        }

//        int j=1;
//        while(j<=i){
//            cout<<i;
//            j++;
//        }
//        cout<<endl;
//        i++;
//    }


    //12
    /*
    1234
     234
      34
       4
    */

    // int i=1;
    // while(i<=n){
    //     int space = i-1;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }

    //     int j=1;
    //     int count = i;
    //     while(j<=n-i+1){
    //         cout<<count;
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    
    //13
    /*
        1
       23
      456
     78910
    */

    // int i=1;
    // int count=1;
    // while(i<=n){
    //     int space = n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }

    //     int j=1;
    //     while(j<=i){
    //         cout<<count;
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //14
    /*
        1
       121
      12321
     1234321
    */

    // int i=1;
    // while(i<=n){
    //     int space=n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }

    //     int j=1;
    //     while(j<=i){
    //         cout<<j;
    //         j++;
    //     }

    //     int start=i-1;
    //     while(start){
    //         cout<<start;
    //         start--;
    //     }
    //     cout<<endl;
    //     i++;
    // }



    //15
    /*
    1234554321
    1234**4321
    123****321
    12******21
    1********1
    */


   int i=1;
   while(i<=n){
       int j=1;
       while(j<=n-i+1){
           cout<<j<<" ";
           j++;
       }

       int space=(2*i)-2;
       while(space){
           cout<<"*"<<" ";
           space--;
       }

       int k=1;
       while(k<=n-i+1){
           cout<<n-i-k+2<<" ";
           k++;
       }
       cout<<endl;
       i++;
   }
     
}