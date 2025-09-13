#include <iostream>
using namespace std;

void print(int arr[],int n, int idx)
{
    if(idx== n) return;
    cout<<arr[idx]<<" ";
    print(arr, n, idx+1);
}

void revPrint(int arr[], int n, int idx)  // to print array in reverse order without decrementing idx
{
    if(idx== n) return;

    revPrint(arr, n, idx+1);
    cout<<arr[idx]<<" ";
}

void revPrint2(int arr[], int idx)  // to print array in reverse order by decrementing idx without passing n
{
    if(idx<0) return;

    cout<<arr[idx]<<" ";
    revPrint2(arr, idx-1);
}

void printArray(int arr[], int idx)  // another way to print array in reverse order by decrementing idx without passing n
{
    if(idx<0) return;

    printArray(arr, idx-1);
    cout<<arr[idx]<<" ";
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    print(arr, 5, 0);
    cout<<endl;

    revPrint(arr, 5, 0);
    cout<<endl;

    revPrint2(arr, 4);
    cout<<endl;

    printArray(arr, 4);
    cout<<endl;
    
    return 0;
}