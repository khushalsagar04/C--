//Works on FIFO (First In, First Out)
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Khushal");
    q.push("Sagar");
    q.push("Kumawat");

    cout<<"Size before pop: "<<q.size()<<endl;

    cout<<"First element: "<<q.front()<<endl;
    q.pop();

    cout<<"First element: "<<q.front()<<endl;

    cout<<"Last element: "<<q.back()<<endl;

}