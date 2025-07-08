#include <iostream>
using namespace std;

int getColSum(int arr[][3], int r, int c)
{
    int maxsum= INT_MIN;

    for(int j=0; j<c; j++)
    {
        int sum=0;
        for(int i=0; i<r; i++) // constant column no. and changing rows
        {
            sum+=arr[i][j];
        }
        maxsum= max(maxsum, sum);
    }

    return maxsum;
}

int main()
{
    int r=3, c=3;
    int arr[r][3]={{1,2,3}, {4,5,6}, {7,8,9}};

    cout<<"Max sum of the column is "<<getColSum(arr, r, c);    
    
    return 0;
}