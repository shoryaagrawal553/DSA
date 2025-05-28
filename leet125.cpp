#include <iostream>
using namespace std;

class Solution {
public:
    bool isAlphaNumeric(char ch)
    {
        if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' || ch>='0' && ch<='9')
        return true; //1

        else
        return false;
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

            if(tolower(s[st])!= tolower(s[en]))
            return false;

            else{
                st++;
                en--;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string s = "A man, a plan, a canal: Panama";

    if(sol.isPalindrome(s))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    
    return 0;
}