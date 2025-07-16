/* leetcode problem 54. Spiral Matrix
Given an m x n matrix, return all elements of the matrix in spiral order.
Input: matrix = [[1,2,3,4],
//               [5,6,7,8],
//               [9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7] */

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) 
{
    int m= mat.size();
    int n= mat[0].size();
    vector<int> ans;

    int strow=0, enrow=m-1, stcol=0, encol=n-1;

    while(strow<=enrow && stcol<=encol)
    {
        for(int j=stcol; j<=encol; j++)  // top
        {
            ans.push_back(mat[strow][j]);
        }

        for(int i=strow+1; i<= enrow; i++)  // right 
        {
            ans.push_back(mat[i][encol]);
        }

        for(int j=encol-1; j>=stcol; j--)  // bottom
        {   // If there's only one row left (top == bottom), we already traversed it in the top row loop.
            if(strow==enrow)  // if we are at the last row, we should not repeat it
            {
                break;
            }
            ans.push_back(mat[enrow][j]);
        }

        for(int i= enrow-1; i>strow; i--)  // left 
        {// If there's only one column left (left == right), we already traversed it in the right column loop.
            if(stcol==encol)  // if we are at the last column, we should not repeat it
            {
                break;
            }
            ans.push_back(mat[i][stcol]);
        }

        strow++; enrow--; stcol++; encol--;
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},  
        {5, 6, 7, 8},
        {9, 10, 11, 12}  }; // Output: [1,2,3,4,8,12,11,10,9,5,6,7]

    // vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}}; // Output: [1,2,3,6,9,8,7,4,5]

    vector<int> ans = spiralOrder(matrix);
    cout << "Spiral Order: ";
    for (auto i : ans) 
    {
        cout << i << " ";
    }

    return 0;
}