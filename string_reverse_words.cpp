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
            word=s[i] + word; // added thee character at the front of the word 
            i++;              // for example, if word is "sky" and s[i] is 't', then word becomes "t" + "sky" = "tsky"
        }                     // or we can put the letters in the word in the same order as they occur and 
        //then use a reverse function before putting it in answer
        if(word.length() >0)
        {
        ans+= " "+ word;
        }
    } 
//           function to give substring from index 1 to the end of the string
    return ans.substr(1);   // to remove the space in the beginning of the string 
}

int main()
{
    // string s = "the sky is blue";
    string s = "  the   sky is   blue  "; // Example with leading, trailing, and multiple spaces
    string result = reverseWords(s);
    cout << "Reversed words: '" << result << "'" << endl;
    // Output: "blue is sky the"

    return 0;
}