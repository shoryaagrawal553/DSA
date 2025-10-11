// in a given array, if the sum of any subarray is equal to target sum, return true else false
#include<iostream>
#include<vector>
using namespace std;

bool targetSum(vector<int> arr, int tar, int n, int idx, int sum)
{
    // if(idx==n && sum==tar) return true; 
// there is no need to check idx==n, because if sum==tar, we can return true directly

    if(sum==tar) return true;

    if(idx==n) return false; // if idx reaches end of array and sum is not equal to target, return false

    /* return targetSum(arr, tar, n, idx+1, sum);

    return targetSum(arr, tar, n, idx+1, sum+arr[idx]); */

    // ✅ FIXED:
    // Earlier you had two separate `return` statements, making the second one unreachable.
    // Now we combine both recursive calls using OR (||):
    // 1. Exclude current element from the sum
    // 2. Include current element in the sum
    // If either path reaches the target, return true, as (0 OR 1) == 1

    return targetSum(arr, tar, n, idx+1, sum) || targetSum(arr, tar, n, idx+1, sum+arr[idx]);
}

int main()
{
    vector<int> arr={3, 6, 4, 5};
    
    if(targetSum(arr, 2, arr.size(), 0, 0))
    {
        cout<<"target found in the subsets";
    }

    else
        cout<<"target not found in the subsets";

    return 0;
}