#include <iostream>
#include<vector>
using namespace std;

void transposeMatrix (vector<vector<int>> &mat)
{
    int m=mat.size();
    int n= mat[0].size();

    for(int i=0; i<m; i++)
    {
        for(int j=i+1; j<n; j++)  //for(int j=0; j<n; j++)
        {
            //if(j<=i) continue;
            swap(mat[i][j], mat[j][i]);
        }
    }
}

int main()
{
    vector<vector<int>> mat= {
        {1,2,3},
        {4,5,6},
        {7,8,9} };

    transposeMatrix(mat);
    int m= mat.size();
    int n= mat[0].size();
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}