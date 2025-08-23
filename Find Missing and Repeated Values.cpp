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

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// solution using unordered_set
vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)  // beats 45.73%, 100% in leet2965
{
    unordered_set<int> u_Set;
    vector<int> ans;
    int a, b;

    int n = grid.size();
    for (int i = 0; i < n; i++) // reapeating element
    {
        for (int j = 0; j < n; j++)
        {
            if (u_Set.count(grid[i][j])) // count(value): Returns 1 if the element is present, 0 otherwise.
            {
                a = grid[i][j];
                ans.push_back(a);
            }
            else
                u_Set.insert(grid[i][j]);
        }
    }

    int actual_sum = 0;
    for (int i = 0; i < n; i++) // reapeating element
    {
        for (int j = 0; j < n; j++)
        {
            actual_sum += grid[i][j];
        }
    }

    // by Arithmatic progression, sum of n natural number = n(n+1)/2
    // hence for n^2 = (n^2)[(n^2)+1]/2
    int expected_sum; // sum of all the numbers from 1 to n^2, if non were missing or repeating
    int x = n * n;
    expected_sum = (x) * (x + 1) / 2;

    // actual_sum = expected_sum + a - b
    b = expected_sum + a - actual_sum; // missing value
    ans.push_back(b);

    return ans;
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