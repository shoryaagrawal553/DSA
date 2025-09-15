/* leet code question 18: 4Sum
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], 
nums[b], nums[c], nums[d]] such that:
    0 <= a, b, c, d < n
    a, b, c, and d are distinct.
    nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.
Example 1:
    Input: nums = [1,0,-1,0,-2,2], target = 0
    Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:
    Input: nums = [2,2,2,2,2], target = 8
    Output: [[2,2,2,2]]  */

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) 
{
    int n= nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for(int i=0; i<n; i++)
    {
        if(i>0 && nums[i] == nums[i-1]) continue;

        for(int j=i+1; j<n;)
        {
            int s=j+1, e=n-1;
            while(s<e)
            {
                long long sum= (long long)nums[i]+(long long)nums[j]+(long long)nums[s]+(long long)nums[e]; 
                if(sum  == target)
                {
                    ans.push_back({nums[i], nums[j], nums[s], nums[e]});
                    s++; e--;
                    while(s<e && nums[s] == nums[s-1]) s++;
                    //while(s<e && nums[e] == nums[e+1]) e--;
                } 
                else if(sum<target) s++;
                else e--;
            }   
            j++;
            while(j<n && nums[j] == nums[j-1]) j++;
        }
    }  
    return ans;  
}

int main()
{
    vector<int> nums= {1,0,-1,0,-2,2};
    int target=0;
    // vector<int> nums= {2,2,2,2,2};
    // int target=8;    
    // vector<int> nums= {000000000,1000000000,1000000000,1000000000}; // reason of long long
    // int target= 0;

    vector<vector<int>> result = fourSum(nums, target);
    for(auto v: result)
    {
        for(auto x: v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}