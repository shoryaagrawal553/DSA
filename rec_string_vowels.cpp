#include<iostream>
using namespace std;

int countVowels (string s, int i, int count)
{
    if(i== 0) return count;

    if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u') count++;

    return countVowels(s, i-1, count);
}

int countVowels_2(string s, int i)
{
    if(i==-1) return 0;

    if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u') return (1 + countVowels_2(s, i-1) );

    else return countVowels_2(s, i-1);
} 

int main()
{
    string word;
    cout<<"enter a word: ";
    cin>>word;

    cout<<"total vowels are:- "<<countVowels(word, word.length()-1, 0);

    cout<<"\nnumber of vowels:- "<<countVowels_2(word, word.length()-1);

    return 0;
}