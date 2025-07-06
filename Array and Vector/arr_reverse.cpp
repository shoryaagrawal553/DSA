// Include the iostream library for input/output operations
#include <iostream>
using namespace std;

int main()
{
    // Initialize the size of the array
    int n = 6;
    // Declare and initialize the array with 6 elements
    int arr[n] = {1, 2, 3, 4, 5, 6};
    // Define variables to mark the start and end of the array
    int start = 0, end = n - 1, i;  

    // Print the initial array
    cout << "Initial array \n";
    for(i = 0; i < n; i++)
    {
        // Print each element of the array
        cout << arr[i] << " ";
    }

    // Reverse the array using a two-pointer approach
    // The loop continues until the start index is less than the end index
    while(start < end) // Alternatively, you could use: for (int start = 0, end = n - 1; start < end; start++, end--)
    {
        // Swap the elements at the start and end indices
        swap(arr[start], arr[end]);
        // Move the start index forward
        start++;
        // Move the end index backward
        end--;
    }

    // Print the reversed array
    cout << "\nReversed array \n";
    for(i = 0; i < n; i++)
    {
        // Print each element of the reversed array
        cout << arr[i] << " ";
    }

    return 0;
}
