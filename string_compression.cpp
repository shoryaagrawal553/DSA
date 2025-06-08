/* leetcode question: 443. String Compression
Given an array of characters chars, compress it using the following algorithm:
Begin with an empty string s. For each group of consecutive repeating characters in chars:
If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character
array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.
After you are done modifying the input array, return the new length of the array.
You must write an algorithm that uses only constant extra space.
Example 1:
Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".   */

#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) 
{
    int indx=0;
    for(int i=0; i<chars.size(); i++)
    {
        char ch= chars[i];
        int count =0;
        while(i<chars.size() && chars[i] == ch)
        {
            count++;
            i++;
        }

        if(count==1)
        {
            chars[indx]= ch;
            indx++;
        }

        else // if count> 1
        {
            chars[indx]= ch;
            indx++; 
            string str= to_string(count); // to_string() converts integer to string
            for(int j: str)  // to get each character of the string (in case of count>9 2 digit no.) in the array
            {
                chars[indx]= j;
                indx++;
            }
        }

        i--; //because of the while loop the i is already on the next position or the new character
    }

    chars.resize(indx); // resize the vector to the new length
    // took indx because it will be the pointing to the next index where our final eddited array ends
    // so the size of the array will be equal to indx
    return chars.size();
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = compress(chars);
    cout << "New length: " << newLength << endl;
    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i] << " ";
    }
    
    return 0;
}