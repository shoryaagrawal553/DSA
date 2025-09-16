#include<iostream>
using namespace std;

bool checkPalindrome(string word, int st, int en)
{
    if(st >= en) return true;

    if(word[st] != word[en]) return false;

    return checkPalindrome(word, st+1, en-1);
}

int main()
{
    string word = "mom"; 
    // cout<<"enter the word: ";
    // cin>>word;

    if(checkPalindrome(word, 0, 2)) 
    {
        cout<<"String is a palindrome!!";
    }
    else {
        cout<<"Its not a palindrome";
    }

    return 0; 
}