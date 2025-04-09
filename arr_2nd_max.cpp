#include <iostream>
using namespace std;
#include <climits>

int main()
{
    int n = 5; // Size of the array
    int arr[n] = {4, 10, 6, 20, 2}; // Array initialization

    // Find the largest element in the array
    int ans = INT_MIN; // Initialize 'ans' to the smallest possible integer
    for (int i = 0; i < n; i++) // Loop through each element in the array
    {
        if (arr[i] > ans) // If the current element is greater than 'ans'
        {
            ans = arr[i]; // Update 'ans' with the current element
        }
    }

    // Find the second largest element in the array
    int ans2 = INT_MAX; // Initialize 'ans2' to the largest possible integer
    for (int i = 0; i < n; i++) // Loop through each element in the array
    {
        if (arr[i] < ans2) // If the current element is smaller than 'ans2'
        {
            ans2 = arr[i]; // Update 'ans2' with the current element
        }
    }

    // Output the results
    cout << "Second largest element of the array\n ";

    // Print all array elements
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Print each element separated by a space
    }

    // Print the second largest element
    cout << "\nis: " << ans2 << endl;

    return 0; // Exit the program
}
