#include<iostream>
using namespace std;

bool binSearch(int arr[], int k, int st, int en)
{
    if(st>= en) return 0;

    int mid = st+ (en-st)/2;

    if(arr[mid] == k) return 1;

    if(k < arr[mid]) return binSearch(arr, k, st, mid-1);

    if(k > arr[mid]) return binSearch(arr, k, mid+1, en);
    return 0; // to avoid warning
}

int main()
{
    int arr[7]= {1, 24, 33, 45, 58, 61, 66};
    int k=40;

    if(binSearch(arr, k, 0, 6)) cout<<"found!!";

    else cout<<"not found";

    return 0;
}