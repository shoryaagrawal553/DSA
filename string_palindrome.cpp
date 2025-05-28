#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
    int n = str.size();
    int st=0, en=n-1;

    while(st<en)
    {
        if(str[st] != str[en])
        return 0;
        else{
            st++;
            en--;
        }
    }

    return 1;
}

int main()
{
    cout<<"start\n";

    string str= "exact";
    if(isPalindrome(str))
    {
        cout<<"string is palindrome";
    }

    else
    cout<<"string is not palindrome";
    return 0;
}