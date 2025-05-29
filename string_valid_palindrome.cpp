//leet code question 125
/* A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
and removing all non-alphanumeric characters, it reads the same forward and backward. 
Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.   */

#include <iostream>
using namespace std;

bool isAlphaNumeric(char ch)  // to check if a character is alphanumeric
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    return true; //1

    else
    return false;  //0
}

bool isPalindrome(string s) 
{
    int n= s.size();
    int st=0, en=n-1;

    while(st<en)
    {
        if(!isAlphaNumeric(s[st]))
        {
            st++;
            continue;
        }
        if(!isAlphaNumeric(s[en]))
        {
            en--;
            continue;
        }

        if(tolower(s[st])!= tolower(s[en]))  // to compare characters in a case-insensitive manner
        return false;

        else{
            st++;
            en--;
        }
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    // string s= "race a car"; // not a palindrome
    // string s= " "; // empty string is a palindrome

    if(isPalindrome(s))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}