#include <iostream> // Include the input-output stream library
using namespace std;

int main()
{
    int n = 6; // Define the size of the array
    int arr[n] = {1, 2, 3, 4, 5, 6}; // Initialize the array with elements
    int sum = 0, prod = 1; // Variables to store the sum and product of array elements
    
    // Loop through the array to calculate sum and product of elements
    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; // Add the current element to the sum
        prod *= arr[i]; // Multiply the current element to the product
    }

    // Print the sum and product of the array elements
    cout << "Sum of the elements of array is " << sum << "\nand product is " << prod;

    return 0; // Indicate that the program ended successfully
}
