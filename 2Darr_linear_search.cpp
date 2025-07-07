#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int r=3, c=3;
    int key=3; 

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(matrix[i][j]==key)
            {
                cout<<key<<" found in cell "<<i+1<<","<<j+1<<endl;
                return 0;
            }
        }
    }

    cout<<key<<" not found";
    return 0;
}