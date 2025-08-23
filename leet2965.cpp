// leetcode problem 2965: Find Missing and Repeated Values
/* You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. 
Each integer appears exactly once except a which appears twice and b which is missing. 
The task is to find the repeating and missing numbers a and b.
Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.
Example 1:
Input: grid = [[1,3],[2,2]]
Output: [2,4]
Explanation: Number 2 is repeated and number 4 is missing so the answer is [2,4].
Example 2:
Input: grid = [[9,1,7],[8,9,2],[3,4,6]]
Output: [9,5]
Explanation: Number 9 is repeated and number 5 is missing so the answer is [9,5]. */

#include<iostream>
#include<vector>
using namespace std;

// solution using frequency array
// unordered_set solution is in Find Missing and Repeated Values.cpp

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    int size = n * n;
    vector<int> freq(size + 1, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            freq[grid[i][j]]++;
        }
    }

    int a = -1, b = -1;

    for (int num = 1; num <= size; num++) {
        if (freq[num] == 2) {
            a = num;
        } else if (freq[num] == 0) {
            b = num;
        }
    }

    return {a, b};
}

int main() 
{
    vector<vector<int>> grid = {{1, 3}, {2, 2}};    
    // vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> result = findMissingAndRepeatedValues(grid);
    cout << "The repeating and missing values are: " << result[0] << " and " << result[1] << endl;
    // Output: The repeating and missing values are: 2 and 4
    return 0;
}

