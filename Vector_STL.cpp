#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v; //vector made

    vector<int> a(5,1); //vector of size 5 is made and all elements have value 1. If value not given then by default value is 0.

    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> b(a);  //elements of vector 'a' are copied to vector 'b'
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(2);

    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(4);

    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(6);

    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    //Capacity is the total space allocated by the vector.
    //Size is the number of elements present in the vector.

    cout<<"Element at index 2: "<<v.at(2)<<endl;

    cout<<"Front: "<<v.front()<<endl;  //Front is used to get the first element
    cout<<"Back: "<<v.back()<<endl;    //Back is used to get the last element

    v.pop_back();  //Removes the last element present in the vector
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl; 

    v.clear();
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    //using the clear operator the vector becomes empty but it's capacity is still the same.

}