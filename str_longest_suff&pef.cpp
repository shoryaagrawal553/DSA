/* using KMP algo
gfg Longest Prefix Suffix
Given a string of characters s, find the length of the longest prefix which is also a suffix.
Note: Prefix and suffix can be overlapping but they should not be equal to the entire string.

Input: s = "abab"
Output: 2
Explanation: "ab" is the longest prefix and suffix. 
Input: s = "aabcdaabc"
Output: 4
Explanation: The string "aabc" is the longest prefix and suffix.  */

#include <iostream>
#include<vector>
using namespace std;

int longestPrefixSuffix(string &s) 
{
    vector<int> LPS(s.size(), 0);
    int pre=0, suf=1;
    
    while(suf<s.size())
    {
        if(s[pre]==s[suf])
        {
            
            LPS[suf]=pre+1;
            pre++;
            suf++;
        }
        
        else
        {
            if(pre==0)
            {
                LPS[suf]=0;
                suf++;
            }
            
            else
            {
                pre=LPS[pre-1];
            }
        }
    }
    
    return LPS[s.size()-1];
    
}

int main()
{
    string s;
    cout << "Enter the string: "; // ex:- "abab" "aabcdaabc"  "abcabdabcabdabdab"
    cin >> s;
    int result = longestPrefixSuffix(s);
    cout << "Length of the longest prefix which is also a suffix: " << result << endl;
    return 0;
}