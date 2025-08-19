/*1957. Delete Characters to Make Fancy String
A fancy string is a string where no three consecutive characters are equal.
Given a string s, delete the minimum possible number of characters from s to make it fancy.
Return the final string after the deletion. It can be shown that the answer will always be unique.
Example 1:
Input: s = "leeetcode"
Output: "leetcode"
Explanation:
Remove an 'e' from the first group of 'e's to create "leetcode".
No three consecutive characters are equal, so return "leetcode".  */

#include <iostream>
using namespace std;

string makeFancyString(string s) 
{
    string result;
    
    for (char c : s) 
    {
        int len = result.length();

        if (len >= 2 && result[len - 1] == c && result[len - 2] == c) {
            continue; // skip if last two characters are same as current
        }
        result += c; // concatinate the result string and current charater in string s
    }

    return result;
}

int main()
{
    string s = "leeetcode";
    string fancyString = makeFancyString(s);
    cout << "Fancy String: " << fancyString << endl; // Output: "leetcode"
    // cout << "Fancy String: " << makeFancyString("aaabaaaa") << endl; // Output: "aabaa"
    // cout << "Fancy String: " << makeFancyString("aab") << endl; // Output: "aab"
    // cout << "Fancy String: " << makeFancyString("a") << endl; // output: "a"

    return 0;
}
/* Constraints:
1 <= s.length <= 10^5
s consists only of lowercase English letters.    */