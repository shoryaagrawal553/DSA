/*leetcode question 151
Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will 
be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
Note that s may contain leading or trailing spaces or multiple spaces between two words. 
The returned string should only have a single space separating the words. Do not include any extra spaces.
Example 1:
Input: s = "the sky is blue"
Output: "blue is sky the"  */

#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) 
    {
        int n= s.length();
        string ans="";

        reverse(s.begin(), s.end());

        for(int i=0; i<n; i++)
        {
            string word="";
            while(  i<n && s[i] !=' ')
            {
                word=s[i] + word;
                i++;
            }
            if(word.length() >0)
            {
            ans+= " "+ word;
            }
        } 

        return ans.substr(1);   
    }
};

int main()
{
    Solution sol;
    string s = "  the   sky is   blue  "; // Example with leading, trailing, and multiple spaces
    string result = sol.reverseWords(s);
    cout << "Reversed words: '" << result << "'" << endl;
    // Output: "blue is sky the"
    
    return 0;
}