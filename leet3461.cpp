/* 3461. Check If Digits Are Equal in String After Operations I
You are given a string s consisting of digits. Perform the following operation repeatedly until the string has 
exactly two digits:
For each pair of consecutive digits in s, starting from the first digit, calculate a new digit as the sum of 
the two digits modulo 10.
Replace s with the sequence of newly calculated digits, maintaining the order in which they are computed.
Return true if the final two digits in s are the same; otherwise, return false.
Example 1:
    Input: s = "3902"
    Output: true
    Explanation:
        Initially, s = "3902"
        First operation:
            (s[0] + s[1]) % 10 = (3 + 9) % 10 = 2
            (s[1] + s[2]) % 10 = (9 + 0) % 10 = 9
            (s[2] + s[3]) % 10 = (0 + 2) % 10 = 2
            s becomes "292"
        Second operation:
            (s[0] + s[1]) % 10 = (2 + 9) % 10 = 1
            (s[1] + s[2]) % 10 = (9 + 2) % 10 = 1
            s becomes "11"
    Since the digits in "11" are the same, the output is true.  */

#include <iostream>
using namespace std;

bool hasSameDigits(string s) 
{
    while(s.length() > 2)
    {
        string ans="";
        for(int i=1; i<s.length(); i++)
        {
            int a = s[i-1] - '0'; //The expression s - '0' performs the conversion. For example, 
            int b = s[i] - '0';  // '5' - '0' is equivalent to 53 - 48, which equals 5

            int sum = (a+b) % 10;
            char temp = sum + '0';

            ans.push_back(temp);
        }
        s=ans;
    }
    
    // if(s[0] == s[1]) return true;
    // return false;
    return s[0] == s[1];

}


int main()
{
    string s = "3902";  // result is true
    // string s = "1234"; // result is false
    // string s = "34789";  // result is false
    bool result = hasSameDigits(s);
    if(result)
        cout << "The final two digits are the same." << endl;
    else
        cout << "The final two digits are different." << endl;

    return 0;
}