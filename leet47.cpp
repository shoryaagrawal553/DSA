/* leetcode question 47:- Permutations II
Given a collection of numbers, nums, that might contain duplicates, 
return all possible unique permutations in any order.
Example 1:
    Input: nums = [1,1,2]
    Output:
        [[1,1,2],
        [1,2,1],
        [2,1,1]]  
Constraints:
    1 <= nums.length <= 8
    -10 <= nums[i] <= 10     */

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    void recFunc(vector<int>& nums, vector<vector<int>>& ans, int idx)
    {
        if(idx == nums.size())
        {
            ans.push_back(nums);
            return;
        }

        unordered_set<int> s; // could also use boolean array but here range is -10 to 10 so using set is better
        // more optimized approach is to sort the array
        for(int i=idx; i<nums.size(); i++)
        {
            if(s.find(nums[i]) == s.end())
            {
                s.insert(nums[i]);
                swap(nums[i], nums[idx]);
                recFunc(nums, ans, idx+1);
                swap(nums[i], nums[idx]);
            }
            else continue;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        recFunc(nums, ans, 0);
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 1, 2}; // total=3;  1 is 2x  hence, total permutations= 3!/(2!)=3
    // vector<int> nums = {1, 1, 2, 2}; // total=4;  1 is 2x , 2 is 2x hence, total permutations= 4!/(2!*2!)=6
    vector<vector<int>> result = sol.permuteUnique(nums);

    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout<<endl;
    }
}

/*
void recFunc(vector<int>& nums, vector<vector<int>>& ans, int idx)
{
    if(idx == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for(int i=idx; i<nums.size(); i++)
    {
        if(i != idx && nums[i] == nums[i-1]) continue; // skip the duplicates

        swap(nums[i], nums[idx]);  // fix one element and permute the rest
        recFunc(nums, ans, idx+1);
        swap(nums[i], nums[idx]);
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) 
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end()); // sorting is must to bring duplicates together
    recFunc(nums, ans, 0);
    return ans;
}
*/