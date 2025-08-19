/* leetcode problem Find Lucky Integer in an Array
Given an array of integers arr, a lucky integer is an integer that has a frequency in the 
array equal to its value.
Return the largest lucky integer in the array. If there is no lucky integer return -1.

Example 1:
Input: arr = [2,2,3,4]
Output: 2
Explanation: The only lucky number in the array is 2 because frequency[2] == 2.

Constraints:
1 <= arr.length <= 500
1 <= arr[i] <= 500    */

#include <iostream>
#include <vector>
using namespace std;

int findLucky(vector<int>& arr) 
{
    vector<int> freq(501, 0);  // 501 is the maximum value of arr[i] as per constraints

    for(int i: arr) // Count the frequency of each element in the array
    {
        freq[i]++;
    }

    int maxe= -1;

    for(int i: arr) // Iterate through the array again to find the largest lucky integer
    {
        if(i== freq[i]) // Check if the element is a lucky integer
        {
            maxe= max(maxe, freq[i]);
        }
    }

    return maxe;

}


int main()
{
    vector<int> arr = {2, 2, 3, 4}; // Example input
    // vector<int> arr = {1, 2, 2, 3, 3, 3}; // Another example input
    // vector<int> arr = {1, 2, 3, 4}; // No lucky integer example
    // vector<int> arr = {5, 5, 5, 5, 5}; // Lucky integer example
    
    int ans = findLucky(arr);

    if(ans != -1)
    {
        cout << "The largest lucky integer in the array is: " << ans << endl;
    }
    else
    {
        cout << "There is no lucky integer in the array." << endl;
    }
    return 0;
}