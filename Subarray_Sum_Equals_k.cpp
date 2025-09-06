/* Given an array of integers nums and an integer k, return the total number of subarrays whose 
sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.
Example 1:
    Input: nums = [1,1,1], k = 2
    Output: 2
Example 2:
    Input: nums = [1,2,3], k = 3
    Output: 2
Constraints:
    1 <= nums.length <= 2 * 10^4
    -1000 <= nums[i] <= 1000
    -10^7 <= k <= 10^7  */

#include <bits/stdc++.h>
using namespace std;

// int subarraySum(vector<int>& nums, int k)   // Brute Force Approach T.C.: O(N^2) S.C.: O(1)
// {
//     int n= nums.size();
//     int count=0;

//     for(int i=0; i<n; i++)
//     {
//         int sum=0;
//         for(int j=i; j<n; j++)
//         {
//             sum= sum+ nums[j];
//             if(sum==k) count++;
//         }
//     }

//     return count;
// }


int subarraySum(vector<int>& nums, int k)  // Optimal Approach T.C.: O(N) S.C.: O(N)
{
    int n = nums.size();
    vector<int> ps(n,0) ;  // prefix sum

    ps[0] =nums[0]; 
    for(int i=1; i<n; i++)
    {
        ps[i] = nums[i] + ps[i-1];
    }

    int count =0;
    unordered_map<int, int> m; // ps value, frequency 

    for(int j=0; j<n; j++)   
    {
        if(ps[j] == k)  count++;  // if the prefix sum itself is equal to k

        int val = ps[j] - k;   // since ps[j] - ps[i] = k  => ps[i] = ps[j] - k eg. ps[j]=8, k=3 => ps[i]=5
        if(m.find(val) != m.end() )
        {
            count += m[val];  // add the frequency of ps[i] found so far
        }

        if(m.find(ps[j]) == m.end())  // if ps[j] is not present in the map
        {
            m[ps[j]] = 0; // initialize its frequency to 0
        }
        m[ps[j]]++; // increment the frequency of ps[j]
    }

    return count;
}


int main()
{
    vector<int> nums = {1,1,1};
    int k = 2;
    // vector<int> nums = {1,2,3};
    // int k = 3;
    // vector<int> nums = {9,4,20,3,10,5};
    // int k = 33;

    cout<<"the number of subarrays summing to "<<k<<" is "<< subarraySum(nums, k);

    return 0;
}