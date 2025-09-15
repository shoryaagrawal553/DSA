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
        Explanation: The only possible triplet sums up to 0. */

#include <iostream>
#include<vector>    
#include<algorithm>
using namespace std;    // brute and better approach in leet15

vector<vector<int>> threeSum(vector<int>& nums) // my approch optimal approch using 2 pointer T.C= O(n^2) and S.C= O(1)
{ 
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for (int idx = 0; idx < n - 2; idx++) 
    {
        // Skip duplicate elements for idx
        if (idx > 0 && nums[idx] == nums[idx - 1]) continue;

        int s = idx + 1, e = n - 1;
        while (s < e) 
        {
            int sum = nums[idx] + nums[s] + nums[e];
            if (sum == 0) 
            {
                ans.push_back({nums[idx], nums[s], nums[e]});

                // Move both pointers, skipping duplicates
                while (s < e && nums[s] == nums[s + 1]) s++;
                while (s < e && nums[e] == nums[e - 1]) e--;

                s++;
                e--;
            }
            else if (sum < 0)  s++;

            else  e--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums= {-1,0,1,2,-1,-4};
    // vector<int> nums= {0,1,1};
    // vector<int> nums= {0,0,0};
    // vector<int> nums= {2, -2, -2, 0, 0, 2, 2};
    vector<vector<int>> result = threeSum(nums);
    
    return 0;
}
