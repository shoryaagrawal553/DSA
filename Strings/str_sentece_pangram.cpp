/* leetcode problem: 1832. Check if the Sentence Is Pangram
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence 
is a pangram, or false otherwise.
Example 1:
Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet. */

// simpler no auxiliary array approach in leet1832.cpp (by me)

#include <iostream>
#include <vector>
using namespace std;

bool checkIfPangram(string sentence) 
{
    vector<bool> alpha(26, 0); // Initialize a vector of size 26 with all elements set to false (0)

    for(int i=0; i<sentence.size(); i++)
    {
        alpha[sentence[i] - 'a'] = 1; // Mark the character as found by setting the corresponding index to true (1)
    }

    for(int i=0; i<26; i++)
    {
        if(alpha[i] == 0) // If any character from 'a' to 'z' is not found in the sentence
        return false;
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