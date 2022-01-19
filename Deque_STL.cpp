#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(2);   //Enters element from the end
    d.push_back(3);
    d.push_front(4);   //Enters element from the start
    d.push_front(5);
    d.push_front(1);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Element at index 2 is: "<<d.at(2)<<endl;

    cout<<"Front: "<<d.front()<<endl;
    cout<<"Last: "<<d.back()<<endl;
    cout<<"Empty or not: "<<d.empty()<<endl;  //To check if the deque is empty or not

    d.pop_back(); //Removes element from the end

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front(); //Removes element from the beginning

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size before erase: "<<d.size()<<endl;
    
    d.erase(d.begin(), d.begin()+2);  

    cout<<"Size after erase: "<<d.size()<<endl;


}