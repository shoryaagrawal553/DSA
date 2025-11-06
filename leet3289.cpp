/* 3289. The Two Sneaky Numbers of Digitville
In the town of Digitville, there was a list of numbers called nums containing integers from 0 to n - 1. Each number was supposed to appear exactly once in the list, however, two mischievous numbers sneaked in an additional time, making the list longer than usual.
As the town detective, your task is to find these two sneaky numbers. Return an array of size two containing the two numbers (in any order), so peace can return to Digitville. 
Example 1:
    Input: nums = [0,1,1,0]
    Output: [0,1]
    Explanation:
        The numbers 0 and 1 each appear twice in the array. */

#include<bits/stdc++.h>
using namespace std;

vector<int> getSneakyNumbers(vector<int>& nums) 
{
    vector<int> ans;
    unordered_set<int> count;

    for(int i=0; i<nums.size(); i++)
    {
        // if(count.find(nums[i]) == count.end())
        if(!count.count(nums[i])) // since its a set, the count can either be 0 or 1
        {
            count.insert(nums[i]);
        }

        else 
        {
            ans.push_back(nums[i]);
        }
    }   
    return ans; 
}

int main()
{
    vector<int> nums = {0,1,1,0};  // result: [0,1]
    // vector<int> nums = {2,3,1,0,2,5,3};  // result: [2,3]
    // vector<int> nums = {7,1,5,4,3,4,6,0,9,5,8,2};  // result: [4,5]
    vector<int> result = getSneakyNumbers(nums);

    cout << "The two sneaky numbers are: ";
    for(int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}