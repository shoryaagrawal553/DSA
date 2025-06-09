/* leetcode problem: 1832. Check if the Sentence Is Pangram
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence 
is a pangram, or false otherwise.
Example 1:
Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet. */

// auxiliary array approach in str_sentece_pangram.cpp

#include <iostream>
using namespace std;

bool checkIfPangram(string sentence) 
{
    for(char i='a'; i<='z'; i++) 
    {
        if(sentence.find(i)==string::npos) //If any character from 'a' to 'z' is not found in the sentence
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    // string sentence = "hello"; // Example of a non-pangram sentence
    // string sentence = "abcdefghijklmnopqrstuvwxyz"; // Example of a pangram sentence
    
    if(checkIfPangram(sentence)) 
    {
        cout << "The sentence is a pangram." << endl;
    } 
    else 
    {
        cout << "The sentence is not a pangram." << endl;
    }
    return 0;
}