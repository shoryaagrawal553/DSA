// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the majority element using the brute force approach with O(n^2) time complexity
int majorityElement(vector<int> nums)
{
    int i, j, ans = 0; // Variables for iteration and storing the result
    int n = nums.size(); // Get the size of the array
    for (i = 0; i < n; i++) // Iterate through the array
    {
        int count = 0; // Counter to count the occurrences of nums[i]
        for (j = i + 1; j < n; j++) // Check all elements after nums[i]
        {
            if (nums[i] == nums[j]) // Increment count if there is a match
            {
                count++;
            }
        }
        if (count >= n / 2) // Check if the count exceeds n/2
        {
            ans = nums[i]; // Update the majority element
        }
    }
    return ans; // Return the majority element
}

// Main function to test the majority element function
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2}; // Example array
    // vector<int> arr = {3, 2, 3}; // Uncomment for another test case
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Uncomment for another test case
    // vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5}; // Uncomment for another test case

    cout << "The majority element is " << majorityElement(arr) << endl; // Print the result

    return 0; // End of program
}
