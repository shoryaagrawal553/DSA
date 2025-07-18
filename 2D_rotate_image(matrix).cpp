/*leetcode problem 48  Rotate Image
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.
DO NOT allocate another 2D matrix and do the rotation.
Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]   */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>>& mat)
{
    int n= mat.size();

    for(int i=0; i<n; i++)   // transpose of matrix
    {
        for(int j=i+1; j<n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }

    for(int i=0; i<n; i++)  // reversing each row
    {
        int st=0, en= n-1;
        while(st<=en)
        {
            swap(mat[i][st], mat[i][en]);
            st++; en--;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    rotate(matrix);
    cout << "Rotated Matrix:" << endl;
    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
