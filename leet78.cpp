/* leet code 78. Subsets
Given an integer array nums of unique elements, return all possible subsets (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.
 */

#include <iostream>
#include<vector>
using namespace std;

void subSeq(vector<int>& nums, int idx, vector<vector<int>>& ans, vector<int>& temp)
{
    if(idx== nums.size()) 
    {
        ans.push_back(temp);
        return;
    }

    subSeq(nums, idx+1, ans, temp);

    temp.push_back(nums[idx]);
    subSeq(nums, idx+1, ans, temp);
    temp.pop_back();  // backtracking step to remove the last added element
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;

    subSeq(nums, 0, ans, temp);

    return ans;
}

int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = subsets(nums);

    for(auto i: ans)  // print all the subsets
    {
        cout<<"{ ";
        for(auto j: i)
        {
            cout<<j<<" ";
        }    
        cout<<"}"<<endl;
    }

    return 0;
}

// explanation in rec_power_set_of_array.cpp

// passed temp as reference to avoid copying and improve efficiency
// it also reduces the space complexity from O(n*2^n) to O(2^n)
// because we are not creating a new vector for each recursive call
// and pop_back() is used to remove the last added element to reset the temp