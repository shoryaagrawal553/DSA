#include <iostream>
using namespace std;

int partition(int arr[], int st, int en)
{
    int pos=st;

    for(int i=st; i<=en; i++)
    {
        if(arr[i]<=arr[en])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void qSort(int arr[], int st, int en)
{
    if(st>=en) return;

    int pivot= partition(arr, st, en);

    qSort(arr, st, pivot-1);
    qSort(arr, pivot+1, en);
}

int main()
{
    // int arr[]={5, 4, 3, 2, 1};
    int arr[]={2, 4, 1, 5, 3};

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    qSort(arr, 0, 4);

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}