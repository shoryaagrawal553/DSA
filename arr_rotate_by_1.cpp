#include <iostream>
using namespace std;

int main()
{
    int n= 6, i;
    int arr[n]={1,2,3,4,5,6};
    int temp = arr[n-1];

    cout<<"initial array \n";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    for( i=n-2; i>=0; i--)
    {
        arr[i+1]= arr[i];
    }
    arr[0]=temp;

    cout<<"\nReversed array \n";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}