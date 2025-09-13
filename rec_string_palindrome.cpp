#include <iostream>
using namespace std;

bool isPalindrome(string s, int st, int en)
{
    if(st >= en)  
    {
        return true;
    }
    if(s[st] != s[en]) 
    {
        return false;
    }
    return isPalindrome(s, st+1, en-1);
}

int main()
{
    string s= "mom";

    if(isPalindrome(s, 0, s.length()-1))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a Palindrome";
    }

    return 0;
}