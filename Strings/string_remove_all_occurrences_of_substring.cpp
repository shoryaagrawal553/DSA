// leet code question 1910
/* Given two strings s and part, perform the following operation on s until all occurrences 
of the substring part are removed:
Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.
A substring is a contiguous sequence of characters in a string.

Example 1:
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc". */

#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) 
{
    while(s.length() >0  && s.find(part)<s.length() )
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
// s.find(part) returns the index of the first occurrence of part in s, or string::npos if part is not found.
// s.erase(index, length) removes the substring starting at index with the specified length from s.

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    // string s = "aababab";
    // string part = "ab";
    // string s = "axxxxyyyyb"; 
    // string part = "xy"

    string result = removeOccurrences(s, part);
    cout << "Result after removing all occurrences of '" << part << "' from '" << s << "': " << result << endl;

    return 0;
}