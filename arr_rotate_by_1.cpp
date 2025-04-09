#include <iostream>
using namespace std;

int main()
{
    // Initialize the size of the array and the array elements
    int n = 6, i;
    int arr[n] = {1, 2, 3, 4, 5, 6};
    
    // Store the last element of the array in a temporary variable
    int temp = arr[n - 1];

    // Display the initial array
    cout << "Initial array \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Shift elements of the array to the right by one position
    for (i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    // Place the last element at the first position
    arr[0] = temp;

    // Display the array after rotation by one position
    cout << "\nArray after rotation by 1 position \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
