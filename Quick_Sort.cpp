#include <iostream>
#include<vector>
using namespace std;

int partition (vector<int> &arr, int st, int en)
{
    int pos= st;
    int pivot = arr[en];  // taking end element as pivot
    
    for(int i=st; i<=en; i++)
    {
        if(arr[i]<= pivot)  
        {
            swap(arr[i], arr[pos]);  // swapping current element with the element at pos
            pos++;
        }
    }

    return pos-1;  // returns index of pivot element after it getting arranged to correct position
}

void quickSort(vector<int> &arr, int st, int en)
{
    if(st>=en)  // base case
        return;
    int pivot= partition (arr, st, en);  // 4 index of pivot

    quickSort(arr, st, pivot-1);  // left half
    quickSort(arr, pivot+1, en);  // right half
}

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};  // 1, 5, 7, 8, 9, 10
    int n = arr.size();
    quickSort(arr, 0, n-1);
    cout << "Sorted array: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }

    return 0;
}