#include<iostream>
#include<vector>
using namespace std;

// one method can be rotating 90 degree three times i.e. 270 degree rotation

void antiClockwise_90 (vector<vector<int>> &mat)
{
    int m= mat.size();  // row
    int n= mat[0].size();  // col

    for(int i=0; i<m; i++)   // step-1) transpose matrix
    {
        for(int j=0; j<n; j++)
        {
            if(j>i)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
    }

    for(int j=0; j<n; j++)  // reverse column
    {
        int st=0, en=n-1;
        while(st<en)
        {
            swap(mat[st][j], mat[en][j]);
            st++; en--;
        }
    }
}

int main()
{
    vector<vector<int>> matrix= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    antiClockwise_90(matrix);

    for(int i=0; i<matrix.size(); i++)
    {
        for(int j=0; j<matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}

// 1) row reverse, then transpose = 90 anticlock wise 
// 2) transpose, then row reverse = 90 clockwise rotation
// 3) column reverse, then transpose = 90 clock wise