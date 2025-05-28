#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    // vec.begin() returns an iterator(pointer) to the first element of the vector
    // dereferencing it will give the value of the first element
     cout << "vec.begin(): " << *(vec.begin()) << endl; // 1

    // vec.end() returns an iterator(pointer) to the position just after the last element 
    // of the vector or the nth index (here n=6)
    // dereferencing it will give an error or garbage value, as it is not a valid element
     cout << "vec.end(): " << *(vec.end()) << endl; 

    // loop using vector iterators

    vector<int>:: iterator itr;  // declaring an iterator for the vector,
// initially it can be pointing to any random location

    for(itr= vec.begin(); itr!= vec.end(); itr++) // forward loop
    {
        cout<<*itr<<" "; // dereferencing the iterator to get the value
        //cout<<vec[itr]<<" ";// it will give err as itr is not an index, it is an iterator(it stores address)
    }cout<<endl;

    // reverse loop using vector iterators
    // we can use rbegin() and rend() to iterate in reverse order
    // rbegin() returns an iterator to the last element of the vector
    // rend() returns an iterator to the position just before the first element of the vector

    vector<int>:: reverse_iterator ritr; // declaring a reverse iterator for the vector
    for(ritr= vec.rbegin(); ritr!= vec.rend(); ritr++) // reverse loop
    {
        cout<<*ritr<<" "; // dereferencing the reverse iterator to get the value
    }

    return 0;
}