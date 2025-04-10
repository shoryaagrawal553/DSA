/* Given an array nums of size n, return the majority element.
   The majority element is the element that appears more than ⌊n / 2⌋ 
   times. You may assume that the majority element always exists in the array.
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element in an array using the Boyer-Moore Voting Algorithm
// [] brackets are used because the array is passed as a pointer to the function
int arr_majorityElement(int arr[], int n)  
{
    int freq = 0, ans = 0; // freq keeps track of frequency count, ans stores the candidate for majority element

    for (int i = 0; i < n; i++) // Traverse the array
    {
        if (freq == 0) // If frequency is zero, choose current element as the candidate
        {
            ans = arr[i];
        }

        if (ans == arr[i]) // If current element matches the candidate, increment frequency
        {
            freq++;
        }
        else // Otherwise, decrement frequency
        {
            freq--;
        }
    }
    return ans; // Return the majority element
}

// Function to find the majority element in a vector using the Boyer-Moore Voting Algorithm
int vec_majorityElement(vector<int> nums)
{
    int n = nums.size(); // Get the size of the vector
    int freq = 0, ans = 0; // freq keeps track of frequency count, ans stores the candidate for majority element

    for (int i = 0; i < n; i++) // Traverse the vector
    {
        if (freq == 0) // If frequency is zero, choose current element as the candidate
        {
            ans = nums[i];
        }

        if (ans == nums[i]) // If current element matches the candidate, increment frequency
        {
            freq++;
        }
        else // Otherwise, decrement frequency
        {
            freq--;
        }
    }
    return ans; // Return the majority element
}

int main()
{
    // Example input for array
    int n = 6; // Size of the array
    int arr[n] = {1, 2, 2, 1, 1, 1}; // Array input

    // Example input for vector
    vector<int> vec = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5}; // Vector input
    
    // Find majority element in the array
    int ans1 = arr_majorityElement(arr, n); // Pointer to the function; brackets not required during the function call

    // Find majority element in the vector
    int ans2 = vec_majorityElement(vec);

    // Output the results
    cout << "The majority element in the array is " << ans1 << endl;
    cout << "The majority element in the vector is " << ans2 << endl;

    return 0; // Indicate successful execution
}
