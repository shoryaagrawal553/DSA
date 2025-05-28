/* Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.
Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]  */

#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) // character array or cstring
{
    int n= s.size();
    int st=0, en=n-1;

    while(st<en)
    {
        swap (s[st], s[en]);
        st++;
        en--;
    }    
}


int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    // vector<char> s={'H', 'a', 'n', 'a', 'n', 'a'}; 
    reverseString(s);
    for (char c : s) {
        cout << c << " ";
    }
    cout << endl; // Output: o l l e h
    
    return 0;
}