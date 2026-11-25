#include <iostream>
#include<vector>
using namespace std;

void merge(int arr[], int st, int mid, int en)
{
    vector<int> temp(en-st+1);
    int idx=0;
    int l=st, r=mid+1;

    while(l<=mid && r<=en)
    {
        if(arr[l] <= arr[r])
        {
            temp[idx] = arr[l];
            l++; 
            idx++;
        }
        else
        {
            temp[idx] = arr[r];
            r++;
            idx++;
        }
    }

    while(l<=mid)
    {
        temp[idx] = arr[l];
        l++; 
        idx++;
    }
    while(r<=en)
    {
        temp[idx] = arr[r];
        r++;
        idx++;
    }
idx=0;
    while(st<=en)
    {
        arr[st++] = temp[idx++];
    }
}

void divide(int arr[], int st, int en){
    if(st==en) return;

    int mid = st+(en-st)/2;
    divide(arr, st, mid);
    divide(arr, mid+1, en);

    merge(arr, st, mid, en);
}


int main()
{
    int n; 
    int arr[1000]; // Assuming a maximum size of 1000
    cout<<"Enter the elements of the array: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    divide(arr, 0, n-1);

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}