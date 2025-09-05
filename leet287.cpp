/*leetcode 287. Find the Duplicate Number  
Given an array of integers nums containing n + 1 integers where each integer is in the 
range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and using only constant extra space.
Example 1:
Input: nums = [1,3,4,2,2]
Output: 2
Example 2
Input: nums = [3,1,3,4,2]
Output: 3
Example 3:
Input: nums = [3,3,3,3,3]
Output: 3
Constraints:
1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.  */

#include <iostream>  // using unordered_set and slow fast pointer in uset_Find The Duplicate Number
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) 
{
    int n= nums.size();
    vector<int> freq(n,0);  // frequency array of size n initialised with 0

    if(n==1) return nums[0];

    for(int i=0; i<n; i++)
    {
        freq[nums[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        if(freq[i] > 1) return i; 
    }
    return 0;
}

int main()
{
    vector<int> nums = {3,1,3,4,2};
    // vector<int> nums = {3,3,3,3,3};
    // vector<int> nums = {1,3,4,2,2};
    
    cout<<findDuplicate(nums);


    return 0;
}