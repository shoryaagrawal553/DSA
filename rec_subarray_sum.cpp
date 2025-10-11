#include <iostream>
#include<vector>
using namespace std;

void subarraySum(vector<int> arr, int n, int idx, int sum, vector<int>& ans)
{   // T.C.: O(2^n), S.C.: O(n) for recursion stack
    if(idx == n) 
    {
        ans.push_back(sum);
        return;
    }

    subarraySum(arr, n, idx+1, sum, ans);  // arr[idx] not taken

    sum+= arr[idx];  // arr[idx] taken
    subarraySum(arr, n, idx+1, sum, ans);  
}

int main()
{
    vector<int> arr = {1,2,3};
    vector<int> ans;
    subarraySum(arr, arr.size(), 0, 0, ans);

    for(int i: ans) 
    {
        cout<<i<<" ";
    }
    return 0;
}