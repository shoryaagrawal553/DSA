// Perfect Sum Problem
// Given an array of integers and a target sum, find the number of subsets of the given 
// array with a sum equal to the target sum.

#include <iostream>
#include<vector>
using namespace std;

int perfectSum(vector<int> arr, int n, int tar, int idx)
{
    // if(tar ==0)    this base would fail if 0 is present in the array 
    // {
    //     return 1; // found a subset
    // }
    // if(idx == n || tar < 0) return 0; // no subset found

    if(idx == n)  // now this will work fine even if 0 is present in the array
    {
        // if(tar==0) return 1; 
        // else return 0;
        return tar ==0;  // it will return 1 if tar==0 else 0
    }
    

    return perfectSum(arr, n, tar, idx+1) + perfectSum(arr, n, tar-arr[idx], idx+1);  
    // not include the element at idx   + include the element at idx  
}

int main()
{
    cout<<"Perfect Sum Problem\n";
    vector<int> arr={10, 5, 2, 3, 6, 0};
    int n=arr.size();
    int tar=8;
    int idx=0;
    cout<<"The number of subsets with sum equal to "<<tar<<" is: "<<perfectSum(arr, n, tar, idx)<<endl;

    return 0;
}
