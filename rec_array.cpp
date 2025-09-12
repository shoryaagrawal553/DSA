#include <iostream>
using namespace std;

void print(int arr[],int n, int idx)
{
    if(idx== n) return;
    cout<<arr[idx]<<" ";
    print(arr, idx+1, n);
}

void revPrint(int arr[], int n, int idx)
{
    if(idx== n) return;

    revPrint(arr, n, idx+1);
    cout<<arr[idx]<<" ";
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    print(arr, 5, 0);
    revPrint(arr, 5, 0);
    return 0;
}