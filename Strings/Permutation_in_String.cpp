/* leetcode problem: 567. Permutation in String
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.
Example 1:
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").  */

#include <iostream>
using namespace std;  //T.C. O(n * m), where n is the length of s1 and m is the length of s2.
                      // S.C. O(1) since we are using a fixed size array of size 26 for frequency count.
// more optimized code in leet567 (same method but better loop structure)  O(m+n) time complexity
bool isFreqSame(int s1Freq[], int windFreq[])
{
    for(int i=0; i<26; i++)
    {
        if(s1Freq[i] != windFreq[i])
        return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) 
{
    if(s1.length()> s2.length())
    return false;

    int s1Freq[26] = {0}; //all elements initialised with 0

    for(int i=0; i<s1.length(); i++) // to find frequency of elements in s1
    {
        int indx= s1[i] - 'a'; // converting character to index (0-25)
        // 'a' is at index 0, 'b' at index 1, ..., 'z' at index 25
        s1Freq[indx]++;
    }   

    int windSize= s1.length(); 

    for(int i=0; i<s2.length(); i++) 
    {
        int windIndx=0, indx=i;
        int windFreq[26]= {0}; // reset all values to 0 in every iteration

        while(windIndx < windSize && indx< s2.length()) 
        {
            windFreq[s2[indx] - 'a']++;  //to find frequency of elements in the window
            windIndx++;
            indx++;
        }

        if(isFreqSame(s1Freq, windFreq))
        return true;
    }
    return false;
    
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    if(checkInclusion(s1, s2))
        cout << "s2 contains a permutation of s1." << endl;
    else
        cout << "s2 does not contain a permutation of s1." << endl;

    // Example 2
    s1 = "ab";
    s2 = "eidboaoo";
    if(checkInclusion(s1, s2))
        cout << "s2 contains a permutation of s1." << endl;
    else
        cout << "s2 does not contain a permutation of s1." << endl;

    // Example 3
    s1 = "abc";
    s2 = "ccccbbbbaaaa";
    if(checkInclusion(s1, s2))
        cout << "s2 contains a permutation of s1." << endl;
    else
        cout << "s2 does not contain a permutation of s1." << endl;

    return 0;
}