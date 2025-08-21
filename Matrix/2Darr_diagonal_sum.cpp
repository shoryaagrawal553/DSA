#include <iostream>
using namespace std;

int diagonalSum(int arr[][100], int n) // O(n^2) time complexity, O(1) space complexity
{
    int sum=0;

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         if(i==j)
    //         {
    //             sum+=arr[i][j]; // Adding the primary diagonal elements
    //         }
    //         else if(j==n-i-1)
    //         {
    //             sum+=arr[i][j]; // Adding the secondary diagonal elements
    //         }
    //     }
    // }

    for(int i=0; i<n; i++) // O(n) time complexity
    {
        sum+= arr[i][i]; // Adding the primary diagonal elements
        // The primary diagonal elements are at positions (0,0), (1,1), (2,2), ..., (n-1,n-1)

        if(i!=n-i-1) // To avoid double counting the center element in case of odd n
        {
            sum+= arr[i][n-i-1]; // Adding the secondary diagonal elements
        }
    }

    return sum;    
}

int main()
{
    int n=4;
    int arr[n][100]=
    {
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11,12}, 
        {13,14,15,16} };

    // int n=3;  // odd degree matrix
    // int arr[n][100]=
    // {
    //     {1,2,3,4}, 
    //     {5,6,7,8}, 
    //     {9,10,11,12}  };

        cout<<"some of both diagonals of the matrix is: "<< diagonalSum(arr, n);

    return 0;
}