// Program to find the maximum sum of a subarray
#include <iostream>
using namespace std;

int main()
{
    int n = 7; // Size of the array
    int arr[n] = {3, -4, 5, 4, -1, 7, -8}; // Input array
    int st, en, maxn = INT_MIN; // Variables to track start, end, and maximum sum

    // Brute force approach with O(n^2) time complexity
    // Checking all possible subarrays
    for (st = 0; st < n; st++) // Iterate over all possible starting points
    {   
        int sum = 0; // Initialize sum for the current subarray
        for (en = st; en < n; en++) // Iterate over all possible ending points
        {
            sum = sum + arr[en]; // Add the current element to the sum
            maxn = max(maxn, sum); // Update maxn if the current sum is greater
        }
    }

    // Output the maximum sum found
    cout << "The maximum sum of a subarray is " << maxn << endl;
    return 0; // End of the program
}

// Note: An optimal approach to solve this problem in O(n) time complexity
// is Kadane's Algorithm, which is implemented in LeetCode Problem 53.
