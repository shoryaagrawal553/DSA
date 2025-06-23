#include <iostream> // Include the standard input/output stream library
using namespace std; // Use the standard namespace for convenience

int main()
{
    int n = 6; // Define the size of the array
    int arr[n] = {5, 34, 22, 1, 61, 36}; // Initialize the array with sample values
    int i, target; // Declare variables for iteration and the target value

    // Prompt the user to enter the target value to search for
    cout << "enter the target ";
    cin >> target; // Read the target value from the user 

    // Iterate through the array to find the target value
    for (i = 0; i < n; i++)
    {
        // Check if the current element matches the target
        if (arr[i] == target)
        {
            // If found, print the index and position of the target
            cout << target << " found at index " << i << " and position " << i + 1;
            return 0; // Exit the program as the target is found
        }
    }

    // If the loop completes, the target is not in the array
    cout << target << " not found in the array ";

    return 0; // Return 0 to indicate successful program termination
}
