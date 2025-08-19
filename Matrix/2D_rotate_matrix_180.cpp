#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void matrixRotate(vector<vector<int>> &mat)
{
    int n= mat.size();

    int st=0, en=n-1;
    while(st<en)  //reversing rows of matrix
    { 
        swap(mat[st], mat[en]); 
        st++;
        en--;
    }

    for(int i=0; i<n; i++)  // reversing elemnts in each row
    { 
        int s=0, e=n-1;
        while(s<=e)
        {
            swap(mat[i][s], mat[i][e]);
            s++;
            e--;
        }
    }

    /* rotating the matrix 90 twice */
    // for(int k=1; k<=2; k++)
    // {
    //     for(int i=0; i<n; i++)
    //     {
    //         for(int j=i+1; j<n; j++)
    //         {
    //             swap(mat[i][j], mat[j][i]);
    //         }
    //     }

    //     for(int i=0; i<n; i++)
    //     {
    //         int st=0, en=n-1;
    //         while(st<en)
    //         {
    //             swap(mat[i][st], mat[i][en]);
    //             st++; en--;
    //         }
    //     }
    // }

}

int main()
{                                           // output
    vector<vector<int>> matrix={{1,2,3},    // 9 8 7 
                                {4,5,6},    // 6 5 4 
                                {7,8,9}};   // 3 2 1

    matrixRotate(matrix);
    cout << "Rotated Matrix by 180 degrees:" << endl;  
    for(int i=0; i<matrix.size(); i++)
    {
        for(int j=0; j<matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}