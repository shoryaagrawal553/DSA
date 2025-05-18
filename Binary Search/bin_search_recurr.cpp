#include <iostream>
using namespace std;

int BinSearch(int tar, int arr[], int st, int en)
{
    if(st<=en)
    {

        int mid= st+ (en-st)/2;

        if(tar<arr[mid])
        {
            return BinSearch(tar, arr, st, mid-1);
        }

        else if(tar> arr[mid])
        {
            return BinSearch(tar, arr, mid+1, en);
        }

        else if(tar== arr[mid])
        {
            return mid;
        }
    }
    return -1; // if the element is not found
}    

int main()
{
    int arr[7]={-1, 0,3,4,5,9,12};

    int ans = BinSearch(12, arr, 0, 6);

    cout<<"the element is found at the index "<<ans<<endl;
    return 0;
}
