#include <iostream>
#include<vector>
using namespace std;

vector<int> bubbleSort(vector<int> &arr, int n)
{
    int i,j;

    for(i=0; i<n-1; i++)
    {
        for(j=0 ; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    return arr;
}

int main()
{
    vector<int> arr;
    int n, value;
    cout<<"enter the array size ";
    cin>>n;

    cout<<"Enter the elements: \n";

    for(int i=0; i<n; i++)
    {
        cin>> value;
        arr.push_back(value);
    }

    cout<<"sorted array is: \n";
    vector<int> ans = bubbleSort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }


    return 0;
}