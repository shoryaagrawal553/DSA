#include <iostream>
#include <vector>
using namespace std;

int main()
{ // all are of O(1) time complexity
    vector<int> vec;

    // to insert elements
    vec.push_back(1);  // pushes element at the ned of the vector
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vec.emplace_back(6); // emplace_back is used to insert an element at the end of the vector

    for(int val: vec)
    {
        cout<<val<<" ";
    } cout<<endl;

    vec.pop_back(); // removes the last element of the vector
    for(int val: vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    // to access data at a specific index
    cout<<vec[0]<<endl; // 1
    cout<<vec.at(0)<<endl; // 1 

    // to access the first and last element
    cout<<"front "<<vec.front()<<endl; // 1   
    cout<<"back "<<vec.back()<<endl; // 5

    // size and capacity
    cout<<"size "<<vec.size()<<endl; // 5,  currently occupied size
    cout<<"capacity "<<vec.capacity()<<endl; // 8
    // capacity is the size of the allocated memory
    // always increases by a factor of 2-> 1, 2, 4, 8...

    
    return 0;
}