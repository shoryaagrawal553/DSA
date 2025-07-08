#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}  };

        cout<<matrix[0][0]<<endl;

        // for(int i=0; i<4; i++)
        // {
        //     for(int j=0; j<4; j++)
        //     {
        //         cout<<matrix[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        // to define size dynamically 
        // rows= matrix.size()
        //cols= matrix[i].size()   : no. of elements in a row = no. of cols in that row

        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }


    return 0;
}