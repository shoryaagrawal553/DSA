#include <iostream>
using namespace std;

// mentioning nmber of columns is compulsory in C++, rows can be omitted
int maxRowSum(int arr[][3], int r, int c)
{
    int maxSum=INT_MIN;

    for(int i=0; i<r; i++)
    {
        int row_sum=0;
        for(int j=0; j<c; j++)
        {
            row_sum+=arr[i][j];
        }
        maxSum= max(maxSum, row_sum);
    }

    return maxSum;
}

int main()
{
    int r=3, c=3;
    int arr[r][3]={{1,2,3}, {4,5,6}, {7,8,9}};

    cout<<"Max sum of the row is "<<maxRowSum(arr, r, c);
    
    return 0;
}