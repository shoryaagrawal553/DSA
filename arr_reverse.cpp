#include <iostream>
using namespace std;

int main()
{
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    int start=0, end=n-1, i ;  

    cout<<"initial array \n";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    while(start<end) //for (int start = 0, end = n - 1; start < end; start++, end--)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout<<"\nReversed array \n";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}