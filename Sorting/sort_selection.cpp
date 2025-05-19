#include <iostream>
using namespace std;

void selectionSort (int arr[], int n)
{
    int i, j;

    for( i=0; i<n-1; i++)
    {
        int minAtIndx= i;

        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minAtIndx])
            {
                minAtIndx= j;
            }
        }

        swap (arr[i], arr[minAtIndx]);
    }

    for(i=0; i<n; i++)
    {
        cout<< arr[i]<<" ";
    }
}

int main()
{
    int n = 6; 
    int arr[n]= {5,3,8,6,4,1};

    cout<<"the sorted array is: \n";
    selectionSort(arr,n);
    return 0;
}