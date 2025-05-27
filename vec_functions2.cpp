#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

//     vec.erase(vec.begin()); // removes the first element of the vector, 1
//     vec.erase(vec.begin() + 1); // removes the second element of the vector, 2

//     for(int val: vec)
//     {
//         cout << val << " ";
//     } cout << endl;

//     // to remove a range of elements  vec.erase(start, end)   [start, end)
//     vec.erase(vec.begin() + 1, vec.begin() + 3); //removes elements from index 1 to 2 (exclusive of value at 3)
// //         (0+1) 2 at index 1     3 at index 2(0+3) 

//     for(int val: vec)
//     {
//         cout << val << " ";
//     } cout << endl;

//     // to insrert at specific index  vec.insert(pos, value)   pos= vec.begin() + index
//     vec.insert(vec.begin() + 2, 100); // inserts 100 at index 2
//     for(int val: vec)
//     {
//         cout << val << " ";
//     } cout << endl;

    // to empty the vector
    vec.clear(); // removes all elements from the vector
    cout<<"size "<<vec.size()<<endl; // 0
    cout<<"capacity "<<vec.capacity()<<endl; // 8

    cout<<"is empty "<<vec.empty()<<endl; // to check if the vector is empty (1 if true 0 if false)
    return 0;
}