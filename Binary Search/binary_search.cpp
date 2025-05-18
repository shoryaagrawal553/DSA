#include <iostream>
using namespace std;

int main()
{
    int n= 7;
    int arr[n]={-1, 0,3,4,5,9,12};

    int st=0, e= n-1;
    int tar=12;

    while(st<=e)
    {
        // int mid= (st+e)/2;
        int mid= st + (e-st)/2; // to avoid overflow
        
        if(tar<arr[mid])
        {
            e=mid-1;
        }

        else if(tar> arr[mid])
        {
            st = mid+1;
        }

        else if(tar== arr[mid])
        {
            cout<<"element found at index "<<mid;
            return 0;
        }
    }

    return 0;
}