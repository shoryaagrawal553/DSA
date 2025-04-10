#include <iostream>
using namespace std;

int main()
{
    int n = 10; // Number of elements in the array
    int arr[n] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 1}; // Array containing elements with duplicates
    int ans = 0; // Variable to store the unique element
    int s = 0, e = n - 1; // Start and end pointers for the array

    // First approach: Checking for the unique element using a nested loop
    while (s <= e)
    {
        // Iterate through the array to compare elements
        for (int i = 0; i < n; i++)
        {
            // If the element at the start pointer matches another element
            if (arr[s] == arr[i])
                e--; // Decrement the end pointer
        }
        else
        {
            // If no duplicate is found, store the unique element
            ans = arr[s];
            break;
        }
        s++; // Move the start pointer to the next element
    }

    // Alternate approach: Using bitwise XOR (^) operator
    // Explanation:
    // 1. XOR of two identical numbers is 0 (a ^ a = 0)
    // 2. XOR of any number with 0 is the number itself (a ^ 0 = a)
    // Using this property, XOR all elements in the array. The duplicate elements 
    // will cancel each other out, leaving only the unique element.

    // Uncomment this block to use the XOR approach
    /*
    for (int i = 0; i < n; i++)
    {
        ans = arr[i] ^ ans; // XOR current element with ans
        // Step-wise explanation:
        // i=0, ans=0, arr[0]=1, ans=1
        // i=1, ans=1, arr[1]=2, ans=3
        // i=2, ans=3, arr[2]=3, ans=0
        // i=3, ans=0, arr[3]=4, ans=4
        // (and so on...)
    }
    */

    // Output the unique element found
    cout << "The unique element is " << ans;

    return 0;
}
