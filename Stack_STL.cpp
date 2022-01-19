//Works on LIFO (Last In, First Out)

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Khushal");
    s.push("Sagar");
    s.push("Kumawat");

    // for(int i:s){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    //The above code doesn't work in a stack. 

    cout<<"Top Element: "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element: "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;

}