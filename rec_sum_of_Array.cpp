#include <iostream>
using namespace std;

int Sum(int arr[], int n, int idx)
{
    if(idx==n) return 0;

    return arr[idx] + Sum(arr, n, idx+1);
}

int main()
{
    int arr[] = {3,4,5,8,2};

    cout<<Sum(arr, 5, 0);
    
    return 0;
}