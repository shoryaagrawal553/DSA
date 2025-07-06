// Include the iostream library for input/output operations
#include<iostream>
using namespace std;

int main()
{
    // Initialize an array with 5 elements
    int a[5] = {55, 65, -22, 31, 43000};
    int i;

    // Uncommented section contains different methods to find the smallest and largest elements in the array

    /*
    Method 1: Using a simple approach
    Initialize 'smallest' and 'largest' with the first element of the array
    */
    // int smallest = a[0], largest = a[0];
    // for(i = 1; i < 5; i++)
    // {
    //     if(a[i] < smallest)
    //     {
    //         smallest = a[i];
    //     }
    //     else if(a[i] > largest)
    //     {
    //         largest = a[i];
    //     }
    // }

    /*
    Method 2: Using INT_MAX and INT_MIN for initialization
    This method is useful when the array may contain very large or very small values
    */
    // int smallest = INT_MAX, largest = INT_MIN;
    // for(i = 0; i < 5; i++)
    // {
    //     if(a[i] < smallest)
    //     {
    //         smallest = a[i];
    //     }
    //     else if(a[i] > largest)
    //     {
    //         largest = a[i];
    //     }
    // }

    // Uncomment the following lines to print the results of Method 1 or Method 2
    // cout << "smallest value is: " << smallest;
    // cout << "\nlargest value is: " << largest;

    /*
    Method 3: Using built-in functions
    This method is efficient and concise but requires including additional libraries
    */
    // int smallest = min(a, b);
    // int largest = max(a, b);

    // Method 4: Using a loop with built-in min and max functions
    int smallest = 0, largest = 0;
    for(i = 0; i < 5; i++)
    {
        // Update smallest and largest using the min and max functions
        smallest = min(smallest, a[i]);
        largest = max(largest, a[i]);
    }

    // Output the smallest and largest values
    cout << "smallest value is: " << smallest;
    cout << "\nlargest value is: " << largest;

    return 0;
}

/*
Notes:
- If you know the array is non-empty and contains valid values, use Method 1 for simplicity and efficiency.
- If you want a more generalized solution, use Method 2.
*/
