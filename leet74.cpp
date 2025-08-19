/* leetcode que- 74 Search a 2D Matrix
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.     */

#include <iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    int m = matrix.size();  // row
    int n= matrix[0].size();  // col

    int st=0, en=m-1 ;

    while(st<=en)  // to find the where the target may be present
    {
        int midR= st+ (en-st)/2;
            
        if(target>= matrix[midR][0] && target<= matrix[midR][n-1])
        {
            st=0, en= n-1;

            while(st<= en) // to find the target in the row
            {
                int midC =st + en-st/2;
                if(target== matrix[midR][midC]) return true;

                else if(target > matrix[midR][midC]) st= midC+1;

                else if(target < matrix[midR][midC]) en= midC-1;
                
            }
        }

        else if(target < matrix[midR][0])  en=midR-1;  // if target is less than the first element of the mid row, then search in the upper rows

        else if(target > matrix[midR][n-1])  st=midR+1; // if target is greater than the last element of the mid row, then search in the lower rows
    } 

    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target;
    cout << "Enter target: ";
    cin >> target;

    bool ans = searchMatrix(matrix, target);

    if (ans) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}