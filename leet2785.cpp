/* leetcode 2785. Sort Vowels in a String
Given a 0-indexed string s, permute s to get a new string t such that:
All consonants remain in their original places. More formally, if there is an index i 
with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i].
The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of 
indices i, j with 0 <= i < j < s.length such that s[i] and s[j] are vowels, then t[i] must not 
have a higher ASCII value than t[j].
Return the resulting string.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in lowercase or uppercase. 
Consonants comprise all letters that are not vowels.
Example 1:
    Input: s = "lEetcOde"
    Output: "lEOtcede"
    Explanation: 'E', 'O', and 'e' are the vowels in s; 'l', 't', 'c', and 'd' are all consonants. 
    The vowels are sorted according to their ASCII values, and the consonants remain in the same places.  */

#include <iostream>
#include <algorithm>
using namespace std;

string sortVowels(string s) {
    string t=s, temp;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' || s[i]== 'A'|| s[i]== 'E'|| s[i]== 'I'|| s[i]== 'O' || s[i]== 'U') 
        {
            temp.push_back(s[i]);
        }
    }

    sort(temp.begin(), temp.end());

    int idx=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' || s[i]== 'A'|| s[i]== 'E'|| s[i]== 'I'|| s[i]== 'O' || s[i]== 'U') 
        {
            t[i] = temp[idx];
            idx++;
        }

        //else t[i] = s[i];
    }   // this else is not needed here because we have already copied the string s in t and now we are just changing the order of vowels

    return t;
}

int main()
{
    string s = "lEetcOde";  // expected output: "lEOtcede"
    // string s = "leetcode";
    // string s = "aeiou";
    // string s = "hEllO";
    cout<<sortVowels(s);

    return 0;
}