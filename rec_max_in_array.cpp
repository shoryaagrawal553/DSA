#include <iostream>
using namespace std;

int maxElement(int arr[], int n, int idx)
{
    if(idx == n-1) return arr[idx];

    return max(arr[idx], maxElement(arr, n, idx+1));
}

int main()
{
    int arr[] = {3,5,2,8,6};
    cout<<maxElement(arr, 5, 0);

    return 0;
}