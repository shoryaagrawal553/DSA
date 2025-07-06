// Program to find the maximum sum of a subarray
// This program uses Kadane's Algorithm, which is a dynamic programming algorithm
// that solves the maximum subarray problem in linear time.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 7; // Size of the array
    // Uncomment the desired array for testing
    // int arr[n] = {3, -4, 5, 4, -1, 7, -8}; // Example array with mixed positive and negative numbers
    int arr[n] = {-2, -3, -4, -1, -5, -6, -7}; // Example array with all negative numbers

    int i, currsum = 0, maxsum = INT_MIN; // Initialize variables
    // currsum keeps track of the current subarray sum
    // maxsum stores the maximum subarray sum found so far

    // Iterate through the array to calculate the maximum subarray sum
    for (i = 0; i < n; i++)
    {
        currsum += arr[i]; // Add the current element to the current sum
        maxsum = max(maxsum, currsum);  // Update the maximum sum if the current sum is greater

        if (currsum <= 0)  // If the current sum becomes non-positive
        {   
            // Reset current sum to 0 because a negative sum will not contribute
            // to the maximum sum of any subarray, as it will only decrease the sum
            // of any future subarray
            currsum = 0;
        }
    }

    // Output the maximum sum of a subarray
    cout << "The max sum of a subarray is " << maxsum << endl;

    // Alternative implementation using vectors (commented out for now)
    /*
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8}; // Example vector with mixed positive and negative numbers
    int currsum = 0, maxsum = INT_MIN; // Reset variables for vector implementation

    // Iterate through the vector to calculate the maximum subarray sum
    for (int i : vec)  // For each element in the vector
    {
        currsum += i; // Add the current element to the current sum
        maxsum = max(maxsum, currsum); // Update the maximum sum if the current sum is greater

        if (currsum <= 0)  // If the current sum becomes non-positive
        {
            currsum = 0; // Reset current sum to 0
        }
    }

    // Output the maximum sum of a subarray
    cout << "The max sum of a subarray is " << maxsum << endl;
    */

    return 0; // Indicate successful program termination
}
