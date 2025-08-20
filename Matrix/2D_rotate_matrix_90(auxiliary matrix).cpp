#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>>& mat)
{
    int m= mat.size();
    int n= mat[0].size();

    vector<vector<int>> ans(m, vector<int>(n));

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            ans[j][n-i-1] = mat[i][j];  //ex: 1,2 -> 2,1 
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>>matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> ans = rotateMatrix(matrix);
    cout << "Rotated Matrix:" << endl;
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}