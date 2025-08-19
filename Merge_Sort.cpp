#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int en)
{
    vector<int> temp;  // to add elements we can either use push_back or take a pos pointer to keep track of indices of temp
    int left= st, right= mid+1;

    while(left<=mid && right<=en)
    {
        if(arr[left]<= arr[right])  // if element in left half is smaller
        {
            temp.push_back(arr[left]);
            left++;
        }
        else     // if element in right half is smaller
        {    
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<= mid)  // if element are still remaining in left half
    {
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=en)  // if element are still remaining in right half
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=0; i<temp.size(); i++)   // transfering elements from temp to original array
    {
        arr[i+st]= temp[i];
    }
}

void mergeSort(vector<int> &arr, int st, int en)
{
    if(st<en)  // base case
    {   
        int mid= st+ (en-st)/2;

        mergeSort(arr, st, mid);    // taking mid in left
        mergeSort(arr, mid+1, en);  // right half

        merge(arr, st, mid, en);  // 
    }
}

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};  // 1, 5, 7, 8, 9, 10
    int n = arr.size();    
    mergeSort(arr, 0, n-1);
    cout << "Sorted array: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    
    return 0;
}