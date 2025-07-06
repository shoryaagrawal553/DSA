#include <iostream> // Include the iostream library for input/output operations
using namespace std;

int main()
{
    int n = 10; // Number of elements in the array
    int arr[n] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 1}; // Array containing elements, with some duplicates
    int ans = 0; // Variable to store the unique element
    int s = 0, e = n - 1; // Pointers to start and end of the array

    // Loop to find the unique element by comparing each element
    while (s <= e)
    {
        // Check each element from the start
        for (int i = 0; i < n; i++) // Iterate through the array
        {
            if (arr[s] == arr[i]) // If current start element matches another element
            {
                e--; // Decrement the end pointer
            } 
            else
            {
                ans = arr[s]; // Found unique element
                break; // Exit the loop as the unique element is found
            }
        }
        s++; // Move the start pointer to the next element
    }

    // Alternative approach using bitwise XOR (^) operator
    // Explanation:
    //  - a ^ a = 0 (any number XORed with itself is 0)
    //  - a ^ 0 = a (any number XORed with 0 remains unchanged)
    //  - XORing all elements cancels out duplicates, leaving only the unique element
    /*
    cout << "the unique element is " << ans;

    for (int i = 0; i < n; i++)
    {
        ans = arr[i] ^ ans; // XOR the current element with the accumulated result
        // Example trace:
        // i=0, ans=0, arr[0]=1, ans=1
        // i=1, ans=1, arr[1]=2, ans=3
        // i=2, ans=3, arr[2]=3, ans=0
        // i=3, ans=0, arr[3]=4, ans=4
    }
    */

    cout << "the unique element is " << ans; // Print the unique element
    return 0; // Exit the program
}
