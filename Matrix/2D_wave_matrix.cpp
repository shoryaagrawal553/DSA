#include <iostream>
#include<vector>
using namespace std;

vector<int> waveMatrix(vector<vector<int>> mat)
{
    int m= mat.size();
    int n= mat[0].size();
    vector<int> ans;

    // int col=0;
    // while(col<n) 
    for(int col=0; col<n; col++)
    {
        if(col%2==0)
        {
            for(int i=0; i<m; i++)
            {
                ans.push_back(mat[i][col]);
            }
            //col++;
        }

        else 
        {
            for(int i=m-1; i>=0; i--)
            {
                ans.push_back(mat[i][col]);
            }
            //col++;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix= {
        {1, 2, 3, 4},  
        {5, 6, 7, 8},
        {9, 10, 11, 12}  
    }; // Output: [1 5 9 10 6 2 3 7 11 12 8 4]

    vector<int> result = waveMatrix(matrix);
    cout << "Wave Matrix: ";
    for(int i: result)
    {
        cout << i << " ";
    }

    return 0;
}