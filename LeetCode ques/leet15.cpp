/* leetcode 15: 3Sum
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that 
i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
    Example 1:
        Input: nums = [-1,0,1,2,-1,-4]
        Output: [[-1,-1,2],[-1,0,1]]
        Explanation: 
            nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
            nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
            nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
            The "distinct" triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
    Example 2:
        Input: nums = [0,1,1]
        Output: []
        Explanation: The only possible triplet does not sum up to 0.
    Example 3:
        Input: nums = [0,0,0]
        Output: [[0,0,0]]
        Explanation: The only possible triplet sums up to 0.   */

// #include<iostream>
// #include<vector>
// #include<set>
#include<bits/stdc++.h>  // contains all standard libraries like iostream, vector, set, map, algorithm, etc.
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) // brute force approach T.C= O(n^3) and S.C= O(1)
{
    int n = nums.size();
    vector<vector<int>> ans;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if((nums[i]+nums[j]+nums[k]) == 0)
                {
                    vector<int> trip= {nums[i], nums[j], nums[k]};
                    sort(trip.begin(),trip.end());
                    set<vector<int>> s;
                    //if(s.find(trip) == s.end())
                    //{
                        s.insert(trip);
                        ans.push_back(trip);
                    // }
                    
                }
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums= {-1,0,1,2,-1,-4};
    // vector<int> nums= {0,1,1};
    // vector<int> nums= {0,0,0};
    vector<vector<int>> result = threeSum(nums);

    return 0;
}
