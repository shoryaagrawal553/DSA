/* leetcode problem 240 :- Search a 2D Matrix II
Write an efficient algorithm that searches for a value target in an m x n integer matrix mat. 
This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.   */

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) 
{
    int m= mat.size();
    int n= mat[0].size();
    int row= 0, col=n-1;

    while(row<m && col>=0) // Start from the top-right corner of the matrix
    {
        if(target== mat[row][col]) return true; // If the target is found, return true

        else if(target < mat[row][col]) col--; // If the target is less than the current element, move left

        else if(target > mat[row][col]) row++; // If the target is greater than the current element, move down
    }

    return false;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target;
    cout << "Enter target: ";
    cin >> target;
    bool ans = searchMatrix(mat, target);

    if(ans) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}